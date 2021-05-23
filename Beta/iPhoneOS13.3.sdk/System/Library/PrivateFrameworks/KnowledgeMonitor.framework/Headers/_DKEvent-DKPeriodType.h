/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <CoreDuet/_DKEvent.h>

@class NSDate;

@interface _DKEvent (DKPeriodType)

@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) double duration;

@end
