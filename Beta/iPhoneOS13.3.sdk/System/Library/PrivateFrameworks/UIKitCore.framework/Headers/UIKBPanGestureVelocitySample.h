/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBPanGestureVelocitySample : NSObject

{
    struct CGPoint start;
    struct CGPoint end;
    double dt;
    double force;
    double majorRadius;
}

@property struct CGPoint start;
@property struct CGPoint end;
@property double dt;
@property double force;
@property double majorRadius;

- (void)pullValuesFrom:(id)arg1;
- (void)resetValues;

@end
