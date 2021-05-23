/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class CUIPSDGradientEvaluator;

@interface CUIPSDGradient : NSObject

{
    CUIPSDGradientEvaluator *evaluator;
    double drawingAngle;
    unsigned int gradientStyle;
}

@property (retain) CUIPSDGradientEvaluator *evaluator;
@property double drawingAngle;
@property unsigned int gradientStyle;

+ (id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(double)arg4 style:(unsigned int)arg5;
+ (id)getMidpointLocationFromArray:(id)arg1 atIndex:(long long)arg2 withPolicy:(int)arg3;
+ (id)cuiPSDGradientWithColors:(id)arg1 locations:(id)arg2 midpointLocations:(id)arg3 angle:(double)arg4 isRadial:(_Bool)arg5;

- (void)dealloc;
- (id)initWithEvaluator:(id)arg1 drawingAngle:(double)arg2 gradientStyle:(unsigned int)arg3;

@end
