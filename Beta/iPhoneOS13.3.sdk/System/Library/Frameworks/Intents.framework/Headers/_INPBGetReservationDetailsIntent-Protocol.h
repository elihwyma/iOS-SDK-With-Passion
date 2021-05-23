/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBDataString, _INPBIntentMetadata;

@protocol _INPBGetReservationDetailsIntent <Swift>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *reservationContainerReference;
@property (nonatomic, readonly) _Bool hasReservationContainerReference;
@property (copy, nonatomic) NSArray *reservationItemReferences;
@property (nonatomic, readonly) unsigned long long reservationItemReferencesCount;

+ (unsigned short)reservationItemReferencesType;

- (unsigned short)clearReservationItemReferences;
- (unsigned short)addReservationItemReferences: /* Error: Ran out of types for this method. */;
- (unsigned short)reservationItemReferencesAtIndex: /* Error: Ran out of types for this method. */;

@end
