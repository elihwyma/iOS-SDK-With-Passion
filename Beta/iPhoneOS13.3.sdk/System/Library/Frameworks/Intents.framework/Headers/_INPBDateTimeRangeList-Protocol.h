/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBCondition;

@protocol _INPBDateTimeRangeList <Swift>

@property (retain, nonatomic) _INPBCondition *condition;
@property (nonatomic, readonly) _Bool hasCondition;
@property (copy, nonatomic) NSArray *dateRanges;
@property (nonatomic, readonly) unsigned long long dateRangesCount;

+ (unsigned short)dateRangeType;

- (unsigned short)clearDateRanges;
- (unsigned short)addDateRange: /* Error: Ran out of types for this method. */;
- (unsigned short)dateRangeAtIndex: /* Error: Ran out of types for this method. */;

@end
