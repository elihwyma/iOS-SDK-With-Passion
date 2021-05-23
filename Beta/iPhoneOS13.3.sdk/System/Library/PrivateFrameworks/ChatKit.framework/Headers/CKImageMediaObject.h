/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMediaObject.h>

@class CKImageData, NSString, NSURL, PHLivePhoto, UIImage;

@interface CKImageMediaObject : CKMediaObject

{
    CKImageData *_imageData;
    CKImageData *_backgroundImageData;
    NSURL *_appendedBundleURL;
    struct CGSize _originalSize;
    NSString *_irisVideoPath;
    _Bool _isSticker;
    PHLivePhoto *_livePhoto;
    UIImage *_thumbnail;
}

@property (nonatomic, readonly) _Bool isSticker;
@property (nonatomic, readonly) CKImageData *imageData;
@property (retain, nonatomic) UIImage *thumbnail;
@property (nonatomic, readonly) _Bool isIrisAsset;
@property (nonatomic, readonly) PHLivePhoto *livePhoto;

+ (id)UTITypes;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (Class)imageDataClass;
+ (_Bool)isPreviewable;
+ (Class)__ck_attachmentItemClass;

- (id)location;
- (int)mediaType;
- (struct CGSize)originalSize;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)export:(id)arg1;
- (id)calculateIrisVideoPath;
- (_Bool)canShareItem;
- (id)pasteboardItem;
- (_Bool)canExport;
- (id)initWithTransfer:(id)arg1 isFromMe:(_Bool)arg2 suppressPreview:(_Bool)arg3 forceInlinePreview:(_Bool)arg4;
- (_Bool)validatePreviewFormat;
- (id)previewFilenameExtension;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)bbPreviewFillToSize:(struct CGSize)arg1;
- (struct CGSize)bbSize;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)getIrisVideoPath;
- (id)_getIrisBundleLocation;

@end
