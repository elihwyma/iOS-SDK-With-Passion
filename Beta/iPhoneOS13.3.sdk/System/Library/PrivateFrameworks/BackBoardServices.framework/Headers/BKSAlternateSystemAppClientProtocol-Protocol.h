/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/Swift-Protocol.h>

@protocol BKSAlternateSystemAppClientProtocol <Swift>

- (unsigned short)didBlockSystemAppForAlternateSystemApp;
- (unsigned short)didUnblockSystemAppForAlternateSystemApp;
- (unsigned short)alternateSystemAppWithBundleID:failedToOpenWithResult: /* Error: Ran out of types for this method. */;
- (unsigned short)alternateSystemAppWithBundleID:didExitWithContext: /* Error: Ran out of types for this method. */;
- (unsigned short)alternateSystemAppWithBundleIDDidOpen: /* Error: Ran out of types for this method. */;
- (unsigned short)alternateSystemAppWithBundleIDDidTerminate: /* Error: Ran out of types for this method. */;

@end
