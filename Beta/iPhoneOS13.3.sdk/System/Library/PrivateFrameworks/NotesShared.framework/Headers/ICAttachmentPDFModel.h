/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentPDFModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
+ (id)contentTextFromPDFAtURL:(id)arg1;

- (_Bool)hasPreviews;
- (id)searchableTextContent;
- (_Bool)canMarkup;

@end
