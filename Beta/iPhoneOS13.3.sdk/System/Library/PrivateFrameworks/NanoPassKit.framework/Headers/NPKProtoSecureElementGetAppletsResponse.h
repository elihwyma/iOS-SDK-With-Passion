/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NPKProtoSecureElementGetAppletsResponse : PBCodable

{
    CDStruct_9f2792e4 _activationStates;
    CDStruct_9f2792e4 _lifecycleStates;
    NSMutableArray *_appletsBytes;
    NSMutableArray *_cardAIDs;
    _Bool _pending;
    CDStruct_eab6c78c _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (retain, nonatomic) NSMutableArray *cardAIDs;
@property (nonatomic, readonly) unsigned long long lifecycleStatesCount;
@property (nonatomic, readonly) unsigned int *lifecycleStates;
@property (nonatomic, readonly) unsigned long long activationStatesCount;
@property (nonatomic, readonly) unsigned int *activationStates;
@property (retain, nonatomic) NSMutableArray *appletsBytes;

+ (Class)cardAIDsType;
+ (Class)appletsBytesType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCardAIDs:(id)arg1;
- (unsigned long long)cardAIDsCount;
- (void)clearCardAIDs;
- (id)cardAIDsAtIndex:(unsigned long long)arg1;
- (void)addAppletsBytes:(id)arg1;
- (void)clearLifecycleStates;
- (unsigned int)lifecycleStatesAtIndex:(unsigned long long)arg1;
- (void)addLifecycleStates:(unsigned int)arg1;
- (void)clearActivationStates;
- (unsigned int)activationStatesAtIndex:(unsigned long long)arg1;
- (void)addActivationStates:(unsigned int)arg1;
- (unsigned long long)appletsBytesCount;
- (void)clearAppletsBytes;
- (id)appletsBytesAtIndex:(unsigned long long)arg1;
- (void)setLifecycleStates:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setActivationStates:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
