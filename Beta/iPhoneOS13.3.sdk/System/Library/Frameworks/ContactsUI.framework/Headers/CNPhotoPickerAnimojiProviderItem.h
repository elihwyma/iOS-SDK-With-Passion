/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPhotoPickerProviderItem.h>

@class AVTAvatarRecordImageProvider, AVTRenderingScope, AVTStickerConfiguration, CNAvatarStickerGeneratorProvider, CNPhotoPickerColorVariant, NSData, UIImage;

@protocol AVTAvatarRecord;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerAnimojiProviderItem : CNPhotoPickerProviderItem

{
    id <AVTAvatarRecord> _avatarRecord;
    AVTStickerConfiguration *_poseConfiguration;
    CNPhotoPickerColorVariant *_backgroundColorVariant;
    NSData *__originalImageData;
    NSData *__generatedImageData;
    UIImage *_loadingPlaceholderImage;
    CNAvatarStickerGeneratorProvider *_stickerGeneratorProvider;
    AVTRenderingScope *_renderingScope;
    AVTAvatarRecordImageProvider *_imageProvider;
}

@property (retain, nonatomic) NSData *_originalImageData;
@property (retain, nonatomic) NSData *_generatedImageData;
@property (retain, nonatomic) NSData *thumbnailImageData;
@property (retain, nonatomic) UIImage *loadingPlaceholderImage;
@property (retain, nonatomic) CNPhotoPickerColorVariant *backgroundColorVariant;
@property (retain, nonatomic) CNAvatarStickerGeneratorProvider *stickerGeneratorProvider;
@property (retain, nonatomic) AVTRenderingScope *renderingScope;
@property (retain, nonatomic) AVTAvatarRecordImageProvider *imageProvider;
@property (retain, nonatomic) id <AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) AVTStickerConfiguration *poseConfiguration;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)imageData;
- (unsigned long long)imageType;
- (void)updateContact:(id)arg1;
- (id)variantIdentifier;
- (_Bool)allowsVariants;
- (_Bool)allowsMoveAndScale;
- (_Bool)shouldShowCaption;
- (id)localizedVariantsTitle;
- (id)originalImageData;
- (id)generateThumbnailImageDataIfNeeded;
- (void)applyVariantEffectToFullsizeImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)createVariantsItemsWithVariantsManager:(id)arg1;
- (id)contactImageForMetadataStore;
- (id)initWithOriginalImageData:(id)arg1 cropRect:(struct CGRect)arg2 backgroundColorVariant:(id)arg3;
- (id)initWithOriginalImageData:(id)arg1 cropRect:(struct CGRect)arg2;
- (id)initWithAvatarRecord:(id)arg1 imageProvider:(id)arg2 renderingScope:(id)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5;
- (id)copyWithColor:(id)arg1;
- (id)copyWithPoseConfiguration:(id)arg1 generatorProvider:(id)arg2;
- (id)renderDefaultAvatarImage;
- (id)renderAvatarWithPoseWithSize:(double)arg1;
- (id)renderAvatarWithBackgroundWithImageData:(id)arg1;
- (id)renderAvatarWithBackgroundWithImage:(id)arg1;
- (id)generateImageDataIfNeeded;

@end
