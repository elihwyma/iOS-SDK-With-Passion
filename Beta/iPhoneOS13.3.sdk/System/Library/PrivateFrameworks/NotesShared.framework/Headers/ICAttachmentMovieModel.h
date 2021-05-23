/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentMovieModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (_Bool)hasThumbnailImage;
- (_Bool)hasPreviews;
- (_Bool)showThumbnailInNoteList;
- (void)updateFileBasedAttributes;
- (void)addLocation;
- (void)updateAttachmentSize;

@end
