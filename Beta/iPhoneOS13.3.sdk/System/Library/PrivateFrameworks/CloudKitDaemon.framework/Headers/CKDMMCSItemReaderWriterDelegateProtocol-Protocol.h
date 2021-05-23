/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@protocol CKDMMCSItemReaderWriterDelegateProtocol

- (unsigned short)willOpenItemReaderWriter:error: /* Error: Ran out of types for this method. */;
- (unsigned short)didOpenItemReaderWriter:result:error: /* Error: Ran out of types for this method. */;
- (unsigned short)willCloseItemReaderWriter:error: /* Error: Ran out of types for this method. */;
- (unsigned short)didCloseItemReaderWriter:result:error: /* Error: Ran out of types for this method. */;
- (unsigned short)willGetFileMetadataItemReaderWriter:error: /* Error: Ran out of types for this method. */;
- (unsigned short)didGetFileMetadataItemReaderWriter:fileMetadata:error: /* Error: Ran out of types for this method. */;
- (unsigned short)willReadFromItemReaderWriter:offset:bytes:length:bytesRead:error: /* Error: Ran out of types for this method. */;
- (unsigned short)didReadFromItemReaderWriter:offset:bytes:length:bytesRead:error: /* Error: Ran out of types for this method. */;

@end
