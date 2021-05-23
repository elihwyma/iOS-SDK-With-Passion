/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface KCellularProtocolStackPerStateHist : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _duration;
    NSMutableArray *_hists;
    unsigned int _subsId;
    unsigned int _version;
    CDStruct_0c2ce59f _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) NSMutableArray *hists;

+ (Class)histType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addHist:(id)arg1;
- (unsigned long long)histsCount;
- (void)clearHists;
- (id)histAtIndex:(unsigned long long)arg1;

@end
