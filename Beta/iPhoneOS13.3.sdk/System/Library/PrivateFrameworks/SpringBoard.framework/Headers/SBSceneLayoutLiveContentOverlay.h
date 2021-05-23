/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableDictionary, NSString, SBFHomeGrabberSettings, SBMainDisplaySceneLayoutViewController, SBOrientationTransformWrapperView, SBWindowSelfHostWrapper, UIView;

@interface SBSceneLayoutLiveContentOverlay : NSObject <Swift>

{
    _Bool _wantsMinificationFilter;
    _Bool _asynchronousRenderingTemporarilyDisabled;
    long long _containerOrientation;
    long long _rasterizationStyle;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    SBWindowSelfHostWrapper *_sceneLayoutWindowHostWrapper;
    SBOrientationTransformWrapperView *_sceneLayoutOrientationWrapperView;
    SBFHomeGrabberSettings *_grabberSettings;
    NSMutableDictionary *_statusBarAssertions;
}

@property (weak, nonatomic, readonly) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (nonatomic, readonly) SBWindowSelfHostWrapper *sceneLayoutWindowHostWrapper;
@property (nonatomic, readonly) SBOrientationTransformWrapperView *sceneLayoutOrientationWrapperView;
@property (nonatomic, readonly) SBFHomeGrabberSettings *grabberSettings;
@property (nonatomic) long long containerOrientation;
@property (retain, nonatomic) NSMutableDictionary *statusBarAssertions;
@property (nonatomic, readonly) long long rasterizationStyle;
@property (nonatomic, readonly) _Bool wantsMinificationFilter;
@property (nonatomic, readonly) _Bool asynchronousRenderingTemporarilyDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *contentOverlayView;

- (void)dealloc;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)setUsesBrightSceneViewBackgroundMaterial:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 nubViewHidden:(_Bool)arg2 animator:(CDUnknownBlockType)arg3;
- (void)setHomeGrabberHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(_Bool)arg2;
- (id)initWithSceneLayoutViewController:(id)arg1;
- (void)_evaluateAsynchronousRenderingEnablement;

@end
