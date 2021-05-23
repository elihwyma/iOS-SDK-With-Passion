/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentImageModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (id)previewItemTitle;
- (_Bool)hasThumbnailImage;
- (id)saveURL;
- (_Bool)hasPreviews;
- (_Bool)showThumbnailInNoteList;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (_Bool)canConvertToHTMLForSharing;
- (long long)previewImageOrientation;
- (_Bool)canSaveURL;
- (id)previewImageTypeUTI;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (void)updateFileBasedAttributes;
- (void)addLocation;
- (_Bool)supportsOCR;
- (_Bool)supportsImageClassification;
- (_Bool)needsFullSizePreview;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1;
- (_Bool)canMarkup;
- (void)updateAttachmentSize;
- (_Bool)shouldCropImage;
- (_Bool)supportsQuickLook;
- (struct CGSize)sizeByCroppingSize:(struct CGSize)arg1;

@end
