/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICTextAttachment.h>

@interface ICDrawingTextAttachment : ICTextAttachment

- (CDStruct_d2b197d1)attachmentBoundsMargins;
- (id)attachmentFileWrapper;
- (_Bool)requiresSpaceAfterAttachmentForPrinting;
- (_Bool)supportsThumbnailView;
- (_Bool)supportsMultipleThumbnailsOnSameLine;
- (double)viewCornerRadius;
- (id)printableTextAttachment;

@end
