/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICAttachmentModel.h>

@class NSDate, NSString;

@interface ICAttachmentAudioModel : ICAttachmentModel

{
    _Bool _recordedInNotes;
    NSString *_title;
    NSDate *_creationDate;
}

@property (nonatomic) _Bool recordedInNotes;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *creationDate;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (id)initWithAttachment:(id)arg1;
- (void)updateFileBasedAttributes;

@end
