/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata, _INPBNoteContent;

@protocol _INPBCreateNoteIntent <Swift>

@property (retain, nonatomic) _INPBNoteContent *content;
@property (nonatomic, readonly) _Bool hasContent;
@property (retain, nonatomic) _INPBDataString *groupName;
@property (nonatomic, readonly) _Bool hasGroupName;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *title;
@property (nonatomic, readonly) _Bool hasTitle;

@end
