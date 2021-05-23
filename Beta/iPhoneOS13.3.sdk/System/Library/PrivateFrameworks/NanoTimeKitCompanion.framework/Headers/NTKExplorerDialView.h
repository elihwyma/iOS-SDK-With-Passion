/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer, CLKDevice, NSArray;

@interface NTKExplorerDialView : UIView

{
    CLKDevice *_device;
    _Bool _editing;
    CALayer *_ringLayer;
    CAReplicatorLayer *_hourReplicatorLayer;
    CALayer *_hourTickLayer;
    CAReplicatorLayer *_minuteReplicatorLayer;
    CAReplicatorLayer *_minuteCollectionLayer;
    CALayer *_minuteTickLayer;
    CAReplicatorLayer *_subdialReplicatorLayer;
    CALayer *_secondTickLayer;
    NSArray *_hourNumerals;
    NSArray *_minuteNumerals;
    unsigned long long _currentDensityTransition;
    unsigned long long _density;
}

@property (nonatomic) unsigned long long density;
@property (nonatomic, readonly) CALayer *subdialLayer;

- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (void)cleanupAfterZoom;
- (void)prepareForZoom;
- (void)prepareForEditing;
- (void)cleanupAfterEditing;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (void)applyZoomFraction:(double)arg1;
- (id)_instantaneousAnimationForKeyPath:(id)arg1 value:(id)arg2;
- (void)_applyDensity:(unsigned long long)arg1;
- (void)_addOrRemoveChildLayers;
- (id)_minuteTickShowAnimation;
- (id)_secondTickBrightenAnimation;
- (id)_numeralShowAnimation;
- (id)_secondTickDimAnimation;
- (id)_hourNumeralHideAnimation;
- (id)_minuteClusterExpandAnimation;
- (id)_minuteTickShrinkAndGrow;
- (id)_minuteTickBreakAnimation;

@end
