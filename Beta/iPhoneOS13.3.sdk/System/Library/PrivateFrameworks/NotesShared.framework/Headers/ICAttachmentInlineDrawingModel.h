/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentInlineDrawingModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (_Bool)shouldShowInContentInfoText;
- (_Bool)hasPreviews;
- (_Bool)previewsSupportMultipleAppearances;
- (_Bool)preferLocalPreviewImages;
- (_Bool)shouldSyncPreviewImageToCloud:(id)arg1;
- (_Bool)showThumbnailInNoteList;
- (_Bool)providesStandaloneTitleForNote;
- (id)standaloneTitleForNote;
- (id)additionalIndexableTextContentInNote;
- (id)searchableTextContentInNote;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (_Bool)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtention:(id)arg1;

@end
