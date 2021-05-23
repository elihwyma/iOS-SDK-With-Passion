/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBNote;

@protocol _INPBCreateNoteIntentResponse <Swift>

@property (retain, nonatomic) _INPBNote *createdNote;
@property (nonatomic, readonly) _Bool hasCreatedNote;

@end
