/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Contacts/CNContact.h>

@class NSArray, NSPersonNameComponents, NSString, NSURL;

@interface CNContact (TUAdditions)

@property (copy, nonatomic, readonly) NSPersonNameComponents *personNameComponents;
@property (nonatomic, readonly) NSString *anyDestinationID;
@property (nonatomic, readonly) NSURL *faceTimeQuicklookURL;
@property (nonatomic, readonly) NSArray *phoneNumberStrings;
@property (nonatomic, readonly) NSArray *emailAddressStrings;
@property (nonatomic, readonly) NSArray *allIDSDestinations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *displayName;
@property (readonly) NSString *callerId;
@property (readonly) CNContact *backingContact;
@property (readonly) NSString *backingContactId;
@property (readonly) NSString *backingContactIdentifier;
@property (readonly) NSString *destinationId;
@property (readonly) NSString *isoCountryCode;
@property (readonly) NSArray *handles;
@property (readonly) long long mostRecentCallType;
@property (readonly) _Bool mostRecentCallWasMissed;
@property (readonly) NSArray *idsCanonicalDestinations;

+ (id)keysToFetchForFaceTime;

@end
