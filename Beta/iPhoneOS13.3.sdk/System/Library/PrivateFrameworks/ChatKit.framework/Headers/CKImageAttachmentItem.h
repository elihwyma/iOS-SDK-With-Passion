/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAttachmentItem.h>

__attribute__((visibility("hidden")))
@interface CKImageAttachmentItem : CKAttachmentItem

{
    _Bool _backgroundEnqueued;
    _Bool _useDefaultSize;
    struct CGSize _imageSize;
}

@property struct CGSize imageSize;
@property (nonatomic) _Bool backgroundEnqueued;
@property (nonatomic) _Bool useDefaultSize;

+ (id)UTITypes;

- (struct CGSize)size;
- (id)imageData;
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;
- (void)startDeferredSetup;
- (id)_newImageData;
- (struct CGSize)_calculateImageSize;

@end
