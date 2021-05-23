/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDataString, _INPBInteger, _INPBIntentMetadata;

@protocol _INPBSetSeatSettingsInCarIntent <Swift>

@property (retain, nonatomic) _INPBDataString *carName;
@property (nonatomic, readonly) _Bool hasCarName;
@property (nonatomic) _Bool enableCooling;
@property (nonatomic) _Bool hasEnableCooling;
@property (nonatomic) _Bool enableHeating;
@property (nonatomic) _Bool hasEnableHeating;
@property (nonatomic) _Bool enableMassage;
@property (nonatomic) _Bool hasEnableMassage;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBInteger *level;
@property (nonatomic, readonly) _Bool hasLevel;
@property (nonatomic) int relativeLevelSetting;
@property (nonatomic) _Bool hasRelativeLevelSetting;
@property (nonatomic) int seat;
@property (nonatomic) _Bool hasSeat;

- (unsigned short)relativeLevelSettingAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsRelativeLevelSetting: /* Error: Ran out of types for this method. */;
- (unsigned short)seatAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsSeat: /* Error: Ran out of types for this method. */;

@end
