/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentWebModel : ICAttachmentModel

{
    CDUnknownBlockType _pendingFetchCompletionHandler;
}

@property (copy) CDUnknownBlockType pendingFetchCompletionHandler;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (_Bool)hasPreviews;
- (_Bool)showThumbnailInNoteList;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (_Bool)canConvertToHTMLForSharing;

@end
