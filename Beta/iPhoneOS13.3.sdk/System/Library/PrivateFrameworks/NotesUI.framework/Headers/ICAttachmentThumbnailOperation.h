/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSOperation.h>

@class ICAppearanceInfo, ICAttachmentPreviewImageLoader, ICAttachmentThumbnailOperationQueue, ICThumbnailDataCache, NSManagedObjectID, NSMutableArray, NSString, NSURL;

@interface ICAttachmentThumbnailOperation : NSOperation

{
    _Bool _attachmentPropertiesCaptured;
    _Bool _showAsFileIcon;
    _Bool _isMovie;
    double _scale;
    ICAppearanceInfo *_appearanceInfo;
    ICThumbnailDataCache *_cache;
    NSString *_cacheKey;
    CDUnknownBlockType _fallbackBlock;
    CDUnknownBlockType _processingBlock;
    ICAttachmentThumbnailOperationQueue *_queue;
    NSMutableArray *_completionBlocks;
    NSManagedObjectID *_attachmentID;
    ICAttachmentPreviewImageLoader *_attachmentPreviewImageLoader;
    NSURL *_mediaURL;
    unsigned long long _imageScaling;
    struct CGSize _minSize;
}

@property (nonatomic) struct CGSize minSize;
@property (nonatomic) double scale;
@property (retain, nonatomic) ICAppearanceInfo *appearanceInfo;
@property (retain, nonatomic) ICThumbnailDataCache *cache;
@property (retain, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) CDUnknownBlockType fallbackBlock;
@property (copy, nonatomic) CDUnknownBlockType processingBlock;
@property (weak, nonatomic) ICAttachmentThumbnailOperationQueue *queue;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic) NSManagedObjectID *attachmentID;
@property (nonatomic) _Bool attachmentPropertiesCaptured;
@property (retain, nonatomic) ICAttachmentPreviewImageLoader *attachmentPreviewImageLoader;
@property (retain, nonatomic) NSURL *mediaURL;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) _Bool showAsFileIcon;
@property (nonatomic) _Bool isMovie;

- (void)main;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)requestThumbnail;
- (void)capturePropertiesFromAttachment:(id)arg1;
- (_Bool)isMatchingOperationForCacheKey:(id)arg1 cache:(id)arg2;
- (id)initWithAttachment:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 processingBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8 fallbackBlock:(CDUnknownBlockType)arg9 queue:(id)arg10;

@end
