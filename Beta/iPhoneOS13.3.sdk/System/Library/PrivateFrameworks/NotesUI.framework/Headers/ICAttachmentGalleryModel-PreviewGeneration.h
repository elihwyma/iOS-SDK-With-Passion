/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICAttachmentGalleryModel.h>

@interface ICAttachmentGalleryModel (PreviewGeneration)

- (id)activityItems;
- (id)providerFileTypes;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (void)drawPreviewInRect:(struct CGRect)arg1;
- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (id)quicklookPreviewItems;
- (CDUnknownBlockType)genericListThumbnailCreator;
- (_Bool)needToGeneratePreviews;
- (_Bool)generatePreviewsInOperation:(id)arg1;

@end
