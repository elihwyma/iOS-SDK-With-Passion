/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/Swift-Protocol.h>

@protocol NPKPassSyncEngineDelegate <Swift>

- (unsigned short)passSyncEngine:sendStateChange: /* Error: Ran out of types for this method. */;
- (unsigned short)passSyncEngine:sendStateChangeProcessedWithUUID:changeAccepted:fullPassRequired: /* Error: Ran out of types for this method. */;
- (unsigned short)passSyncEngine:sendReconciledStateUnrecognizedWithHash:currentPassSyncState: /* Error: Ran out of types for this method. */;
- (unsigned short)passSyncEngine:sendProposedReconciledState: /* Error: Ran out of types for this method. */;
- (unsigned short)passSyncEngine:sendReconciledStateAcceptedWithHash: /* Error: Ran out of types for this method. */;
- (unsigned short)passSyncEngine:requestsAddPassData:forSyncStateItem:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)passSyncEngine:requestsUpdatePassData:forSyncStateItem:baseManifestHashForPartialUpdate:remoteAssetsForPartialUpdate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)passSyncEngine:requestsRemovePassWithUniqueID:completion: /* Error: Ran out of types for this method. */;

@end
