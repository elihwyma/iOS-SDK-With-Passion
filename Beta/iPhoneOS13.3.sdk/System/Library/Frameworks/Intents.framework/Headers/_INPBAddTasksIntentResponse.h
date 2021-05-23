/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBTaskList;

@interface _INPBAddTasksIntentResponse : PBCodable <Swift>

{
    CDStruct_95bda58d _warnings;
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_addedTasks;
    _INPBTaskList *_modifiedTaskList;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *addedTasks;
@property (nonatomic, readonly) unsigned long long addedTasksCount;
@property (retain, nonatomic) _INPBTaskList *modifiedTaskList;
@property (nonatomic, readonly) _Bool hasModifiedTaskList;
@property (nonatomic, readonly) int *warnings;
@property (nonatomic, readonly) unsigned long long warningsCount;

+ (_Bool)supportsSecureCoding;
+ (Class)addedTasksType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearWarnings;
- (void)addWarnings:(int)arg1;
- (int)warningsAtIndex:(unsigned long long)arg1;
- (void)setWarnings:(int *)arg1 count:(unsigned long long)arg2;
- (id)warningsAsString:(int)arg1;
- (int)StringAsWarnings:(id)arg1;
- (void)clearAddedTasks;
- (void)addAddedTasks:(id)arg1;
- (id)addedTasksAtIndex:(unsigned long long)arg1;

@end
