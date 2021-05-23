/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/Swift-Protocol.h>

@protocol CKXPCClient <Swift>

- (unsigned short)handleOperationProgress:forOperationWithID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)handleOperationStatistics:forOperationWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)handleOperationCompletion:forOperationWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)handleOperationCheckpoint:forOperationWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)openFileWithOpenInfo:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getFileMetadataWithFileHandle:openInfo:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)readBytesOfInMemoryAssetContentWithUUID:offset:length:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)consumeSandboxExtensions:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)handleOperationProgress:forOperationWithID: /* Error: Ran out of types for this method. */;

@end
