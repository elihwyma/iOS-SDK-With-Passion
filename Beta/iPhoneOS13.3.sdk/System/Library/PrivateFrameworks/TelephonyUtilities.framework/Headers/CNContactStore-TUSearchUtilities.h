/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Contacts/CNContactStore.h>

@class NSString;

@interface CNContactStore (TUSearchUtilities)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)contactForIdentifier:(id)arg1;
- (id)contactForIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)contactForDestinationId:(id)arg1 keysToFetch:(id)arg2;
- (id)contactForDestinationId:(id)arg1;

@end
