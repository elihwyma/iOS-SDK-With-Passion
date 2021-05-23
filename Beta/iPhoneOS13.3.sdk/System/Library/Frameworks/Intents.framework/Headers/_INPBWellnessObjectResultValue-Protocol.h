/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBDateTimeRange, _INPBString;

@protocol _INPBWellnessObjectResultValue <Swift>

@property (retain, nonatomic) _INPBDateTimeRange *recordDate;
@property (nonatomic, readonly) _Bool hasRecordDate;
@property (nonatomic) int resultType;
@property (nonatomic) _Bool hasResultType;
@property (retain, nonatomic) _INPBString *unit;
@property (nonatomic, readonly) _Bool hasUnit;
@property (copy, nonatomic) NSArray *values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (unsigned short)valuesType;

- (unsigned short)clearValues;
- (unsigned short)resultTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsResultType: /* Error: Ran out of types for this method. */;
- (unsigned short)valuesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addValues: /* Error: Ran out of types for this method. */;

@end
