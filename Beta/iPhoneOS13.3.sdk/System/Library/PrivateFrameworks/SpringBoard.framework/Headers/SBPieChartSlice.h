/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface SBPieChartSlice : NSObject

{
    double _value;
    UIColor *_fillColor;
}

@property (readonly) double value;
@property (readonly) UIColor *fillColor;

+ (id)sliceWithValue:(double)arg1 fillColor:(id)arg2;

- (id)initWithValue:(double)arg1 fillColor:(id)arg2;

@end
