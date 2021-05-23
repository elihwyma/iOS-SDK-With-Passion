/*
 Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

#import <ContactsDonation/Swift-Protocol.h>

@protocol CNDonationAccountLogger <Swift>

- (unsigned short)accountAdded: /* Error: Ran out of types for this method. */;
- (unsigned short)accountRemoved: /* Error: Ran out of types for this method. */;
- (unsigned short)accountChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)pluginLoaded;
- (unsigned short)pluginUnloaded;
- (unsigned short)accountsDidNotChange;
- (unsigned short)donating: /* Error: Ran out of types for this method. */;
- (unsigned short)removing: /* Error: Ran out of types for this method. */;
- (unsigned short)donationFailedWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)removalFailedWithError: /* Error: Ran out of types for this method. */;

@end
