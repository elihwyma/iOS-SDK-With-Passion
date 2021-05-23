/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@class EAEmailAddressSet, NSSet;

@protocol EMVIPManager <Swift>

@property (nonatomic, readonly) _Bool hasVIPs;
@property (copy, nonatomic, readonly) NSSet *allVIPs;
@property (copy, nonatomic, readonly) EAEmailAddressSet *allVIPEmailAddresses;

- (unsigned short)saveVIPs: /* Error: Ran out of types for this method. */;
- (unsigned short)removeVIPsWithIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)removeVIPsWithEmailAddresses: /* Error: Ran out of types for this method. */;
- (unsigned short)isVIPAddress: /* Error: Ran out of types for this method. */;
- (unsigned short)vipWithIdentifier: /* Error: Ran out of types for this method. */;

@end
