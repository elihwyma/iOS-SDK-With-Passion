/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICImageTextAttachment.h>

@interface ICUnsupportedTextAttachmentWithFallbackImage : ICImageTextAttachment

- (_Bool)supportsThumbnailView;
- (_Bool)supportsMultipleThumbnailsOnSameLine;
- (id)attachmentAsNSTextAttachment;

@end
