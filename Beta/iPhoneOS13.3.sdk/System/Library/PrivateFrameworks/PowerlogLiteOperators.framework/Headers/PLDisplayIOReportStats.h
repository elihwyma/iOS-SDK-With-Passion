/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLIOReportStats.h>

@class PLDisplayAPLStats;

@interface PLDisplayIOReportStats : PLIOReportStats

{
    PLDisplayAPLStats *_displayAPLStats;
}

@property (retain) PLDisplayAPLStats *displayAPLStats;

- (id)init;

@end
