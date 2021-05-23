/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICAttachmentMapModel.h>

@interface ICAttachmentMapModel (PreviewGeneration)

- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;
- (_Bool)needToGeneratePreviews;
- (_Bool)generatePreviewsInOperation:(id)arg1;
- (id)missingPreviewsForCurrentDevice;
- (_Bool)requiresNetworkToGeneratePreview;
- (_Bool)generateAsynchronousPreviews;

@end
