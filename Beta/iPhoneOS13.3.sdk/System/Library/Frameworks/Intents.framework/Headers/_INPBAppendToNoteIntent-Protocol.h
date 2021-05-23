/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBIntentMetadata, _INPBNote, _INPBNoteContent;

@protocol _INPBAppendToNoteIntent <Swift>

@property (retain, nonatomic) _INPBNoteContent *content;
@property (nonatomic, readonly) _Bool hasContent;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBNote *targetNote;
@property (nonatomic, readonly) _Bool hasTargetNote;

@end
