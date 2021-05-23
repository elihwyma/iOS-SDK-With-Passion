/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class NSArray;

@interface PICurvesLUTFilter : CIFilter

{
    NSArray *_inputPointsR;
    NSArray *_inputPointsG;
    NSArray *_inputPointsB;
    NSArray *_inputPointsL;
}

@property (retain) NSArray *inputPointsR;
@property (retain) NSArray *inputPointsG;
@property (retain) NSArray *inputPointsB;
@property (retain) NSArray *inputPointsL;

+ (id)tableImageFromRed:(const float *)arg1 green:(const float *)arg2 blue:(const float *)arg3 luminance:(const float *)arg4;
+ (vector_f9ed6fc8)calculateCurveTable:(id)arg1;
+ (id)curvePointsFromDictionaries:(id)arg1;

- (id)outputImage;

@end
