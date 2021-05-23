/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAVMediaObject.h>

@class AVURLAsset, UIImage;

@interface CKMovieMediaObject : CKAVMediaObject

{
    _Bool _hasVideoTrack;
    _Bool _checkedVideoInfo;
    _Bool _isAutoloopVideo;
    _Bool _isAppleAutoloopVideo;
    _Bool _isJellyfishVideo;
    _Bool _isAutoloopVideoInitialized;
    _Bool _isAppleAutoloopVideoInitialized;
    _Bool _isJellyfishInitialized;
    UIImage *_thumbnail;
    AVURLAsset *_asset;
    struct CGSize _pxSize;
}

@property (nonatomic) _Bool hasVideoTrack;
@property (nonatomic) struct CGSize pxSize;
@property (nonatomic) _Bool checkedVideoInfo;
@property (retain, nonatomic) AVURLAsset *asset;
@property (nonatomic) _Bool isAutoloopVideo;
@property (nonatomic) _Bool isAppleAutoloopVideo;
@property (nonatomic) _Bool isJellyfishVideo;
@property (nonatomic) _Bool isAutoloopVideoInitialized;
@property (nonatomic) _Bool isAppleAutoloopVideoInitialized;
@property (nonatomic) _Bool isJellyfishInitialized;
@property (retain, nonatomic) UIImage *thumbnail;

+ (struct CGImage *)playButtonPreviewForCGImage:(struct CGImage *)arg1 scale:(double)arg2 isFromMe:(_Bool)arg3;
+ (id)UTITypes;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (_Bool)isPreviewable;
+ (id)playButtonPreviewForUIImage:(id)arg1 scale:(double)arg2 contentAlignmentInsets:(struct UIEdgeInsets)arg3;
+ (Class)__ck_attachmentItemClass;

- (int)mediaType;
- (id)previewItemTitle;
- (void)export:(id)arg1;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (_Bool)canExport;
- (Class)balloonViewClassForWidth:(double)arg1 orientation:(BOOL)arg2;
- (_Bool)validatePreviewFormat;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)bbPreviewFillToSize:(struct CGSize)arg1;
- (struct CGSize)bbSize;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (Class)previewBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (_Bool)_assetContainsMetadataKey:(id)arg1;
- (_Bool)hasNoVideoTrack;
- (void)updateVideoInfo;

@end
