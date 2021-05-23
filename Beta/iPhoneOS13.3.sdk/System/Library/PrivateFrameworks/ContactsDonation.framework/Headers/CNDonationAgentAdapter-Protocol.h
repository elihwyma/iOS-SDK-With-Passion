/*
 Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

#import <ContactsDonation/Swift-Protocol.h>

@protocol CNDonationAgentAdapter <Swift>

- (unsigned short)donatedMeCardEither;
- (unsigned short)meCardDonations;
- (unsigned short)donateMeCardValues: /* Error: Ran out of types for this method. */;
- (unsigned short)removeDonatedMeCardValuesForIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDonatedMeCard;
- (unsigned short)changeFromAccount:toAccount: /* Error: Ran out of types for this method. */;
- (unsigned short)rejectValueWithDonationIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)rejectValuesWithClusterIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllRejections;

@end
