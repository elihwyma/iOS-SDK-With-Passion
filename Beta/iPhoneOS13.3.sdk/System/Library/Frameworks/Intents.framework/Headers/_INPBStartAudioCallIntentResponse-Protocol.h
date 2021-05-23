/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBCallMetrics;

@protocol _INPBStartAudioCallIntentResponse <Swift>

@property (nonatomic) int audioRoute;
@property (nonatomic) _Bool hasAudioRoute;
@property (retain, nonatomic) _INPBCallMetrics *metrics;
@property (nonatomic, readonly) _Bool hasMetrics;
@property (copy, nonatomic) NSString *status;
@property (nonatomic, readonly) _Bool hasStatus;
@property (copy, nonatomic) NSArray *targetContacts;
@property (nonatomic, readonly) unsigned long long targetContactsCount;

- (unsigned short)audioRouteAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAudioRoute: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTargetContacts;
- (unsigned short)addTargetContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)targetContactsAtIndex: /* Error: Ran out of types for this method. */;

@end
