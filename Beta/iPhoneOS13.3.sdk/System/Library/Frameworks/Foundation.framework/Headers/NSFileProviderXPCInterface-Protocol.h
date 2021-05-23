/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/Swift-Protocol.h>

@protocol NSFileProviderXPCInterface <Swift>

- (unsigned short)checkInProviderWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)provideItemAtURL:forClaimWithID:madeByClientWithProcessIdentifier:options:kernelOperation:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelProvidingItemAtURL:forClaimWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)providePhysicalItemForURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)observePresentationChangeOfKind:forPresenterWithID:fromProcessWithIdentifier:observedUbiquityAttributes:url:newURL: /* Error: Ran out of types for this method. */;
- (unsigned short)observeEndOfWriteAtURL:forClaimWithID:fromProcessWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)movingItemAtURL:requiresProvidingWithDestinationURL:completionHandler: /* Error: Ran out of types for this method. */;

@end
