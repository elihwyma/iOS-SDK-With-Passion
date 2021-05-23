/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBInlineAppExposeContainerViewController, UIView;

@interface SBFloatingApplicationInlineAppExposeLiveContentOverlayView : NSObject

{
    SBInlineAppExposeContainerViewController *_inlineAppExposeContainerViewController;
}

@property (nonatomic, readonly) SBInlineAppExposeContainerViewController *inlineAppExposeContainerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *contentOverlayView;

- (void)invalidate;
- (id)contentViewController;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (long long)rasterizationStyle;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)setUsesBrightSceneViewBackgroundMaterial:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 nubViewHidden:(_Bool)arg2 animator:(CDUnknownBlockType)arg3;
- (void)setHomeGrabberHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(_Bool)arg2;
- (void)setLiveContentRasterizationDisabled:(_Bool)arg1;
- (void)configureWithWorkspaceEntity:(id)arg1 referenceFrame:(struct CGRect)arg2 interfaceOrientation:(long long)arg3;

@end
