/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@protocol CDKMMCSItemGroupContextDelegate

- (unsigned short)itemGroupContext:willGetMMCSItemReaderForItemID: /* Error: Ran out of types for this method. */;
- (unsigned short)itemGroupContext:didGetItemReader:itemID: /* Error: Ran out of types for this method. */;
- (unsigned short)itemGroupContext:willOpenItemReaderWriter:error: /* Error: Ran out of types for this method. */;
- (unsigned short)itemGroupContext:didOpenItemReaderWriter:result:error: /* Error: Ran out of types for this method. */;
- (unsigned short)itemGroupContext:willCloseItemReaderWriter:error: /* Error: Ran out of types for this method. */;
- (unsigned short)itemGroupContext:didCloseItemReaderWriter:result:error: /* Error: Ran out of types for this method. */;
- (unsigned short)itemGroupContext:willGetFileMetadataItemReaderWriter:error: /* Error: Ran out of types for this method. */;
- (unsigned short)itemGroupContext:didGetFileMetadataItemReaderWriter:fileMetadata:error: /* Error: Ran out of types for this method. */;
- (unsigned short)itemGroupContext:willReadFromItemReaderWriter:offset:bytes:length:bytesRead:error: /* Error: Ran out of types for this method. */;
- (unsigned short)itemGroupContext:didReadFromItemReaderWriter:offset:bytes:length:bytesRead:error: /* Error: Ran out of types for this method. */;

@end
