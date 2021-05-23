/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata, _INPBWellnessUnitType;

@protocol _INPBQueryHealthSampleIntent <Swift>

@property (nonatomic) int expectedResultType;
@property (nonatomic) _Bool hasExpectedResultType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int objectType;
@property (nonatomic) _Bool hasObjectType;
@property (nonatomic) int questionType;
@property (nonatomic) _Bool hasQuestionType;
@property (copy, nonatomic) NSArray *recordDates;
@property (nonatomic, readonly) unsigned long long recordDatesCount;
@property (copy, nonatomic) NSArray *thresholdValues;
@property (nonatomic, readonly) unsigned long long thresholdValuesCount;
@property (retain, nonatomic) _INPBWellnessUnitType *unit;
@property (nonatomic, readonly) _Bool hasUnit;

+ (unsigned short)recordDateType;
+ (unsigned short)thresholdValuesType;

- (unsigned short)expectedResultTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsExpectedResultType: /* Error: Ran out of types for this method. */;
- (unsigned short)objectTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsObjectType: /* Error: Ran out of types for this method. */;
- (unsigned short)questionTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsQuestionType: /* Error: Ran out of types for this method. */;
- (unsigned short)clearRecordDates;
- (unsigned short)addRecordDate: /* Error: Ran out of types for this method. */;
- (unsigned short)recordDateAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearThresholdValues;
- (unsigned short)addThresholdValues: /* Error: Ran out of types for this method. */;
- (unsigned short)thresholdValuesAtIndex: /* Error: Ran out of types for this method. */;

@end
