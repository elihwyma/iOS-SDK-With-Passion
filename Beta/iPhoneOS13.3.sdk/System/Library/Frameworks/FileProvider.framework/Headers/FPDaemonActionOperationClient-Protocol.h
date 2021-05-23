/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/Swift-Protocol.h>

@protocol FPDaemonActionOperationClient <Swift>

- (unsigned short)remoteOperationCreatedRoot:resultingItem:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteOperationCompletedRoot:resultingItem:error:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteOperationProgressesAreReady;
- (unsigned short)remoteOperationFinishedSendingPastUpdates;

@end
