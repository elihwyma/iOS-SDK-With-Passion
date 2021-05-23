/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/Swift-Protocol.h>

@protocol NPKPaymentWebServiceCompanionTargetDeviceDelegate <Swift>

- (unsigned short)setNewAuthRandom: /* Error: Ran out of types for this method. */;
- (unsigned short)noteForegroundVerificationObserverActive: /* Error: Ran out of types for this method. */;
- (unsigned short)startBackgroundVerificationObserverForPass:verificationMethod: /* Error: Ran out of types for this method. */;
- (unsigned short)handlePreconditionNotMetWithUniqueIDs:preconditionDescription:shouldUnregister: /* Error: Ran out of types for this method. */;
- (unsigned short)handlePushToken: /* Error: Ran out of types for this method. */;
- (unsigned short)handleUpdatePaymentPassWithTypeIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)handlePreferredAID:forPassWithUniqueID: /* Error: Ran out of types for this method. */;
- (unsigned short)handlePaymentTransactions:appletStates:forUniqueIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)handleAppletState:forUniqueID: /* Error: Ran out of types for this method. */;
- (unsigned short)handleRemoveTransactionsWithIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)handleBalanceUpdate:forUniqueID: /* Error: Ran out of types for this method. */;
- (unsigned short)archiveWebServiceContext: /* Error: Ran out of types for this method. */;
- (unsigned short)archiveWebServiceBackgroundContext: /* Error: Ran out of types for this method. */;
- (unsigned short)handlePaymentWebServiceContextFromWatch: /* Error: Ran out of types for this method. */;
- (unsigned short)sendWebServiceContextToWatch;
- (unsigned short)showPaymentSetupForAppDisplayName: /* Error: Ran out of types for this method. */;
- (unsigned short)sendPaymentOptionsDefaultsToWatch;
- (unsigned short)handleUpdatedPeerPaymentWebServiceContext:account: /* Error: Ran out of types for this method. */;
- (unsigned short)handleDownloadAllPaymentPasses;
- (unsigned short)checkCompanionPeerPaymentRegistrationState;

@end
