/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation;

@protocol _INPBSearchForNotebookItemsIntent <Swift>

@property (copy, nonatomic) NSString *content;
@property (nonatomic, readonly) _Bool hasContent;
@property (nonatomic) int dateSearchType;
@property (nonatomic) _Bool hasDateSearchType;
@property (retain, nonatomic) _INPBDateTimeRange *dateTime;
@property (nonatomic, readonly) _Bool hasDateTime;
@property (retain, nonatomic) _INPBDataString *groupName;
@property (nonatomic, readonly) _Bool hasGroupName;
@property (nonatomic) _Bool includeAllNoteContents;
@property (nonatomic) _Bool hasIncludeAllNoteContents;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int itemType;
@property (nonatomic) _Bool hasItemType;
@property (retain, nonatomic) _INPBLocation *location;
@property (nonatomic, readonly) _Bool hasLocation;
@property (nonatomic) int locationSearchType;
@property (nonatomic) _Bool hasLocationSearchType;
@property (copy, nonatomic) NSString *notebookItemIdentifier;
@property (nonatomic, readonly) _Bool hasNotebookItemIdentifier;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int taskPriority;
@property (nonatomic) _Bool hasTaskPriority;
@property (nonatomic, readonly) int *temporalEventTriggerTypes;
@property (nonatomic, readonly) unsigned long long temporalEventTriggerTypesCount;
@property (retain, nonatomic) _INPBDataString *title;
@property (nonatomic, readonly) _Bool hasTitle;

- (unsigned short)statusAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)dateSearchTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsDateSearchType: /* Error: Ran out of types for this method. */;
- (unsigned short)itemTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsItemType: /* Error: Ran out of types for this method. */;
- (unsigned short)locationSearchTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsLocationSearchType: /* Error: Ran out of types for this method. */;
- (unsigned short)taskPriorityAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsTaskPriority: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTemporalEventTriggerTypes;
- (unsigned short)addTemporalEventTriggerType: /* Error: Ran out of types for this method. */;
- (unsigned short)temporalEventTriggerTypeAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setTemporalEventTriggerTypes:count: /* Error: Ran out of types for this method. */;
- (unsigned short)temporalEventTriggerTypesAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsTemporalEventTriggerTypes: /* Error: Ran out of types for this method. */;

@end
