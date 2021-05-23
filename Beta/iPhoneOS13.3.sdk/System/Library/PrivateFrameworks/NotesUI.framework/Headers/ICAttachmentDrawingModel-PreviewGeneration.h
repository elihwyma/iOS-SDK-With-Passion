/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICAttachmentDrawingModel.h>

@class UIImage;

@interface ICAttachmentDrawingModel (PreviewGeneration)

@property (nonatomic, readonly) UIImage *imageForActivityItem;

- (id)activityItems;
- (id)providerDataTypes;
- (id)providerFileTypes;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (_Bool)canConvertToHTMLForSharing;
- (id)activityItem;
- (void)drawPreviewInRect:(struct CGRect)arg1;
- (struct UIImage *)generateImageUsingFullscreenRenderer;
- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;
- (_Bool)needToGeneratePreviews;
- (_Bool)generatePreviewsInOperation:(id)arg1;
- (_Bool)generatePreviewsDuringCloudActivity;
- (void)saveDrawing:(id)arg1 withImage:(struct UIImage *)arg2 forImageDrawing:(id)arg3;

@end
