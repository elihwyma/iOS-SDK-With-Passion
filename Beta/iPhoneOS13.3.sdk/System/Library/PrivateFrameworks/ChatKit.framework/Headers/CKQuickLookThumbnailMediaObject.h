/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMediaObject.h>

@interface CKQuickLookThumbnailMediaObject : CKMediaObject

+ (id)UTITypes;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (_Bool)isPreviewable;
+ (Class)__ck_attachmentItemClass;

- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)diskCachedThumbnailForOrientation:(BOOL)arg1;

@end
