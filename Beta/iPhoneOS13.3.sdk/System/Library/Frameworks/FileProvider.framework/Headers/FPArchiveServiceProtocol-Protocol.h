/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@protocol FPArchiveServiceProtocol

- (unsigned short)archiveItemsWithURLs:compressionFormat:destinationFolderURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)unarchiveItemAtURL:passphrase:destinationFolderURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)itemDescriptorsForItemAtURL:passphrases:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)unarchiveItemAtURL:passphrases:destinationFolderURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)itemDescriptorsForItemAtURL:passphrase:completionHandler: /* Error: Ran out of types for this method. */;

@end
