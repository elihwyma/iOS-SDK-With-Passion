/*
 Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

#import <ContactsDonation/Swift-Protocol.h>

@protocol CNDonationAgentLogger <Swift>

- (unsigned short)agentWillStart;
- (unsigned short)agentDidStart;
- (unsigned short)agentWillStop;
- (unsigned short)donationServiceWillStart;
- (unsigned short)donationServiceDidStart;
- (unsigned short)donationServiceWillStop;
- (unsigned short)maintenanceServiceWillStart;
- (unsigned short)maintenanceServiceDidStart;
- (unsigned short)maintenanceServiceWillStop;
- (unsigned short)beginRestorePersistedState;
- (unsigned short)endRestorePersistedState;
- (unsigned short)acceptingConnectionFromProcess: /* Error: Ran out of types for this method. */;
- (unsigned short)denyingRequestFromProcess: /* Error: Ran out of types for this method. */;
- (unsigned short)acceptingDonations: /* Error: Ran out of types for this method. */;
- (unsigned short)preExpiredDonations: /* Error: Ran out of types for this method. */;
- (unsigned short)agentWillHandleRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)agentDidHandleRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)featureNotEnabled: /* Error: Ran out of types for this method. */;
- (unsigned short)featureWillDisable;
- (unsigned short)featureDidDisable;
- (unsigned short)featureWillEnable;
- (unsigned short)featureDidEnable;
- (unsigned short)contactsChangedNotificationFoundName:nameChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)contactsChangedNotificationEmailAddressesChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)willDiscoverExtensions;
- (unsigned short)didDiscoverExtension: /* Error: Ran out of types for this method. */;
- (unsigned short)didDiscoverUnexpectedExtensionType: /* Error: Ran out of types for this method. */;
- (unsigned short)didDiscoverExtensions;
- (unsigned short)didFailToDiscoverExtensions: /* Error: Ran out of types for this method. */;
- (unsigned short)willLoadExtensionVersions;
- (unsigned short)willSaveExtensionVersions;
- (unsigned short)willRejectDonationIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)didRejectDonationIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)couldNotRejectUnknownDonationIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)couldNotRejectDonationIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)willRejectClusterIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)didRejectClusterIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)couldNotRejectUnknownClusterIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)couldNotRejectClusterIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)willListRejections;
- (unsigned short)didListRejections;
- (unsigned short)willRemoveAllRejections;
- (unsigned short)didRemoveAllRejections;
- (unsigned short)willRenewValues:withDonor: /* Error: Ran out of types for this method. */;
- (unsigned short)didRenewValue:untilDate: /* Error: Ran out of types for this method. */;
- (unsigned short)couldNotRenewBecauseNotADonorExtension: /* Error: Ran out of types for this method. */;
- (unsigned short)couldNotRenewBecauseDonorError: /* Error: Ran out of types for this method. */;
- (unsigned short)couldNotRenewBecauseLoadingError: /* Error: Ran out of types for this method. */;

@end
