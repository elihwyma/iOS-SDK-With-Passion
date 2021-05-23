/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBDateTimeRange, _INPBString;

@protocol _INPBSaveHealthSampleIntentResponse <Swift>

@property (retain, nonatomic) _INPBString *defaultUnit;
@property (nonatomic, readonly) _Bool hasDefaultUnit;
@property (retain, nonatomic) _INPBString *punchoutUrl;
@property (nonatomic, readonly) _Bool hasPunchoutUrl;
@property (retain, nonatomic) _INPBDateTimeRange *recordDate;
@property (nonatomic, readonly) _Bool hasRecordDate;
@property (copy, nonatomic) NSArray *sampleUuids;
@property (nonatomic, readonly) unsigned long long sampleUuidsCount;
@property (retain, nonatomic) _INPBString *userProvidedUnit;
@property (nonatomic, readonly) _Bool hasUserProvidedUnit;
@property (copy, nonatomic) NSArray *valuesDefaultUnits;
@property (nonatomic, readonly) unsigned long long valuesDefaultUnitsCount;
@property (copy, nonatomic) NSArray *valuesUserProvidedUnits;
@property (nonatomic, readonly) unsigned long long valuesUserProvidedUnitsCount;

+ (unsigned short)sampleUuidsType;
+ (unsigned short)valuesDefaultUnitType;
+ (unsigned short)valuesUserProvidedUnitType;

- (unsigned short)clearSampleUuids;
- (unsigned short)addSampleUuids: /* Error: Ran out of types for this method. */;
- (unsigned short)sampleUuidsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearValuesDefaultUnits;
- (unsigned short)addValuesDefaultUnit: /* Error: Ran out of types for this method. */;
- (unsigned short)valuesDefaultUnitAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearValuesUserProvidedUnits;
- (unsigned short)addValuesUserProvidedUnit: /* Error: Ran out of types for this method. */;
- (unsigned short)valuesUserProvidedUnitAtIndex: /* Error: Ran out of types for this method. */;

@end
