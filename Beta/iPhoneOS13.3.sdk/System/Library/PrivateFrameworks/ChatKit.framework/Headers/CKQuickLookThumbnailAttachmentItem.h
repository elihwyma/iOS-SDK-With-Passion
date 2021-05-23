/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAttachmentItem.h>

__attribute__((visibility("hidden")))
@interface CKQuickLookThumbnailAttachmentItem : CKAttachmentItem

+ (struct CGSize)defaultSize;
+ (id)UTITypes;

- (struct CGSize)size;
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;

@end
