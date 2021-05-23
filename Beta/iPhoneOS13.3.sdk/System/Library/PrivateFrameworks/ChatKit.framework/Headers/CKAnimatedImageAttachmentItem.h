/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKImageAttachmentItem.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface CKAnimatedImageAttachmentItem : CKImageAttachmentItem

{
    NSURL *_animatedPreviewURL;
    struct CGSize _imageSize;
}

@property (retain, nonatomic) NSURL *animatedPreviewURL;
@property struct CGSize imageSize;

+ (_Bool)shouldScaleUpPreview;
+ (id)UTITypes;

- (struct CGSize)size;
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;
- (id)_savedPreviewFromURL:(id)arg1;
- (id)_newImageData;
- (id)thumbnailAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 withImageData:(id)arg3;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2;

@end
