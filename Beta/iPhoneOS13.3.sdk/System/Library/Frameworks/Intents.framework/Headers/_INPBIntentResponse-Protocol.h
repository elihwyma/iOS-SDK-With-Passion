/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBIntentResponsePayloadFailure, _INPBIntentResponsePayloadSuccess, _INPBUserActivity;

@protocol _INPBIntentResponse <Swift>

@property (retain, nonatomic) _INPBIntentResponsePayloadFailure *payloadFailure;
@property (nonatomic, readonly) _Bool hasPayloadFailure;
@property (retain, nonatomic) _INPBIntentResponsePayloadSuccess *payloadSuccess;
@property (nonatomic, readonly) _Bool hasPayloadSuccess;
@property (nonatomic) _Bool requiresAuthentication;
@property (nonatomic) _Bool hasRequiresAuthentication;
@property (nonatomic) _Bool requiresProtectedData;
@property (nonatomic) _Bool hasRequiresProtectedData;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;
@property (retain, nonatomic) _INPBUserActivity *userActivity;
@property (nonatomic, readonly) _Bool hasUserActivity;

- (unsigned short)typeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsType: /* Error: Ran out of types for this method. */;

@end
