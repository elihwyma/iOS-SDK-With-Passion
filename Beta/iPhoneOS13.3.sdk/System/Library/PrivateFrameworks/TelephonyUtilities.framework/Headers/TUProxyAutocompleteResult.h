/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteResult, CNContact, NSArray, NSString;

@interface TUProxyAutocompleteResult : NSObject

{
    CNAutocompleteResult *_autocompleteResult;
}

@property (retain, nonatomic) CNAutocompleteResult *autocompleteResult;
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

- (id)init;
- (id)initWithAutocompleteResult:(id)arg1;

@end
