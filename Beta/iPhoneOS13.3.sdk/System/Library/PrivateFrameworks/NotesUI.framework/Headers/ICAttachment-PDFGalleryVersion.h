/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICAttachment.h>

@class ICDocCamImageQuad, ICNotePasteboardData, NSString, UIImage;

@interface ICAttachment (PDFGalleryVersion)

@property (nonatomic, readonly) long long docCamPDFVersion;
@property (nonatomic, readonly) _Bool isUnsupportedOnCurrentPlatform;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) UIImage *unprocessedDocumentImage;
@property (nonatomic, readonly) NSString *modificationDateForSpeaking;
@property (nonatomic, readonly) NSString *movieDurationForSpeaking;
@property (copy, nonatomic) ICDocCamImageQuad *croppingQuad;
@property (nonatomic, readonly) ICNotePasteboardData *pasteboardData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct NSCache *)imageCache;
+ (id)imageLoadingOperationQueue;
+ (id)thumbnailOperationQueue;

- (id)attributedString;
- (struct UIImage *)cachedImage;
- (void)setCachedImage:(struct UIImage *)arg1;
- (id)activityItems;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (void)notifyDocCamFrameworkAttachmentWasDeleted;
- (_Bool)thumbnailImage:(struct UIImage **)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 requireAppearance:(_Bool)arg5 imageScaling:(unsigned long long *)arg6 showAsFileIcon:(_Bool *)arg7 isMovie:(_Bool *)arg8 movieDuration:(CDStruct_1b6d18a9 *)arg9;
- (_Bool)fetchThumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 appearanceInfo:(id)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7 fallbackBlock:(CDUnknownBlockType)arg8 aboutToLoadHandler:(CDUnknownBlockType)arg9;
- (id)updateAttachmentPreviewImageWithImage:(struct UIImage *)arg1 scale:(double)arg2 scaleWhenDrawing:(_Bool)arg3 metadata:(id)arg4 sendNotification:(_Bool)arg5;
- (id)deviceInfosWithoutPreviewImagesFromDeviceInfos:(id)arg1;
- (id)updateAttachmentPreviewImageWithImage:(struct UIImage *)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 scaleWhenDrawing:(_Bool)arg4 metadata:(id)arg5 sendNotification:(_Bool)arg6;
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1 aboutToLoadHandler:(CDUnknownBlockType)arg2 forceFullSizeImage:(_Bool)arg3;
- (_Bool)thumbnailImage:(struct UIImage **)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 imageScaling:(unsigned long long *)arg4 showAsFileIcon:(_Bool *)arg5 isMovie:(_Bool *)arg6 movieDuration:(CDStruct_1b6d18a9 *)arg7;

@end
