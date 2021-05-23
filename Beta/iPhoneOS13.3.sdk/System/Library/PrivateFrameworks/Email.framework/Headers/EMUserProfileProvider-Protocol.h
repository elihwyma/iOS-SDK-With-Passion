/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@class NSSet;

@protocol EMUserProfileProvider <Swift>

@property (copy, readonly) NSSet *allEmailAddresses;
@property (copy, readonly) NSSet *accountsEmailAddresses;
@property (copy, readonly) NSSet *contactEmailAddresses;

- (unsigned short)contact;
- (unsigned short)isMyEmailAddressContainedInAddressList: /* Error: Ran out of types for this method. */;
- (unsigned short)contactWithKeysToFetch: /* Error: Ran out of types for this method. */;

@end
