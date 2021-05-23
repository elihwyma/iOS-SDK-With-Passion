/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBString, _INPBValueMetadata, _INPBWellnessMetadataValue;

@protocol _INPBWellnessMetadataPair <Swift>

@property (retain, nonatomic) _INPBString *key;
@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) _INPBWellnessMetadataValue *value;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

@end
