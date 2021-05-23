/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class FPItem, FPItemID, NSFileCoordinator, NSString, NSURL;

@interface FPUnarchiveOperation : FPActionOperation

{
    FPItem *_item;
    NSURL *_itemURL;
    FPItemID *_placeholderID;
    FPItem *_destinationFolder;
    _Bool _hasStitchedUnarchivedItems;
    NSFileCoordinator *_coordinator;
    id _coordinationAccessToken;
    CDUnknownBlockType _passphraseRequestBlock;
    CDUnknownBlockType _unarchiveCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType passphraseRequestBlock;
@property (copy, nonatomic) CDUnknownBlockType unarchiveCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)actionMain;
- (id)_newParentProgressWithCompletedUnitCount:(long long)arg1;
- (void)_completeWithItemURL:(id)arg1 item:(id)arg2 service:(id)arg3 resultURL:(id)arg4 error:(id)arg5;
- (_Bool)_handleArchiveDecryptionError:(id)arg1 item:(id)arg2 service:(id)arg3 itemURL:(id)arg4;
- (void)__completeWithItem:(id)arg1 service:(id)arg2 resultURL:(id)arg3 error:(id)arg4;
- (_Bool)getHasUnarchivedMultipleItems:(_Bool *)arg1 firstUnarchivedItemURL:(id *)arg2 forArchiveFolderURL:(id)arg3 error:(id *)arg4;
- (void)service:(id)arg1 didReceiveArchivedItemsDescriptors:(id)arg2;
- (id)initWithItem:(id)arg1 destinationFolder:(id)arg2;

@end
