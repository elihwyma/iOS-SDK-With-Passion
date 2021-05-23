/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBSceneLayerHostView.h>

@class FBScene, FBSceneHostManager, FBSceneMonitor, NSString, UIView;

@protocol FBSceneHostView;

@interface FBExternalSceneLayerHostView : FBSceneLayerHostView

{
    FBScene *_parentScene;
    FBScene *_targetScene;
    FBSceneMonitor *_monitor;
    FBSceneHostManager *_hostManager;
    NSString *_requester;
    NSString *_targetSceneID;
    UIView<FBSceneHostView> *_hostView;
}

@property (nonatomic, readonly) FBScene *targetScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_updateHostingState;
- (void)_updateTargetScene;
- (id)initWithSceneLayer:(id)arg1 parentScene:(id)arg2;
- (void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2;

@end
