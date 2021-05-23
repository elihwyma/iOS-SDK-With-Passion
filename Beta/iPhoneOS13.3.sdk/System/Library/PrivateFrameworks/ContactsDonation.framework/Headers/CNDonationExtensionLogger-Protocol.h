/*
 Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

#import <ContactsDonation/Swift-Protocol.h>

@protocol CNDonationExtensionLogger <Swift>

- (unsigned short)loadedDonorExtension:forIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)couldNotLoadDonorExtensionForIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)willRenewDonation: /* Error: Ran out of types for this method. */;
- (unsigned short)didRenewDonation:untilDate: /* Error: Ran out of types for this method. */;
- (unsigned short)didExpireDonation:withError: /* Error: Ran out of types for this method. */;
- (unsigned short)couldNotRenewDonation:error: /* Error: Ran out of types for this method. */;
- (unsigned short)willRedonateValuesWithReason: /* Error: Ran out of types for this method. */;
- (unsigned short)didRedonateValuesWithReason: /* Error: Ran out of types for this method. */;
- (unsigned short)couldNotRedonateValuesWithReason:error: /* Error: Ran out of types for this method. */;

@end
