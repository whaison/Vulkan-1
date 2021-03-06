/**
 * VKTS - VulKan ToolS.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) since 2014 Norbert Nopper
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef VKTS_ISCENEFACTORY_HPP_
#define VKTS_ISCENEFACTORY_HPP_

#include <vkts/scenegraph/vkts_scenegraph.hpp>

namespace vkts
{

class ISceneFactory
{

public:

    ISceneFactory()
    {
    }

    virtual ~ISceneFactory()
    {
    }

    virtual ISceneRenderFactorySP getSceneRenderFactory() const = 0;

    //

    virtual IPhongMaterialSP createPhongMaterial(const ISceneManagerSP& sceneManager, const VkBool32 forwardRendering) = 0;

    virtual IBSDFMaterialSP createBSDFMaterial(const ISceneManagerSP& sceneManager, const VkBool32 forwardRendering) = 0;

    //

    virtual ISubMeshSP createSubMesh(const ISceneManagerSP& sceneManager) = 0;

    virtual IMeshSP createMesh(const ISceneManagerSP& sceneManager) = 0;

    //

    virtual IChannelSP createChannel(const ISceneManagerSP& sceneManager) = 0;

    virtual IMarkerSP createMarker(const ISceneManagerSP& sceneManager) = 0;

    virtual IAnimationSP createAnimation(const ISceneManagerSP& sceneManager) = 0;

    //

    virtual ICameraSP createCamera(const ISceneManagerSP& sceneManager) = 0;

    virtual ILightSP createLight(const ISceneManagerSP& sceneManager) = 0;

    virtual IParticleSystemSP createParticleSystem(const ISceneManagerSP& sceneManager) = 0;

    //

    virtual IConstraintSP createCopyConstraint(const ISceneManagerSP& sceneManager, const enum CopyConstraintType copyConstraintType) = 0;

    virtual IConstraintSP createLimitConstraint(const ISceneManagerSP& sceneManager, const enum LimitConstraintType limitConstraintType) = 0;

    //

    virtual INodeSP createNode(const ISceneManagerSP& sceneManager) = 0;

    //

    virtual IObjectSP createObject(const ISceneManagerSP& sceneManager) = 0;

    //

    virtual ISceneSP createScene(const ISceneManagerSP& sceneManager) = 0;

    //

    virtual VkBool32 useGPU() const = 0;

};

typedef std::shared_ptr<ISceneFactory> ISceneFactorySP;

} /* namespace vkts */

#endif /* VKTS_ISCENEFACTORY_HPP_ */
