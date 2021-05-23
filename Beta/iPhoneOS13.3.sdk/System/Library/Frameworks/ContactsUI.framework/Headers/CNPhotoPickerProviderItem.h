/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

#import <ContactsUI/Swift-Protocol.h>

@class NSData, NSDate, NSString, UIImage;

@protocol CNPhotoPickerProviderItemDelegate, CNScheduler;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerProviderItem : NSObject <Swift>

{
    NSData *_thumbnailImageData;
    NSString *_recentsIdentifier;
    NSString *_localizedVariantDisplayName;
    id <CNScheduler> _renderingQueue;
    id <CNScheduler> _callbackQueue;
    NSDate *_sortDate;
    id <CNPhotoPickerProviderItemDelegate> _delegate;
    UIImage *_fullSizeImage;
    UIImage *_thumbnailImage;
    UIImage *_loadingPlaceholderImage;
    NSData *_imageData;
    NSData *_fullscreenImageData;
    NSData *_filteredImageData;
    NSString *_imageFilterName;
    struct CGRect _cropRect;
}

@property (retain, nonatomic) UIImage *fullSizeImage;
@property (retain, nonatomic) UIImage *thumbnailImage;
@property (retain, nonatomic) UIImage *loadingPlaceholderImage;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSData *thumbnailImageData;
@property (retain, nonatomic) NSData *fullscreenImageData;
@property (retain, nonatomic) NSData *filteredImageData;
@property (retain, nonatomic) NSString *imageFilterName;
@property (retain, nonatomic) NSString *localizedVariantDisplayName;
@property (nonatomic, readonly) NSData *originalImageData;
@property (retain, nonatomic) NSString *recentsIdentifier;
@property (nonatomic, readonly) struct CGRect cropRect;
@property (nonatomic, readonly) unsigned long long imageType;
@property (nonatomic, readonly) _Bool allowsVariants;
@property (nonatomic, readonly) _Bool allowsEditing;
@property (nonatomic, readonly) _Bool allowsMoveAndScale;
@property (nonatomic, readonly) _Bool shouldShowCaption;
@property (nonatomic, readonly) NSString *localizedVariantsTitle;
@property (nonatomic, readonly) NSString *variantIdentifier;
@property (nonatomic, readonly) id <CNScheduler> renderingQueue;
@property (nonatomic, readonly) id <CNScheduler> callbackQueue;
@property (retain, nonatomic) NSDate *sortDate;
@property (weak, nonatomic) id <CNPhotoPickerProviderItemDelegate> delegate;

+ (id)thumbnailViewForImage:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateContact:(id)arg1;
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 cropRect:(struct CGRect)arg4;
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 imageFilterName:(id)arg4 cropRect:(struct CGRect)arg5 renderingQueue:(id)arg6 callbackQueue:(id)arg7;
- (void)generateAllImageDatasIfNeeded;
- (id)generateThumbnailImageDataIfNeeded;
- (id)generateThumbnailImageDataWithData:(id)arg1;
- (void)clearThumbnailImage;
- (void)thumbnailViewWithPlaceholderProvider:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)thumbnailViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)applyVariantEffectToFullsizeImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)createVariantsItemsWithVariantsManager:(id)arg1;
- (id)generatePhotoFilterVariants;
- (id)rotateImageDataIfNeeded:(id)arg1;
- (id)contactImageForMetadataStore;
- (void)updateTintColorIfNeeded:(id)arg1;

@end
