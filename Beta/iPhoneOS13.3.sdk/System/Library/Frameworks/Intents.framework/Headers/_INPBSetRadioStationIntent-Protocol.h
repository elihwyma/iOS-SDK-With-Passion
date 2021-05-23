/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDouble, _INPBInteger, _INPBIntentMetadata, _INPBString;

@protocol _INPBSetRadioStationIntent <Swift>

@property (retain, nonatomic) _INPBString *channel;
@property (nonatomic, readonly) _Bool hasChannel;
@property (retain, nonatomic) _INPBDouble *frequency;
@property (nonatomic, readonly) _Bool hasFrequency;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBInteger *presetNumber;
@property (nonatomic, readonly) _Bool hasPresetNumber;
@property (nonatomic) int radioType;
@property (nonatomic) _Bool hasRadioType;
@property (retain, nonatomic) _INPBString *stationName;
@property (nonatomic, readonly) _Bool hasStationName;

- (unsigned short)radioTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsRadioType: /* Error: Ran out of types for this method. */;

@end
