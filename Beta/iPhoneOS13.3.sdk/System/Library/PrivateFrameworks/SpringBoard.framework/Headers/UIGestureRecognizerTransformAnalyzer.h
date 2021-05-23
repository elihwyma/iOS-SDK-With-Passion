/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class UIGestureRecognizerTransformAnalyzerInfo;

@interface UIGestureRecognizerTransformAnalyzer : NSObject

{
    UIGestureRecognizerTransformAnalyzerInfo *_smoothedInfo;
    double _translationWeight;
    double _pinchingWeight;
    double _rotationWeight;
    int _dominantComponent;
}

@property (nonatomic, readonly) int dominantComponent;
@property (nonatomic) double translationWeight;
@property (nonatomic) double pinchingWeight;
@property (nonatomic) double rotationWeight;
@property (nonatomic, readonly) UIGestureRecognizerTransformAnalyzerInfo *smoothedInfo;

- (id)init;
- (void)reset;
- (id)analyzeTouches:(id)arg1;

@end
