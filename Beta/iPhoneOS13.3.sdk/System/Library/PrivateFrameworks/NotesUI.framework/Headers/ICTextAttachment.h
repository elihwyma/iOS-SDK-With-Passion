/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICBaseTextAttachment.h>

@class NSString;

@interface ICTextAttachment : ICBaseTextAttachment

@property (nonatomic, readonly) NSString *viewIdentifier;
@property (nonatomic, readonly) _Bool containsFindableText;

+ (id)textAttachmentWithAttachment:(id)arg1;
+ (_Bool)textAttachmentIsContent:(id)arg1;
+ (Class)textAttachmentClassForAttachment:(id)arg1;
+ (double)defaultAttachmentThumbnailViewHeight;

- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (Class)attachmentViewClass;
- (CDStruct_d2b197d1)attachmentBoundsMargins;
- (id)attachmentFileWrapper;
- (_Bool)requiresSpaceAfterAttachmentForPrinting;
- (_Bool)supportsThumbnailView;
- (_Bool)supportsMultipleThumbnailsOnSameLine;
- (id)attachmentAsNSTextAttachment;
- (Class)attachmentViewControllerClass;
- (struct CGSize)attachmentSizeForTextContainer:(id)arg1;
- (struct CGSize)attachmentSizeForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2;
- (struct CGRect)attachmentBoundsIncludingMarginsFromAttachmentBounds:(struct CGRect)arg1;
- (struct UIView *)newlyCreatedView;
- (struct UIView *)newlyCreatedViewForManualRendering;
- (struct UIViewController *)newlyCreatedViewControllerForManualRendering:(_Bool)arg1 layoutManager:(id)arg2;
- (double)availableWidthForTextContainer:(id)arg1;

@end
