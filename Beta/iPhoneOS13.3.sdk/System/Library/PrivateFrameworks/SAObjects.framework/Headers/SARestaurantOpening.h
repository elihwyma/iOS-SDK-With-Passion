/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString, NSURL, SACalendar, SAUIAppPunchOut;

@interface SARestaurantOpening : AceObject <Swift>

@property (copy, nonatomic) NSURL *bookingId;
@property (retain, nonatomic) SAUIAppPunchOut *makeReservationPunchOut;
@property (copy, nonatomic) NSNumber *partySize;
@property (retain, nonatomic) SACalendar *timeSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)opening;
+ (id)openingWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
