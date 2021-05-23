/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPhotoPickerProviderItem.h>

@class CNAvatarImageRenderer, CNContact, NSData;

@protocol CNAvatarImageRenderingScope;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerMonogramProviderItem : CNPhotoPickerProviderItem

{
    _Bool _isContactImage;
    _Bool _hasUnknownColor;
    _Bool _isVariantOptionItem;
    CNContact *_contact;
    CNAvatarImageRenderer *_avatarRenderer;
    id <CNAvatarImageRenderingScope> _renderingScope;
    NSData *_monogramData;
}

@property (retain, nonatomic) NSData *monogramData;
@property (nonatomic) _Bool isVariantOptionItem;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNAvatarImageRenderer *avatarRenderer;
@property (retain, nonatomic) id <CNAvatarImageRenderingScope> renderingScope;
@property (nonatomic) _Bool isContactImage;
@property (nonatomic) _Bool hasUnknownColor;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)allowsEditing;
- (id)imageData;
- (unsigned long long)imageType;
- (void)updateContact:(id)arg1;
- (id)thumbnailImageData;
- (id)variantIdentifier;
- (_Bool)allowsVariants;
- (_Bool)allowsMoveAndScale;
- (_Bool)shouldShowCaption;
- (id)localizedVariantsTitle;
- (id)generateThumbnailImageDataIfNeeded;
- (id)createVariantsItemsWithVariantsManager:(id)arg1;
- (id)contactImageForMetadataStore;
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 cropRect:(struct CGRect)arg4 renderingScope:(id)arg5 avatarRenderer:(id)arg6 isVariantOptionItem:(_Bool)arg7;
- (_Bool)isDefaultMonogramItem;
- (void)renderMonogramData;
- (void)updateWithMonogramData:(id)arg1;
- (id)monogramVariantItemForColor:(id)arg1;
- (id)createColorVariantItems;

@end
