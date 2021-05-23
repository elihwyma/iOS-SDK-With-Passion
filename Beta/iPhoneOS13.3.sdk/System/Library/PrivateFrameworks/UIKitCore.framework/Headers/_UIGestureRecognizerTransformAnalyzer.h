/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIGestureRecognizerTransformAnalyzer : NSObject

{
    double _lowPassTranslationMagnitudeDelta;
    double _lowPassScaleDelta;
    double _lowPassRotationDelta;
    double _translationWeight;
    double _pinchingWeight;
    double _rotationWeight;
    long long _dominantComponent;
}

@property (nonatomic, readonly) long long dominantComponent;
@property (nonatomic) double translationWeight;
@property (nonatomic) double pinchingWeight;
@property (nonatomic) double rotationWeight;

- (id)init;
- (void)reset;
- (void)analyzeTouches:(id)arg1;

@end
