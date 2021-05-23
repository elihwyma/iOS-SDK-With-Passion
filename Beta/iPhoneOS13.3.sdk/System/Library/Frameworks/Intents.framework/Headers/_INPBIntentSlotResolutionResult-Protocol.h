/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBPayloadConfirmation, _INPBPayloadNeedsDisambiguation, _INPBPayloadNeedsExecuteIntent, _INPBPayloadNeedsValue, _INPBPayloadSuccess, _INPBPayloadUnsupported;

@protocol _INPBIntentSlotResolutionResult <Swift>

@property (retain, nonatomic) _INPBPayloadConfirmation *payloadConfirmation;
@property (nonatomic, readonly) _Bool hasPayloadConfirmation;
@property (retain, nonatomic) _INPBPayloadNeedsDisambiguation *payloadNeedsDisambiguation;
@property (nonatomic, readonly) _Bool hasPayloadNeedsDisambiguation;
@property (retain, nonatomic) _INPBPayloadNeedsExecuteIntent *payloadNeedsExecuteIntent;
@property (nonatomic, readonly) _Bool hasPayloadNeedsExecuteIntent;
@property (retain, nonatomic) _INPBPayloadNeedsValue *payloadNeedsValue;
@property (nonatomic, readonly) _Bool hasPayloadNeedsValue;
@property (retain, nonatomic) _INPBPayloadSuccess *payloadSuccess;
@property (nonatomic, readonly) _Bool hasPayloadSuccess;
@property (retain, nonatomic) _INPBPayloadUnsupported *payloadUnsupported;
@property (nonatomic, readonly) _Bool hasPayloadUnsupported;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;

- (unsigned short)typeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsType: /* Error: Ran out of types for this method. */;

@end
