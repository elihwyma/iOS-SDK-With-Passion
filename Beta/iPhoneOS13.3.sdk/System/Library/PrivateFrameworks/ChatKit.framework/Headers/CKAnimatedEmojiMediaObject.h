/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAnimatedImageMediaObject.h>

@interface CKAnimatedEmojiMediaObject : CKAnimatedImageMediaObject

+ (_Bool)shouldScaleUpPreview;
+ (id)UTITypes;
+ (_Bool)shouldShadePreview;
+ (id)attachmentSummary:(unsigned long long)arg1;

- (id)icon;
- (id)previewItemTitle;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)pasteboardItem;
- (Class)previewBalloonViewClass;
- (id)backgroundColorOverride;

@end
