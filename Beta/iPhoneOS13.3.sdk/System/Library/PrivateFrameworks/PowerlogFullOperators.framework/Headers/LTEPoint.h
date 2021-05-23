/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <NSObject.h>

@class NSDate;

@interface LTEPoint : NSObject

{
    unsigned int _threshold;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property unsigned int threshold;

@end
