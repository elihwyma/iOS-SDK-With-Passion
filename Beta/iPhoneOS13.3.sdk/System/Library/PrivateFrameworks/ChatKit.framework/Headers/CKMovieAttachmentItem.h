/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAttachmentItem.h>

@interface CKMovieAttachmentItem : CKAttachmentItem

+ (id)UTITypes;

- (struct CGSize)size;
- (struct CGSize)_defaultSize;
- (id)previewItemTitle;
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isIrisAsset;
- (_Bool)isJellyfishVideo;
- (id)_generateThumbnailFillToSize:(struct CGSize)arg1;

@end
