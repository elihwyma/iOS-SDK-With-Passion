/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/Swift-Protocol.h>

@protocol NSFilePresenterXPCInterface <Swift>

- (unsigned short)observeChangeOfUbiquityAttributes: /* Error: Ran out of types for this method. */;
- (unsigned short)setProviderPurposeIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)relinquishToReadingClaimWithID:options:purposeID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)reacquireFromReadingClaimForID: /* Error: Ran out of types for this method. */;
- (unsigned short)relinquishToWritingClaimWithID:options:purposeID:subitemURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)reacquireFromWritingClaimForID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveChangesWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)accommodateDeletionOfSubitemAtURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)observeChangeWithSubitemURL: /* Error: Ran out of types for this method. */;
- (unsigned short)observeMoveToURL:withSubitemURL:byWriterWithPurposeID: /* Error: Ran out of types for this method. */;
- (unsigned short)observeDisconnection;
- (unsigned short)observeReconnection;
- (unsigned short)observeUbiquityChangeWithSubitemURL: /* Error: Ran out of types for this method. */;
- (unsigned short)observeSharingChangeWithSubitemURL: /* Error: Ran out of types for this method. */;
- (unsigned short)observeVersionChangeOfKind:toItemAtURL:withClientID:name: /* Error: Ran out of types for this method. */;
- (unsigned short)observePresenterChange:forSubitemAtURL: /* Error: Ran out of types for this method. */;
- (unsigned short)updateLastEventID: /* Error: Ran out of types for this method. */;
- (unsigned short)logSuspensionWarning;

@end
