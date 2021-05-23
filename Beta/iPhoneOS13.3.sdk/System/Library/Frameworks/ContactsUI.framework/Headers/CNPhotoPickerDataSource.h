/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContactViewCache, CNMutableContact, CNPhotoPickerVariantsManager, NSArray, NSIndexPath, NSString;

@protocol AVTAvatarStore, CNPhotoPickerProviderGroupDelegate;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerDataSource : NSObject

{
    _Bool _allowsPhotoLibraryAccess;
    CNMutableContact *_contact;
    NSIndexPath *_activePhotoIndexPath;
    CNContactViewCache *_contactViewCache;
    id <CNPhotoPickerProviderGroupDelegate> _delegate;
    CNPhotoPickerVariantsManager *_variantsManager;
    id <AVTAvatarStore> _avatarStore;
    NSArray *_providerGroups;
}

@property (nonatomic, readonly) NSArray *providerGroups;
@property (nonatomic) _Bool allowsPhotoLibraryAccess;
@property (retain, nonatomic) CNMutableContact *contact;
@property (retain, nonatomic) NSIndexPath *activePhotoIndexPath;
@property (nonatomic, readonly) CNContactViewCache *contactViewCache;
@property (weak, nonatomic) id <CNPhotoPickerProviderGroupDelegate> delegate;
@property (nonatomic, readonly) CNPhotoPickerVariantsManager *variantsManager;
@property (nonatomic, readonly) id <AVTAvatarStore> avatarStore;
@property (nonatomic) unsigned long long itemsPerRow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)avatarStore;

- (id)removeItem:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)titleForSection:(long long)arg1;
- (void)photoPickerProviderGroupDidUpdate:(id)arg1;
- (void)photoPickerProviderGroup:(id)arg1 didUpdateItem:(id)arg2;
- (id)initWithContact:(id)arg1 contactViewCache:(id)arg2 photoPickerConfiguration:(id)arg3;
- (id)initWithContact:(id)arg1 contactViewCache:(id)arg2 providerGroups:(id)arg3 avatarStore:(id)arg4;
- (void)loadProviderGroupsItemsForSize:(struct CGSize)arg1 itemsPerRow:(double)arg2 scale:(double)arg3 RTL:(_Bool)arg4;
- (id)actionTitleForSection:(long long)arg1;
- (_Bool)isItemAtIndexPathAddItem:(id)arg1;
- (id)providerGroupAtIndexPath:(id)arg1;
- (id)providerItemAtIndexPath:(id)arg1;
- (id)findActiveIndexPathInGroup:(id)arg1 withImageData:(id)arg2;
- (id)indexOfAddedItem:(id)arg1 inGroupOfType:(long long)arg2;

@end
