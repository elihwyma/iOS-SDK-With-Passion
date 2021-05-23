/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Message/MFAttachment.h>

@class NSArray, NSString;

@interface MFAttachment (NSItemProvider)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *className;
@property (nonatomic, readonly) _Bool isRestrictedMIMEType;
@property (nonatomic, readonly) _Bool isMedia;
@property (nonatomic, readonly) _Bool isPDFFile;
@property (nonatomic, readonly) _Bool isDisplayableImage;
@property (nonatomic, readonly) _Bool isDisplayableByWebKit;
@property (nonatomic, readonly) _Bool isDisplayableInsidePlugin;
@property (nonatomic, readonly) _Bool isDisplayableInline;
@property (nonatomic, readonly) _Bool isBasicImage;
@property (nonatomic, readonly) _Bool isContentCompressed;
@property (nonatomic, readonly) _Bool isContentOpenable;
@property (nonatomic, readonly) _Bool isCameraRollCompatibleVideo;
@property (nonatomic, readonly) unsigned long long scaledFileSize;
@property (nonatomic, readonly) double constrainedWidth;
@property (nonatomic, readonly) unsigned long long imageScalingFlags;

+ (id)writableTypeIdentifiersForItemProvider;
+ (_Bool)_isPDF:(id)arg1;
+ (_Bool)isBasicImageMimeType:(id)arg1;
+ (id)attachmentElementHTMLStringWithAttributes:(id)arg1;
+ (_Bool)canInlineImageType:(id)arg1 data:(id)arg2;

- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)_imageScale;
- (struct CGSize)imageDimensions;
- (void)setImageDimensions:(struct CGSize)arg1;
- (_Bool)isCalendarFile;
- (id)filenameStrippingZipIfNeededUseApplications:(_Bool)arg1;
- (_Bool)isPass;
- (id)_contentTypeByStrippingZipIfNeeded:(_Bool)arg1;
- (_Bool)_isContentTypeDisplayableByMobileMail;
- (struct CGSize)imageDimensionsWithData:(id)arg1;
- (id)_imageScalingKeyForImageScale:(unsigned long long)arg1;
- (id)scaledImageToFit:(unsigned long long)arg1 saveScaledImage:(_Bool)arg2 attachmentContextID:(id)arg3;
- (_Bool)needsColorspaceConversion;
- (void)_setImageScale:(unsigned long long)arg1;
- (struct CGSize)markupSizeForImageScale:(unsigned long long)arg1;
- (id)passWithError:(id *)arg1;
- (void)compressContentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)decompressContentsWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)scaledFileSizeForScale:(unsigned long long)arg1;
- (void)enqueueScaleAttachmentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)markupStringForCompositionWithPrependedBlankLine:(_Bool)arg1 imageScale:(unsigned long long)arg2 useAttachmentElement:(_Bool)arg3;
- (id)markupStringForDisplayWithData:(id)arg1 allowAttachmentElement:(_Bool)arg2;

@end
