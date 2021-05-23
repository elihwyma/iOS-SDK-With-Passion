/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarLibraryCreateNewItem, AVTUIEnvironment, AVTViewSessionProvider, NSArray, NSMutableArray, NSString;

@protocol AVTAvatarLibraryModelDelegate, AVTAvatarStoreInternal;

@interface AVTAvatarLibraryModel : NSObject

{
    _Bool _isCreatingAvatar;
    id <AVTAvatarLibraryModelDelegate> _delegate;
    id <AVTAvatarStoreInternal> _avatarStore;
    AVTViewSessionProvider *_viewSessionProvider;
    AVTUIEnvironment *_environment;
    AVTAvatarLibraryCreateNewItem *_createNewItem;
    NSMutableArray *_mutableLibraryItems;
}

@property (nonatomic, readonly) id <AVTAvatarStoreInternal> avatarStore;
@property (nonatomic, readonly) AVTViewSessionProvider *viewSessionProvider;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) AVTAvatarLibraryCreateNewItem *createNewItem;
@property (nonatomic, readonly) NSMutableArray *mutableLibraryItems;
@property (nonatomic) _Bool isCreatingAvatar;
@property (weak, nonatomic) id <AVTAvatarLibraryModelDelegate> delegate;
@property (nonatomic, readonly) NSArray *libraryItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)load;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (unsigned long long)numberOfRecords;
- (void)storeDidChangeNotification:(id)arg1;
- (void)reloadDataForRecords:(id)arg1;
- (void)presentActionSheetForRecordItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)presentEditor:(id)arg1 forCreating:(_Bool)arg2;
- (void)presetShareSheetWithRecords:(id)arg1 fromItem:(id)arg2;
- (void)insertItemForRecord:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeItemForRecordAtIndex:(unsigned long long)arg1;
- (id)libraryItemsFromAvatarRecords:(id)arg1;
- (long long)indexForRecord:(id)arg1;
- (void)updateForCreatedRecord:(id)arg1;
- (void)updateForEditedRecord:(id)arg1;
- (id)initWithAvatarStore:(id)arg1 avtViewSessionProvider:(id)arg2 environment:(id)arg3;
- (void)performActionOnItemAtIndex:(unsigned long long)arg1;

@end
