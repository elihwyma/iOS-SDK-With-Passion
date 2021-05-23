/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContactViewCache, CNMutableContact, CNUIContactsEnvironment;

@protocol AVTAvatarStore;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerProviderGroupsBuilder : NSObject

{
    _Bool _includeContactImage;
    _Bool _includeUnifiedContactImages;
    _Bool _includeAddPhotoItem;
    _Bool _includeMonograms;
    _Bool _includeFaces;
    _Bool _includeAnimoji;
    _Bool _includeAddAnimojiItem;
    _Bool _includeRecents;
    CNMutableContact *_contact;
    id <AVTAvatarStore> _avatarStore;
    CNContactViewCache *_contactViewCache;
    CNUIContactsEnvironment *_environment;
}

@property (nonatomic) _Bool includeContactImage;
@property (nonatomic) _Bool includeUnifiedContactImages;
@property (nonatomic) _Bool includeAddPhotoItem;
@property (nonatomic) _Bool includeMonograms;
@property (nonatomic) _Bool includeFaces;
@property (nonatomic) _Bool includeAnimoji;
@property (nonatomic) _Bool includeAddAnimojiItem;
@property (nonatomic) _Bool includeRecents;
@property (nonatomic, readonly) CNMutableContact *contact;
@property (nonatomic, readonly) id <AVTAvatarStore> avatarStore;
@property (nonatomic, readonly) CNContactViewCache *contactViewCache;
@property (nonatomic, readonly) CNUIContactsEnvironment *environment;
@property (nonatomic, readonly) _Bool includesAnyPhotoContent;

+ (id)builderWithContact:(id)arg1 avatarStore:(id)arg2 environment:(id)arg3 contactViewCache:(id)arg4 photoPickerConfiguration:(id)arg5;

- (id)build;
- (id)initWithContact:(id)arg1 avatarStore:(id)arg2 environment:(id)arg3 contactViewCache:(id)arg4;
- (id)photoContentGroup;
- (id)animojiContentGroup;

@end
