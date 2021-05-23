/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol _INPBGetReservationDetailsIntentResponse <Swift>

@property (copy, nonatomic) NSArray *reservations;
@property (nonatomic, readonly) unsigned long long reservationsCount;

+ (unsigned short)reservationsType;

- (unsigned short)clearReservations;
- (unsigned short)addReservations: /* Error: Ran out of types for this method. */;
- (unsigned short)reservationsAtIndex: /* Error: Ran out of types for this method. */;

@end
