/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMediaObject.h>

@class PKPass, UIImage;

@interface CKPassbookMediaObject : CKMediaObject

{
    PKPass *_pass;
    UIImage *_icon;
}

@property (retain, nonatomic) PKPass *pass;
@property (retain, nonatomic) UIImage *icon;

+ (id)UTITypes;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (_Bool)isPreviewable;

- (id)title;
- (id)subtitle;
- (int)mediaType;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (_Bool)shouldBeQuickLooked;
- (Class)balloonViewClassForWidth:(double)arg1 orientation:(BOOL)arg2;
- (_Bool)shouldShowViewer;
- (id)initWithTransfer:(id)arg1 isFromMe:(_Bool)arg2 suppressPreview:(_Bool)arg3 forceInlinePreview:(_Bool)arg4;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (_Bool)shouldShowDisclosure;
- (_Bool)_supportsPassbook;
- (id)passView;

@end
