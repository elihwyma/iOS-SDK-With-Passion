/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBDateTime;

@interface _INPBTaskList : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBDateTime *_createdDateTime;
    _INPBDataString *_groupName;
    NSString *_identifier;
    _INPBDateTime *_modifiedDateTime;
    NSArray *_tasks;
    _INPBDataString *_title;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBDateTime *createdDateTime;
@property (nonatomic, readonly) _Bool hasCreatedDateTime;
@property (retain, nonatomic) _INPBDataString *groupName;
@property (nonatomic, readonly) _Bool hasGroupName;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property (nonatomic, readonly) _Bool hasModifiedDateTime;
@property (copy, nonatomic) NSArray *tasks;
@property (nonatomic, readonly) unsigned long long tasksCount;
@property (retain, nonatomic) _INPBDataString *title;
@property (nonatomic, readonly) _Bool hasTitle;

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
