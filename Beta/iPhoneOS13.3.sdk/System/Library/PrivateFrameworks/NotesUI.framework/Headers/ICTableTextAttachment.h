/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICTextAttachment.h>

@interface ICTableTextAttachment : ICTextAttachment

{
    double _lastAvailableWidth;
    struct CGSize _lastAttachmentSize;
}

@property (nonatomic) double lastAvailableWidth;
@property (nonatomic) struct CGSize lastAttachmentSize;

- (CDStruct_d2b197d1)attachmentBoundsMargins;
- (_Bool)canDragWithoutSelecting;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange)arg2 forPlainText:(_Bool)arg3 forStandardizedText:(_Bool)arg4;
- (id)printableTextContentForAppearanceType:(unsigned long long)arg1;

@end
