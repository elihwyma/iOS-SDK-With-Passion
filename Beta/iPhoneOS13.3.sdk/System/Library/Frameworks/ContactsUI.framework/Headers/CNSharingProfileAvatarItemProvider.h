/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNAvatarImageRenderer, CNContact, CNPhotoPickerColorVariant, CNPhotoPickerVariantsManager, CNSharingProfileAvatarItem, CNSharingProfileAvatarItemProviderConfiguration, CNSharingProfileLogger, NSArray, PRMonogramColor;

@protocol AVTAvatarRecord;

__attribute__((visibility("hidden")))
@interface CNSharingProfileAvatarItemProvider : NSObject

{
    _Bool _shouldIncludeSilhouette;
    _Bool _shouldIncludeAnimoji;
    _Bool _shouldIncludePhoto;
    _Bool _shouldIncludeMonogram;
    _Bool _contactIsFromFullPhotoPicker;
    _Bool _useRTL;
    CNSharingProfileAvatarItemProviderConfiguration *_configuration;
    CNSharingProfileLogger *_logger;
    CNContact *_contact;
    id <AVTAvatarRecord> _avatarRecord;
    CNAvatarImageRenderer *_renderer;
    CNPhotoPickerVariantsManager *_variantsManager;
    NSArray *_items;
    CNSharingProfileAvatarItem *_previousAnimojiItem;
    CNSharingProfileAvatarItem *_previousPhotoItem;
    CNSharingProfileAvatarItem *_silhouetteItem;
    CNSharingProfileAvatarItem *_animojiItem;
    CNSharingProfileAvatarItem *_photoItem;
    CNSharingProfileAvatarItem *_monogramItem;
    CNPhotoPickerColorVariant *_animojiColor;
}

@property (retain, nonatomic) CNSharingProfileLogger *logger;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) id <AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNAvatarImageRenderer *renderer;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) _Bool contactIsFromFullPhotoPicker;
@property (retain, nonatomic) CNSharingProfileAvatarItem *previousAnimojiItem;
@property (retain, nonatomic) CNSharingProfileAvatarItem *previousPhotoItem;
@property (retain, nonatomic) CNSharingProfileAvatarItem *silhouetteItem;
@property (retain, nonatomic) CNSharingProfileAvatarItem *animojiItem;
@property (retain, nonatomic) CNSharingProfileAvatarItem *photoItem;
@property (retain, nonatomic) CNSharingProfileAvatarItem *monogramItem;
@property (nonatomic) _Bool useRTL;
@property (retain, nonatomic) CNPhotoPickerColorVariant *animojiColor;
@property (retain, nonatomic) PRMonogramColor *monogramColor;
@property (nonatomic) _Bool shouldIncludeSilhouette;
@property (nonatomic) _Bool shouldIncludeAnimoji;
@property (nonatomic) _Bool shouldIncludePhoto;
@property (nonatomic) _Bool shouldIncludeMonogram;
@property (nonatomic, readonly) NSArray *avatarItems;
@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *configuration;

+ (id)descriptorForRequiredKeys;
+ (id)monogramImageItemWithContact:(id)arg1 monogramColor:(id)arg2 renderer:(id)arg3 RTL:(_Bool)arg4;
+ (id)animojiItemWithRecord:(id)arg1 stickerConfiguration:(id)arg2 backgroundColor:(id)arg3;
+ (id)contactImageItemWithContact:(id)arg1 renderer:(id)arg2 logger:(id)arg3 type:(long long)arg4;
+ (id)silhouetteImageItemWithRenderer:(id)arg1;
+ (id)originalAnimojiImageForRecord:(id)arg1 stickerConfiguration:(id)arg2 size:(struct CGSize)arg3;
+ (id)unposedImageForAvatarRecord:(id)arg1;
+ (id)compositeImageForImage:(id)arg1 backgroundImage:(id)arg2;

- (void)buildItems;
- (void)updateWithContact:(id)arg1 fromFullPhotoPicker:(_Bool)arg2;
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2 logger:(id)arg3;
- (void)pickRandomColors;
- (_Bool)contactHasImageOfPhotoType:(id)arg1;
- (id)animojColor;
- (void)clearCachedItems;

@end
