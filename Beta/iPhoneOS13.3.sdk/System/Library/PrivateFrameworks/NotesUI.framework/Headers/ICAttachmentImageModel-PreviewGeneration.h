/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICAttachmentImageModel.h>

@interface ICAttachmentImageModel (PreviewGeneration)

- (id)activityItems;
- (void)drawPreviewInRect:(struct CGRect)arg1;
- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;
- (_Bool)needToGeneratePreviews;
- (id)generateFullSizePreviewWithAttachmentIdentifier:(id)arg1 existingPreviewImage:(id)arg2 markupModelData:(id)arg3 imageOrientation:(long long)arg4 imageFilterType:(short)arg5 mediaDecryptedData:(id)arg6 mediaURL:(id)arg7 mediaSize:(struct CGSize)arg8 croppingQuad:(id)arg9;
- (_Bool)generatePreviewsInOperation:(id)arg1;
- (id)ocrStringFromImage:(struct UIImage *)arg1 title:(id *)arg2;
- (id)classificationsForImage:(struct UIImage *)arg1;
- (id)labelsForClassificationObservations:(id)arg1;
- (_Bool)generatePreviewsDuringCloudActivity;
- (_Bool)needToPostProcessAttachment;
- (void)generateOCRInOperation:(id)arg1;
- (void)classifyImageInOperation:(id)arg1;

@end
