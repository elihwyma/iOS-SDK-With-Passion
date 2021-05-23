/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBIntentMetadata, _INPBLocation;

@protocol _INPBListRideOptionsIntent <Swift>

@property (retain, nonatomic) _INPBLocation *dropOffLocation;
@property (nonatomic, readonly) _Bool hasDropOffLocation;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBLocation *pickupLocation;
@property (nonatomic, readonly) _Bool hasPickupLocation;

@end
