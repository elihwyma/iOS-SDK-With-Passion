/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSceneViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBAppStatusBarSettings, SBApplicationSceneView, SBSceneHandle, UIView;

@protocol SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBApplicationSceneViewController : SBSceneViewController <Swift>

{
    _Bool __applicationStatusBarHidden;
    id <SBApplicationSceneViewControllingStatusBarDelegate> _applicationSceneStatusBarDelegate;
    SBAppStatusBarSettings *_overrideStatusBarSettings;
}

@property (nonatomic, readonly, getter=_sceneView) SBApplicationSceneView *sceneView;
@property (nonatomic, readonly, getter=_isApplicationStatusBarHidden) _Bool _applicationStatusBarHidden;
@property (retain, nonatomic, getter=_overrideStatusBarSettings, setter=_setOverrideStatusBarSettings:) SBAppStatusBarSettings *overrideStatusBarSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SBSceneHandle *sceneHandle;
@property (nonatomic, readonly) long long displayMode;
@property (retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property (retain, nonatomic) UIView *customContentView;
@property (nonatomic, readonly) struct CGSize contentReferenceSize;
@property (nonatomic, readonly) long long contentInterfaceOrientation;
@property (nonatomic, readonly) double statusBarAlpha;
@property (nonatomic, readonly) long long overrideStatusBarStyle;
@property (weak, nonatomic) id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;

- (id)initWithSceneHandle:(id)arg1;
- (double)_applicationStatusBarAlpha;

@end
