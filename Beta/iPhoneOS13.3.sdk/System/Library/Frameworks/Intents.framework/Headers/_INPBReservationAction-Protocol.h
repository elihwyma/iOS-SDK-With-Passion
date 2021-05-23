/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDateTimeRange, _INPBUserActivity;

@protocol _INPBReservationAction <Swift>

@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;
@property (retain, nonatomic) _INPBUserActivity *userActivity;
@property (nonatomic, readonly) _Bool hasUserActivity;
@property (retain, nonatomic) _INPBDateTimeRange *validDuration;
@property (nonatomic, readonly) _Bool hasValidDuration;

- (unsigned short)typeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsType: /* Error: Ran out of types for this method. */;

@end
