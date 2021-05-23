/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class HKUnit, NSArray;

@protocol INQueryHealthSampleIntentExport <Swift>

@property (nonatomic) long long objectType;
@property (copy, nonatomic) NSArray *recordDates;
@property (copy, nonatomic) HKUnit *unit;
@property (nonatomic) long long questionType;
@property (copy, nonatomic) NSArray *thresholdValues;
@property (nonatomic) long long expectedResultType;

- (unsigned short)init;

@end
