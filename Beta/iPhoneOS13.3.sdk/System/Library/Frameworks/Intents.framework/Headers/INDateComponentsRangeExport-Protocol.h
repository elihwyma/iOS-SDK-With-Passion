/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INRecurrenceRule, NSDateComponents;

@protocol INDateComponentsRangeExport <Swift>

@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (copy, nonatomic) NSDateComponents *endDateComponents;
@property (copy, nonatomic) INRecurrenceRule *recurrenceRule;

- (unsigned short)init;

@end
