/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDPathManipulation.h>

@class NSMutableArray, NSMutableDictionary;

@interface TSDBrushPathManipulation : TSDPathManipulation

{
    struct CGPath *mBrushStroke;
    double mRepeatLength;
    NSMutableDictionary *mSections;
    NSMutableArray *mMiddleSections;
    NSMutableArray *mSmallSections;
    double mSmallLimitWidth;
    _Bool mSplitAtSharpAngles;
}

@end
