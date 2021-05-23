/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class FPItem, NSString;

@interface FPRenameOperation : FPActionOperation

{
    FPItem *_item;
    NSString *_newName;
}

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)fp_prettyDescription;
- (void)actionMain;
- (void)presendNotifications;
- (id)initWithItem:(id)arg1 newDisplayName:(id)arg2;
- (id)initWithItem:(id)arg1 newName:(id)arg2;
- (id)initWithItem:(id)arg1 newFileName:(id)arg2;

@end
