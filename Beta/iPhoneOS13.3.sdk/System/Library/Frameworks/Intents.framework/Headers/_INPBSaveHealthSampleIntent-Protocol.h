/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBDateTimeRange, _INPBIntentMetadata, _INPBWellnessUnitType;

@protocol _INPBSaveHealthSampleIntent <Swift>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int objectType;
@property (nonatomic) _Bool hasObjectType;
@property (retain, nonatomic) _INPBDateTimeRange *recordDate;
@property (nonatomic, readonly) _Bool hasRecordDate;
@property (copy, nonatomic) NSArray *sampleMetadatas;
@property (nonatomic, readonly) unsigned long long sampleMetadatasCount;
@property (retain, nonatomic) _INPBWellnessUnitType *unit;
@property (nonatomic, readonly) _Bool hasUnit;
@property (copy, nonatomic) NSArray *values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (unsigned short)valuesType;
+ (unsigned short)sampleMetadataType;

- (unsigned short)clearValues;
- (unsigned short)valuesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addValues: /* Error: Ran out of types for this method. */;
- (unsigned short)objectTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsObjectType: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSampleMetadatas;
- (unsigned short)addSampleMetadata: /* Error: Ran out of types for this method. */;
- (unsigned short)sampleMetadataAtIndex: /* Error: Ran out of types for this method. */;

@end
