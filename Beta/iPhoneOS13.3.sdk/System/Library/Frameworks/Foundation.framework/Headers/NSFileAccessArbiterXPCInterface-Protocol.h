/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/Swift-Protocol.h>

@protocol NSFileAccessArbiterXPCInterface <Swift>

- (unsigned short)revokeAccessClaimForID: /* Error: Ran out of types for this method. */;
- (unsigned short)removePresenterWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)removeProviderWithID:uniqueID: /* Error: Ran out of types for this method. */;
- (unsigned short)provideSubarbiterDebugInfoIncludingEverything:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)grantAccessClaim:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)addPresenter:withID:fileURL:lastPresentedItemEventIdentifier:ubiquityAttributes:options:responses: /* Error: Ran out of types for this method. */;
- (unsigned short)addProvider:withID:uniqueID:forProvidedItemsURL:options:withServer:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)grantSubarbitrationClaim:withServer:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareToArbitrateForURLs: /* Error: Ran out of types for this method. */;
- (unsigned short)startArbitratingWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getItemHasPresentersAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)provideDebugInfoWithLocalInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performBarrierWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
