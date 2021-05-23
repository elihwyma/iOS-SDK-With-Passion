/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarVisualProvider_iOS.h>

@class NSTimer, _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion;

@interface _UIStatusBarVisualProvider_Phone : _UIStatusBarVisualProvider_iOS

{
    _UIStatusBarDisplayItemPlacement *_backgroundActivityDetailPlacement;
    _UIStatusBarDisplayItemPlacement *_pillIconPlacement;
    _UIStatusBarRegion *_pillRegion;
    NSTimer *_backgroundActivityDetailTimer;
}

@property (retain, nonatomic) NSTimer *backgroundActivityDetailTimer;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *backgroundActivityDetailPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *pillIconPlacement;
@property (retain, nonatomic) _UIStatusBarRegion *pillRegion;

+ (Class)visualProviderSubclassForScreen:(id)arg1;

- (id)willUpdateWithData:(id)arg1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (id)_animationForBackgroundActivityPill;
- (void)updateDataForBackgroundActivity:(id)arg1;
- (id)_animationForBackgroundActivityIcon;
- (void)_updateBackgroundActivityWithEntry:(id)arg1 timeEntry:(id)arg2 needsUpdate:(_Bool)arg3;
- (void)_hideActivityDetailAndUpdate:(_Bool)arg1;
- (id)animationForBackgroundActivityPillWithDuration:(double)arg1 scale:(double)arg2;
- (void)updatePill;

@end
