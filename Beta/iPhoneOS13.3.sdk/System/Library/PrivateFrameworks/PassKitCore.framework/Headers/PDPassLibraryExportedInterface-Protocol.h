/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol PDPassLibraryExportedInterface <Swift>

- (unsigned short)replacePassWithPassData:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)addPassesWithData:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)removePassWithUniqueID:diagnosticReason:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)removePassesWithUniqueIDs:diagnosticReason:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPassesAndCatalogOfPassTypes:limitResults:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPassesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPassesOfType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getManifestHashAndSettingsForPassTypeID:serialNumber:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPassWithPassTypeID:serialNumber:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPassWithUniqueID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getContentForUniqueID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getImageSetForUniqueID:ofType:displayProfile:suffix:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getDataForBundleResourceNamed:withExtension:objectUniqueIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getArchivedObjectWithUniqueID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)isPaymentPassActivationAvailableWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)submitVerificationCode:verificationData:forPassWithUniqueID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)hasPassesOfType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)canAddPassesOfType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)countPassesOfType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultPaymentPassWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)canAddFelicaPassWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)expressTransitPassWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)sortedTransitPassesForAppletDataFormat:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)supportedTransitPartnersForDigitalIssuance: /* Error: Ran out of types for this method. */;
- (unsigned short)transitMessageForRouteInfo:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)passWithFPANIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)passWithDPANIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)backupMetadataWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setBackupMetadata:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)migrateDataWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)peerPaymentPassUniqueIDWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)supportsDisbursements: /* Error: Ran out of types for this method. */;
- (unsigned short)checkForTransitNotification;
- (unsigned short)postUpgradedPassNotificationForMarket:passUniqueID: /* Error: Ran out of types for this method. */;

@end
