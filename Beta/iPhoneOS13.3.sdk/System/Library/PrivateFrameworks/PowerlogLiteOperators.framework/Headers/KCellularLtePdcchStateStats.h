/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularLtePdcchStateStats : PBCodable

{
    CDStruct_9f2792e4 _pccPdcchStates;
    CDStruct_9f2792e4 _scc0PdcchStates;
    CDStruct_9f2792e4 _scc1PdcchStates;
    CDStruct_9f2792e4 _scc2PdcchStates;
    CDStruct_9f2792e4 _scc3PdcchStates;
    unsigned long long _timestamp;
    unsigned int _durationMs;
    unsigned int _subsId;
    CDStruct_e1e72391 _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) unsigned long long pccPdcchStatesCount;
@property (nonatomic, readonly) unsigned int *pccPdcchStates;
@property (nonatomic, readonly) unsigned long long scc0PdcchStatesCount;
@property (nonatomic, readonly) unsigned int *scc0PdcchStates;
@property (nonatomic, readonly) unsigned long long scc1PdcchStatesCount;
@property (nonatomic, readonly) unsigned int *scc1PdcchStates;
@property (nonatomic) _Bool hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic, readonly) unsigned long long scc2PdcchStatesCount;
@property (nonatomic, readonly) unsigned int *scc2PdcchStates;
@property (nonatomic, readonly) unsigned long long scc3PdcchStatesCount;
@property (nonatomic, readonly) unsigned int *scc3PdcchStates;
@property (nonatomic) _Bool hasSubsId;
@property (nonatomic) unsigned int subsId;

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
- (void)clearPccPdcchStates;
- (unsigned int)pccPdcchStateAtIndex:(unsigned long long)arg1;
- (void)addPccPdcchState:(unsigned int)arg1;
- (void)clearScc0PdcchStates;
- (unsigned int)scc0PdcchStateAtIndex:(unsigned long long)arg1;
- (void)addScc0PdcchState:(unsigned int)arg1;
- (void)clearScc1PdcchStates;
- (unsigned int)scc1PdcchStateAtIndex:(unsigned long long)arg1;
- (void)addScc1PdcchState:(unsigned int)arg1;
- (void)clearScc2PdcchStates;
- (unsigned int)scc2PdcchStateAtIndex:(unsigned long long)arg1;
- (void)addScc2PdcchState:(unsigned int)arg1;
- (void)clearScc3PdcchStates;
- (unsigned int)scc3PdcchStateAtIndex:(unsigned long long)arg1;
- (void)addScc3PdcchState:(unsigned int)arg1;
- (void)setPccPdcchStates:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setScc0PdcchStates:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setScc1PdcchStates:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setScc2PdcchStates:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setScc3PdcchStates:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
