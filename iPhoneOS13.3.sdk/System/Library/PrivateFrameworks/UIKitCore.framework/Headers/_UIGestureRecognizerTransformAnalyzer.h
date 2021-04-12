//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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

@property(readonly, nonatomic) long long dominantComponent; // @synthesize dominantComponent=_dominantComponent;
@property(nonatomic) double rotationWeight; // @synthesize rotationWeight=_rotationWeight;
@property(nonatomic) double pinchingWeight; // @synthesize pinchingWeight=_pinchingWeight;
@property(nonatomic) double translationWeight; // @synthesize translationWeight=_translationWeight;
- (void)analyzeTouches:(id)arg1;
- (void)reset;
- (id)init;

@end

