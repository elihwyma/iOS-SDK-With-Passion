/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIVelocityIntegrator;

__attribute__((visibility("hidden")))
@interface _UIDeepPressAnalyzer : NSObject

{
    _UIVelocityIntegrator *_touchForceIntegrator;
    _UIVelocityIntegrator *_locationIntegrator;
}

@property (retain, nonatomic) _UIVelocityIntegrator *touchForceIntegrator;
@property (retain, nonatomic) _UIVelocityIntegrator *locationIntegrator;
@property (nonatomic, readonly, getter=isDeepPressLikely) _Bool deepPressLikely;

- (id)init;
- (void)analyzeTouches:(id)arg1;
- (double)_touchForceFromTouches:(id)arg1;
- (void)analyzeTouchForce:(double)arg1 centroidAtLocation:(struct CGPoint)arg2;

@end
