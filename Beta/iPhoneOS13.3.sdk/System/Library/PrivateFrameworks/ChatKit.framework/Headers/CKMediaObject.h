/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL, UITraitCollection;

@protocol CKFileTransfer, OS_dispatch_group;

@interface CKMediaObject : NSObject

{
    _Bool _isFromMe;
    _Bool _suppressPreviewForUnknownSender;
    _Bool _forceInlinePreviewGeneration;
    id <CKFileTransfer> _transfer;
    UITraitCollection *_transcriptTraitCollection;
    NSURL *_cachedHighQualityFileURL;
    NSObject<OS_dispatch_group> *_highQualityFetchInProgressGroup;
    unsigned long long _oopPreviewRequestCount;
}

@property (copy, nonatomic, readonly) NSString *previewFilenameExtension;
@property (retain, nonatomic) id <CKFileTransfer> transfer;
@property (retain, nonatomic) NSURL *cachedHighQualityFileURL;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *highQualityFetchInProgressGroup;
@property (nonatomic) _Bool isFromMe;
@property (nonatomic) _Bool suppressPreviewForUnknownSender;
@property (nonatomic) _Bool forceInlinePreviewGeneration;
@property (nonatomic) unsigned long long oopPreviewRequestCount;
@property (copy, nonatomic, readonly) NSURL *fileURL;
@property (copy, nonatomic, readonly) NSString *transferGUID;
@property (copy, nonatomic, readonly) NSData *data;
@property (copy, nonatomic, readonly) NSString *filename;
@property (copy, nonatomic, readonly) NSDictionary *transcoderUserInfo;
@property (copy, nonatomic, readonly) NSString *mimeType;
@property (copy, nonatomic, readonly) NSString *UTIType;
@property (nonatomic, readonly) int mediaType;
@property (nonatomic, readonly) _Bool canShareItem;
@property (nonatomic, readonly) _Bool needsAnimation;
@property (nonatomic, readonly) _Bool generatePreviewOutOfProcess;
@property (nonatomic, readonly) _Bool validatePreviewFormat;
@property (retain, nonatomic) UITraitCollection *transcriptTraitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSString *previewItemTitle;

+ (_Bool)shouldScaleUpPreview;
+ (id)UTITypes;
+ (_Bool)shouldShadePreview;
+ (id)iconCache;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)mediaClasses;
+ (_Bool)isPreviewable;
+ (_Bool)shouldUseTranscoderGeneratedPreviewSize;
+ (Class)__ck_attachmentItemClass;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isDirectory;
- (id)title;
- (id)location;
- (id)subtitle;
- (id)icon;
- (id)fileManager;
- (void)export:(id)arg1;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)pasteboardItem;
- (_Bool)canExport;
- (_Bool)shouldBeQuickLooked;
- (Class)balloonViewClassForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)composeImagesForEntryContentViewWidth:(double)arg1;
- (_Bool)shouldShowViewer;
- (id)initWithTransfer:(id)arg1 isFromMe:(_Bool)arg2 suppressPreview:(_Bool)arg3 forceInlinePreview:(_Bool)arg4;
- (void)fetchHighQualityFile:(CDUnknownBlockType)arg1;
- (_Bool)isPromisedItem;
- (_Bool)transcoderPreviewGenerationFailed;
- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (_Bool)isPreviewable;
- (id)bbPreviewFillToSize:(struct CGSize)arg1;
- (struct CGSize)bbSize;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (Class)previewBalloonViewClass;
- (Class)coloredBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (id)previewDispatchCache;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (void)generateOOPPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)prewarmPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)_qlThumbnailGeneratorSharedGenerator;
- (struct CGSize)transcoderGeneratedSizeForConstraints:(struct IMPreviewConstraints)arg1;
- (void)cacheAndPersistPreview:(id)arg1 orientation:(BOOL)arg2;
- (_Bool)shouldShowDisclosure;
- (id)fileSizeString;
- (id)downloadProgressImage;
- (id)downloadProgressString;
- (id)richIcon;
- (Class)inlineStickerBalloonViewClass;
- (_Bool)validPreviewExistsAtURL:(id)arg1;
- (struct IMPreviewConstraints)_previewConstraintsForWidth:(double)arg1;
- (id)_transcodeControllerSharedInstance;
- (void)_sampleImageEdges:(id)arg1 usingRect:(struct CGRect)arg2 forMostlyWhitePixels:(unsigned long long *)arg3 otherPixels:(unsigned long long *)arg4;
- (struct IMPreviewConstraints)transcodingPreviewConstraints;
- (struct CGSize)transcodingPreviewPxSize;
- (id)ASTCDataFromImage:(id)arg1;
- (id)JPEGDataFromImage:(id)arg1;

@end
