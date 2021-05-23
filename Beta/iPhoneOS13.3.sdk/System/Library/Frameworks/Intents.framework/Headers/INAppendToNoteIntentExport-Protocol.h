/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INNote, INNoteContent;

@protocol INAppendToNoteIntentExport <Swift>

@property (copy, nonatomic) INNote *targetNote;
@property (copy, nonatomic) INNoteContent *content;

- (unsigned short)init;

@end
