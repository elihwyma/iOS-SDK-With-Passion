/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICAttachmentWebModel.h>

@interface ICAttachmentWebModel (PreviewGeneration)

+ (struct UIImage *)genericBrickThumbnailWithSize:(struct CGSize)arg1 scale:(double)arg2;

- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericBrickLargeThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;
- (_Bool)needToGeneratePreviews;
- (_Bool)generatePreviewsInOperation:(id)arg1;
- (_Bool)generateAsynchronousPreviews;
- (void)updateTitle:(id)arg1 andDescription:(id)arg2;
- (void)saveLPImage:(id)arg1;

@end
