/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/Swift-Protocol.h>

@protocol ASDStoreKitServiceProtocol <Swift>

- (unsigned short)storefrontWithReplyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)forceSandboxForBundleIdentifier:untilDate: /* Error: Ran out of types for this method. */;
- (unsigned short)requestProductsWithIdentifiers:client:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)registerArcadeAppWithRandomFromLib:randomFromLibLength:resultHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)arcadeSubscriptionStatusWithNonce:resultHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)repairArcadeApp;
- (unsigned short)checkServerQueueForQueue:withClient: /* Error: Ran out of types for this method. */;
- (unsigned short)requestProductReview;
- (unsigned short)addPaymentToQueue:withInfo:client: /* Error: Ran out of types for this method. */;
- (unsigned short)finishPaymentWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)restoreCompletedTransactionsToQueue:forUsername:withClient:replyBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)addDownloadWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelDownloadWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseDownloadWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeDownloadWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteContentForProductID: /* Error: Ran out of types for this method. */;
- (unsigned short)renewReceiptWithOptions:client:replyBlock: /* Error: Ran out of types for this method. */;

@end
