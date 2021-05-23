/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKImageMediaObject.h>

@interface CKAnimatedImageMediaObject : CKImageMediaObject

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;

- (id)notificationCenter;
- (id)generateAndPersistAnimatedPreviewFromImageData:(id)arg1 forWidth:(double)arg2 withTransferGUID:(id)arg3 isSticker:(_Bool)arg4;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (_Bool)needsAnimation;
- (_Bool)validatePreviewFormat;
- (id)bbPreviewFillToSize:(struct CGSize)arg1;
- (id)generateThumbnailsForWidth:(double)arg1 isSticker:(_Bool)arg2 orientation:(BOOL)arg3;
- (id)savedAnimatedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (CDUnknownBlockType)imageEdgeEnhancementBlockIfNecessary;
- (id)thumbnailAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 imageData:(id)arg3 isSticker:(_Bool)arg4 orientation:(BOOL)arg5;
- (id)scaledThumbnailFromThumbnail:(id)arg1 forWidth:(double)arg2 isSticker:(_Bool)arg3;
- (id)animatedImageForWidth:(double)arg1;
- (void)prewarmPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)saveAnimatedPreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;

@end
