/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation;

@interface _INPBSearchForNotebookItemsIntent : PBCodable <Swift>

{
    CDStruct_95bda58d _temporalEventTriggerTypes;
    struct {
        unsigned int dateSearchType:1;
        unsigned int includeAllNoteContents:1;
        unsigned int itemType:1;
        unsigned int locationSearchType:1;
        unsigned int status:1;
        unsigned int taskPriority:1;
    } _has;
    _Bool _includeAllNoteContents;
    _Bool __encodeLegacyGloryData;
    int _dateSearchType;
    int _itemType;
    int _locationSearchType;
    int _status;
    int _taskPriority;
    NSString *_content;
    _INPBDateTimeRange *_dateTime;
    _INPBDataString *_groupName;
    _INPBIntentMetadata *_intentMetadata;
    _INPBLocation *_location;
    NSString *_notebookItemIdentifier;
    _INPBDataString *_title;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)dateSearchTypeAsString:(int)arg1;
- (int)StringAsDateSearchType:(id)arg1;
- (id)itemTypeAsString:(int)arg1;
- (int)StringAsItemType:(id)arg1;
- (id)locationSearchTypeAsString:(int)arg1;
- (int)StringAsLocationSearchType:(id)arg1;
- (id)taskPriorityAsString:(int)arg1;
- (int)StringAsTaskPriority:(id)arg1;
- (void)clearTemporalEventTriggerTypes;
- (void)addTemporalEventTriggerType:(int)arg1;
- (int)temporalEventTriggerTypeAtIndex:(unsigned long long)arg1;
- (void)setTemporalEventTriggerTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)temporalEventTriggerTypesAsString:(int)arg1;
- (int)StringAsTemporalEventTriggerTypes:(id)arg1;

@end
