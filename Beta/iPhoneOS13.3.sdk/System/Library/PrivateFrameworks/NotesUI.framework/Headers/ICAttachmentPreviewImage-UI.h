/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICAttachmentPreviewImage.h>

@class UIImage;

@interface ICAttachmentPreviewImage (UI)

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) UIImage *orientedImage;

+ (id)imageCache;
+ (struct UIImage *)orientedImage:(struct UIImage *)arg1 withTransform:(struct CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform)arg4;

- (struct UIImage *)cachedImage;
- (void)setCachedImage:(struct UIImage *)arg1;
- (long long)previewImageOrientation;
- (void)clearCachedOrientedImage;
- (void)clearCachedImage;
- (_Bool)hasCachedImage;
- (void)writeOrientedPreviewToDisk;
- (struct CGAffineTransform)orientedImageTransform;
- (id)orientedImageID;
- (void)setCachedOrientedImage:(struct UIImage *)arg1;
- (struct UIImage *)cachedOrientedImage;
- (id)newImageLoaderForUpdatingImageOnCompletion:(_Bool)arg1 asyncDataLoading:(_Bool)arg2;
- (CDUnknownBlockType)asyncImage:(CDUnknownBlockType)arg1 aboutToLoadHandler:(CDUnknownBlockType)arg2;
- (struct UIImage *)orientedImageWithBackground:(int)arg1;
- (struct UIImage *)imageWithBackground:(int)arg1;
- (id)newImageLoaderForUpdatingImageOnCompletion:(_Bool)arg1;

@end
