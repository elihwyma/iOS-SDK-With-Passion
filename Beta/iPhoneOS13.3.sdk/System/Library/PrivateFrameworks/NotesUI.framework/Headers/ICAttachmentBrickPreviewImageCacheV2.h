/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICThumbnailDataCache.h>

@interface ICAttachmentBrickPreviewImageCacheV2 : ICThumbnailDataCache

+ (id)cacheKeyForAttachmentObjectID:(id)arg1 brickSize:(unsigned long long)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4;

- (id)init;
- (void)dealloc;
- (void)attachmentPreviewImagesDidUpdate:(id)arg1;

@end
