/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INNoteContent, INSpeakableString;

@protocol INCreateNoteIntentExport <Swift>

@property (copy, nonatomic) INSpeakableString *title;
@property (copy, nonatomic) INNoteContent *content;
@property (copy, nonatomic) INSpeakableString *groupName;

- (unsigned short)init;

@end
