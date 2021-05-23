/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata;

@protocol _INPBSetDefrosterSettingsInCarIntent <Swift>

@property (retain, nonatomic) _INPBDataString *carName;
@property (nonatomic, readonly) _Bool hasCarName;
@property (nonatomic) int defroster;
@property (nonatomic) _Bool hasDefroster;
@property (nonatomic) _Bool enable;
@property (nonatomic) _Bool hasEnable;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;

- (unsigned short)defrosterAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsDefroster: /* Error: Ran out of types for this method. */;

@end
