/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIMotionEffectEvent.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectAttitudeEvent : _UIMotionEffectEvent

{
    struct {
        double x;
        double y;
        double z;
        double w;
    } _attitude;
}

@property (nonatomic, readonly) CDStruct_d2b197d1 attitude;

- (id)initWithTimestamp:(double)arg1 attitude:(CDStruct_d2b197d1)arg2;
- (id)copyWithTimestamp:(double)arg1;
- (double)velocityRelativeToPreviousEvent:(id)arg1;

@end
