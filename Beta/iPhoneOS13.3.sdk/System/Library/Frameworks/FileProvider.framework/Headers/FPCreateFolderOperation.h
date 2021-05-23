/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class FPItem, FPItemID, NSString;

@interface FPCreateFolderOperation : FPActionOperation

{
    FPItem *_parentItem;
    NSString *_folderFilename;
    FPItemID *_placeholderID;
    CDUnknownBlockType _createFolderCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType createFolderCompletionBlock;

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)actionMain;
- (void)presendNotifications;
- (id)initWithParentItem:(id)arg1 folderName:(id)arg2;

@end
