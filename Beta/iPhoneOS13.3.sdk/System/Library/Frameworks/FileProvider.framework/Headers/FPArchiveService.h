/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@protocol FPArchiveServiceUnarchivingDelegate;

@interface FPArchiveService : NSObject

{
    id <FPArchiveServiceUnarchivingDelegate> _unarchivingDelegate;
}

@property (weak, nonatomic) id <FPArchiveServiceUnarchivingDelegate> unarchivingDelegate;

- (id)archiveItemsWithURLs:(id)arg1 compressionFormat:(unsigned long long)arg2 destinationFolderURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)unarchiveItemAtURL:(id)arg1 passphrase:(id)arg2 destinationFolderURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)receiveArchivedItemsDescriptors:(id)arg1;
- (void)itemDescriptorsForItemAtURL:(id)arg1 passphrases:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)unarchiveItemAtURL:(id)arg1 passphrases:(id)arg2 destinationFolderURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)itemDescriptorsForItemAtURL:(id)arg1 passphrase:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)archiveItemsWithURLs:(id)arg1 compressionFormat:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)unarchiveItemAtURL:(id)arg1 passphrase:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
