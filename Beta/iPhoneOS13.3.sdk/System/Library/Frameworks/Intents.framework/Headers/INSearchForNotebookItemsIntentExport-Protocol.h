/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class CLPlacemark, INDateComponentsRange, INSpeakableString, NSString;

@protocol INSearchForNotebookItemsIntentExport <Swift>

@property (copy, nonatomic) INSpeakableString *title;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long itemType;
@property (nonatomic) long long status;
@property (copy, nonatomic) CLPlacemark *location;
@property (nonatomic) long long locationSearchType;
@property (copy, nonatomic) INDateComponentsRange *dateTime;
@property (nonatomic) long long dateSearchType;
@property (nonatomic) unsigned long long temporalEventTriggerTypes;
@property (nonatomic) long long taskPriority;
@property (copy, nonatomic) INSpeakableString *groupName;
@property (nonatomic) _Bool includeAllNoteContents;
@property (copy, nonatomic) NSString *notebookItemIdentifier;

- (unsigned short)init;

@end
