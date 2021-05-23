/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardFoundation/SBFWindow.h>

@class NSMutableSet, NSString, SBRecycledViewsContainer, SBUICoronaAnimationController, UIView;

@protocol SBWindowLayoutStrategy;

@interface SBWindow : SBFWindow

{
    SBUICoronaAnimationController *_coronaAnimationController;
    SBRecycledViewsContainer *_recycledViewsContainerView;
    _Bool _requestedHiddenValue;
    NSMutableSet *_additionalHiddenReasons;
    id <SBWindowLayoutStrategy> _layoutStrategy;
}

@property (nonatomic, readonly) id <SBWindowLayoutStrategy> layoutStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long activeInterfaceOrientation;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly) double orientationSourceLevel;
@property (copy, nonatomic, readonly) NSString *orientationSourceDescription;
@property (nonatomic, readonly) UIView *recycledViewsContainer;

+ (id)defaultLayoutStrategy;
+ (_Bool)sb_autorotates;
+ (_Bool)sb_disableStatusBarHeightChanges;

- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (void)makeKeyAndVisible;
- (void)setAutorotates:(_Bool)arg1 forceUpdateInterfaceOrientation:(_Bool)arg2;
- (_Bool)_shouldResizeWithScene;
- (id)initWithScreen:(id)arg1 debugName:(id)arg2;
- (id)sb_coronaAnimationController;
- (id)initWithScreen:(id)arg1 debugName:(id)arg2 rootViewController:(id)arg3;
- (id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4;
- (void)layoutStrategyFrameOnScreenDidChange:(id)arg1;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3;
- (void)_willEnableSecureRendering:(id)arg1;
- (void)_didDisableSecureRendering:(id)arg1;
- (void)_updateHidingForSecureRendering:(_Bool)arg1;
- (void)_updateRealIsHidden;
- (void)_addHiddenReason:(id)arg1;
- (void)_removeHiddenReason:(id)arg1;
- (void)setAlphaAndObeyBecauseIAmTheWindowManager:(double)arg1;

@end
