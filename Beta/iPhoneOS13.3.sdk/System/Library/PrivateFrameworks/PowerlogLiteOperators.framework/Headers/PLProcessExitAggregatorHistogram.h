/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@interface PLProcessExitAggregatorHistogram : NSObject

{
    int _total;
    int _duration_0_5;
    int _duration_5_10;
    int _duration_10_60;
    int _duration_60_above;
    int _duration_unknown;
}

@property int total;
@property int duration_0_5;
@property int duration_5_10;
@property int duration_10_60;
@property int duration_60_above;
@property int duration_unknown;

- (id)description;

@end
