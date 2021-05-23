/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBTaskList;

@interface _INPBDeleteTasksIntent : PBCodable <Swift>

{
    CDStruct_eff9c538 _has;
    _Bool _all;
    _Bool __encodeLegacyGloryData;
    _INPBIntentMetadata *_intentMetadata;
    _INPBTaskList *_taskList;
    NSArray *_tasks;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool all;
@property (nonatomic) _Bool hasAll;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBTaskList *taskList;
@property (nonatomic, readonly) _Bool hasTaskList;
@property (copy, nonatomic) NSArray *tasks;
@property (nonatomic, readonly) unsigned long long tasksCount;

+ (_Bool)supportsSecureCoding;
+ (Class)tasksType;

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

@end
