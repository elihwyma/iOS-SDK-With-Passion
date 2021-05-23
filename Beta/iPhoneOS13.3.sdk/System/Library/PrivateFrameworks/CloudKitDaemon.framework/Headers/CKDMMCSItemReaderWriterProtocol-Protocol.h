/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/Swift-Protocol.h>

@class CKDMMCSItem, CKDMMCSItemGroupContext;

@protocol CKDMMCSItemReaderWriterProtocol <Swift>

@property (nonatomic, readonly) CKDMMCSItemGroupContext *MMCSRequest;
@property (nonatomic, readonly) CKDMMCSItem *MMCSItem;

- (unsigned short)openWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)closeWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)getFileMetadataWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)readBytesAtOffset:bytes:length:bytesRead:error: /* Error: Ran out of types for this method. */;
- (unsigned short)writeBytesAtOffset:bytes:length:bytesWritten:error: /* Error: Ran out of types for this method. */;

@end
