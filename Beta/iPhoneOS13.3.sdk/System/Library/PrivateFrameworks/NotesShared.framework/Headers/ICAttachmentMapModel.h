/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentMapModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (_Bool)hasPreviews;
- (_Bool)previewsSupportMultipleAppearances;
- (_Bool)preferLocalPreviewImages;
- (_Bool)shouldSyncPreviewImageToCloud:(id)arg1;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (_Bool)canConvertToHTMLForSharing;
- (id)MKMapItem;
- (void)addLocation;

@end
