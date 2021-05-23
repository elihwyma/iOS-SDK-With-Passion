/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <PowerlogHelperdOperators/PLIOReportStats.h>

@class PLDisplayAPLStats;

@interface PLDisplayIOReportStats : PLIOReportStats

{
    PLDisplayAPLStats *_displayAPLStats;
}

@property (retain) PLDisplayAPLStats *displayAPLStats;

- (id)init;

@end
