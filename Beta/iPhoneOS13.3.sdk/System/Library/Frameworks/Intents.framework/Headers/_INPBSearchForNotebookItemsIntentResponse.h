/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBSearchForNotebookItemsIntentResponse : PBCodable <Swift>

{
    struct {
        unsigned int sortType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _sortType;
    NSArray *_notes;
    NSArray *_taskLists;
    NSArray *_tasks;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *notes;
@property (nonatomic, readonly) unsigned long long notesCount;
@property (nonatomic) int sortType;
@property (nonatomic) _Bool hasSortType;
@property (copy, nonatomic) NSArray *taskLists;
@property (nonatomic, readonly) unsigned long long taskListsCount;
@property (copy, nonatomic) NSArray *tasks;
@property (nonatomic, readonly) unsigned long long tasksCount;

+ (_Bool)supportsSecureCoding;
+ (Class)tasksType;
+ (Class)notesType;
+ (Class)taskListsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearTasks;
- (void)addTasks:(id)arg1;
- (id)tasksAtIndex:(unsigned long long)arg1;
- (void)clearNotes;
- (void)addNotes:(id)arg1;
- (id)notesAtIndex:(unsigned long long)arg1;
- (id)sortTypeAsString:(int)arg1;
- (int)StringAsSortType:(id)arg1;
- (void)clearTaskLists;
- (void)addTaskLists:(id)arg1;
- (id)taskListsAtIndex:(unsigned long long)arg1;

@end
