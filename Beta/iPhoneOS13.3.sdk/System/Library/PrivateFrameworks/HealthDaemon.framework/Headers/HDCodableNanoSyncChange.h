/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableEntityIdentifier, NSMutableArray, NSNumber, NSString;

@interface HDCodableNanoSyncChange : PBCodable <Swift>

{
    long long _endAnchor;
    long long _sequence;
    long long _startAnchor;
    HDCodableEntityIdentifier *_entityIdentifier;
    NSMutableArray *_objectDatas;
    int _objectType;
    NSMutableArray *_requiredAnchors;
    _Bool _complete;
    _Bool _speculative;
    struct {
        unsigned int endAnchor:1;
        unsigned int sequence:1;
        unsigned int startAnchor:1;
        unsigned int objectType:1;
        unsigned int complete:1;
        unsigned int speculative:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isSpeculative) _Bool speculative;
@property (nonatomic, readonly) struct HDSyncAnchorRange syncAnchorRange;
@property (nonatomic, readonly) NSNumber *sequenceNumber;
@property (nonatomic, readonly) _Bool done;
@property (nonatomic) _Bool hasObjectType;
@property (nonatomic) int objectType;
@property (nonatomic) _Bool hasStartAnchor;
@property (nonatomic) long long startAnchor;
@property (nonatomic) _Bool hasEndAnchor;
@property (nonatomic) long long endAnchor;
@property (retain, nonatomic) NSMutableArray *objectDatas;
@property (retain, nonatomic) NSMutableArray *requiredAnchors;
@property (nonatomic) _Bool hasSpeculative;
@property (nonatomic) _Bool speculative;
@property (nonatomic) _Bool hasSequence;
@property (nonatomic) long long sequence;
@property (nonatomic) _Bool hasComplete;
@property (nonatomic) _Bool complete;
@property (nonatomic, readonly) _Bool hasEntityIdentifier;
@property (retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier;

+ (id)changeWithNanoSyncEntityClass:(Class)arg1;
+ (Class)objectDataType;
+ (Class)requiredAnchorsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)objectTypeAsString:(int)arg1;
- (int)StringAsObjectType:(id)arg1;
- (id)syncEntityIdentifier;
- (id)nanoSyncDescription;
- (Class)syncEntityClassForProfile:(id)arg1;
- (id)speculativeCopy;
- (void)addObjectData:(id)arg1;
- (void)addRequiredAnchors:(id)arg1;
- (unsigned long long)objectDatasCount;
- (void)clearObjectDatas;
- (id)objectDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredAnchorsCount;
- (void)clearRequiredAnchors;
- (id)requiredAnchorsAtIndex:(unsigned long long)arg1;
- (void)setObjects:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 requiredAnchorMap:(id)arg3;
- (void)setSequenceNumber:(long long)arg1 done:(_Bool)arg2;
- (id)requiredAnchorMapWithProfile:(id)arg1 error:(id *)arg2;
- (id)decodedObjectsForProfile:(id)arg1 error:(id *)arg2;

@end
