/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSOperation.h>

@class ICAppearanceInfo, ICThumbnailDataCache, NSMutableArray, NSString, NSURL, UIImage;

@interface ICAttachmentThumbnailPostProcessingOperation : NSOperation

{
    _Bool _showAsFileIcon;
    _Bool _isMovie;
    UIImage *_image;
    double _scale;
    ICAppearanceInfo *_appearanceInfo;
    ICThumbnailDataCache *_cache;
    NSString *_cacheKey;
    CDUnknownBlockType _fallbackBlock;
    CDUnknownBlockType _processingBlock;
    NSMutableArray *_completionBlocks;
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
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic) NSURL *mediaURL;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) _Bool showAsFileIcon;
@property (nonatomic) _Bool isMovie;
@property (retain, nonatomic) UIImage *image;

- (void)main;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 appearanceInfo:(id)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(CDUnknownBlockType)arg6 completionBlocks:(id)arg7 fallbackBlock:(CDUnknownBlockType)arg8;
- (_Bool)isMatchingOperationForCacheKey:(id)arg1 cache:(id)arg2;

@end
