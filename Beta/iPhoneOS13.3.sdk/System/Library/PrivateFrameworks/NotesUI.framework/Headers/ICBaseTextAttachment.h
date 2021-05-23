/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/NSTextAttachment.h>

@class ICAttachment, NSString;

@interface ICBaseTextAttachment : NSTextAttachment

{
    ICAttachment *_attachment;
}

@property (retain, nonatomic) ICAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)usesTextAttachmentView;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (_Bool)allowsTextAttachmentView;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (id)initWithAttachment:(id)arg1;
- (_Bool)isEqualToModelComparable:(id)arg1;
- (id)attachmentIdentifier;
- (id)attachmentUTI;
- (id)attachmentInContext:(id)arg1;
- (double)viewCornerRadius;
- (id)attachmentAttributesForAttributedString;
- (_Bool)canDragWithoutSelecting;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange)arg2 forPlainText:(_Bool)arg3 forStandardizedText:(_Bool)arg4;
- (id)printableTextContentForAppearanceType:(unsigned long long)arg1;

@end
