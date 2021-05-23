/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, NSArray;

@protocol INGetReservationDetailsIntentExport <Swift>

@property (copy, nonatomic) INSpeakableString *reservationContainerReference;
@property (copy, nonatomic) NSArray *reservationItemReferences;

- (unsigned short)init;

@end
