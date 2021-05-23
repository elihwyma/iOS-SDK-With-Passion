/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class CNContact, NSArray, NSString;

@interface TUGroupTitle : NSObject

{
    NSString *_value;
}

@property (retain, nonatomic) NSString *value;
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

- (id)initWithString:(id)arg1;

@end
