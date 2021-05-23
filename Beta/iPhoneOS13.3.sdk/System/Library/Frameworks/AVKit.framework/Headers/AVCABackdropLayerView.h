/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class CABackdropLayer, NSHashTable, UIColor;

__attribute__((visibility("hidden")))
@interface AVCABackdropLayerView : UIView

{
    _Bool _forceLowQualityEffect;
    UIColor *_customBackgroundColor;
    AVCABackdropLayerView *_groupLeader;
    NSHashTable *_dependents;
    long long _activeBackdropEffect;
}

@property (weak, nonatomic) AVCABackdropLayerView *groupLeader;
@property (nonatomic, readonly) NSHashTable *dependents;
@property (nonatomic) long long activeBackdropEffect;
@property (nonatomic, readonly) CABackdropLayer *layer;
@property (nonatomic, getter=isCaptureOnly) _Bool captureOnly;
@property (nonatomic) _Bool forceLowQualityEffect;
@property (copy, nonatomic) UIColor *customBackgroundColor;

+ (id)colorMatrixFilter;
+ (Class)layerClass;
+ (id)reducedTransparencyColor;
+ (id)averageFilter;
+ (id)blurFilter;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)_updateFilters;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateActiveBackdropEffectIfGroupLeader;
- (void)updateGroupLeader;
- (void)addDependent:(id)arg1;
- (void)removeDependent:(id)arg1;
- (void)_ensureDependents;
- (void)_enumerateDependents:(CDUnknownBlockType)arg1;

@end
