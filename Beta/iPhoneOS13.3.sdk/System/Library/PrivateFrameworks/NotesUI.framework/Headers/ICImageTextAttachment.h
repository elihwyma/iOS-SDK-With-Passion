/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICTextAttachment.h>

@interface ICImageTextAttachment : ICTextAttachment

- (_Bool)requiresSpaceAfterAttachmentForPrinting;
- (_Bool)supportsThumbnailView;
- (_Bool)supportsMultipleThumbnailsOnSameLine;

@end
