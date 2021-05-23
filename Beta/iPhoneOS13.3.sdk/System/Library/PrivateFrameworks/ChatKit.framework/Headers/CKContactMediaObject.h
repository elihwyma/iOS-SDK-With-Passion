/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKCardMediaObject.h>

@class CNContactVCardSummary, UIImage;

@interface CKContactMediaObject : CKCardMediaObject

{
    _Bool _vCardParsingFailed;
    CNContactVCardSummary *_vCardSummary;
    UIImage *_vCardImage;
}

@property (retain, nonatomic) CNContactVCardSummary *vCardSummary;
@property (nonatomic) _Bool vCardParsingFailed;
@property (retain, nonatomic) UIImage *vCardImage;

+ (id)UTITypes;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (_Bool)shouldUseTranscoderGeneratedPreviewSize;

- (id)title;
- (id)subtitle;
- (int)mediaType;
- (id)icon;
- (_Bool)generatePreviewOutOfProcess;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)bbSize;
- (id)vCardImageOfSize:(struct CGSize)arg1;
- (Class)previewBalloonViewClass;
- (Class)coloredBalloonViewClass;

@end
