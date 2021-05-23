/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularRrcModeHist : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _connDurBin0;
    unsigned int _connDurBin1;
    unsigned int _connDurBin10;
    unsigned int _connDurBin11;
    unsigned int _connDurBin12;
    unsigned int _connDurBin2;
    unsigned int _connDurBin3;
    unsigned int _connDurBin4;
    unsigned int _connDurBin5;
    unsigned int _connDurBin6;
    unsigned int _connDurBin7;
    unsigned int _connDurBin8;
    unsigned int _connDurBin9;
    unsigned int _durationMs;
    unsigned int _idleDurBin0;
    unsigned int _idleDurBin1;
    unsigned int _idleDurBin10;
    unsigned int _idleDurBin11;
    unsigned int _idleDurBin12;
    unsigned int _idleDurBin2;
    unsigned int _idleDurBin3;
    unsigned int _idleDurBin4;
    unsigned int _idleDurBin5;
    unsigned int _idleDurBin6;
    unsigned int _idleDurBin7;
    unsigned int _idleDurBin8;
    unsigned int _idleDurBin9;
    unsigned int _subsId;
    struct {
        unsigned int timestamp:1;
        unsigned int connDurBin0:1;
        unsigned int connDurBin1:1;
        unsigned int connDurBin10:1;
        unsigned int connDurBin11:1;
        unsigned int connDurBin12:1;
        unsigned int connDurBin2:1;
        unsigned int connDurBin3:1;
        unsigned int connDurBin4:1;
        unsigned int connDurBin5:1;
        unsigned int connDurBin6:1;
        unsigned int connDurBin7:1;
        unsigned int connDurBin8:1;
        unsigned int connDurBin9:1;
        unsigned int durationMs:1;
        unsigned int idleDurBin0:1;
        unsigned int idleDurBin1:1;
        unsigned int idleDurBin10:1;
        unsigned int idleDurBin11:1;
        unsigned int idleDurBin12:1;
        unsigned int idleDurBin2:1;
        unsigned int idleDurBin3:1;
        unsigned int idleDurBin4:1;
        unsigned int idleDurBin5:1;
        unsigned int idleDurBin6:1;
        unsigned int idleDurBin7:1;
        unsigned int idleDurBin8:1;
        unsigned int idleDurBin9:1;
        unsigned int subsId:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) _Bool hasIdleDurBin0;
@property (nonatomic) unsigned int idleDurBin0;
@property (nonatomic) _Bool hasIdleDurBin1;
@property (nonatomic) unsigned int idleDurBin1;
@property (nonatomic) _Bool hasIdleDurBin2;
@property (nonatomic) unsigned int idleDurBin2;
@property (nonatomic) _Bool hasIdleDurBin3;
@property (nonatomic) unsigned int idleDurBin3;
@property (nonatomic) _Bool hasIdleDurBin4;
@property (nonatomic) unsigned int idleDurBin4;
@property (nonatomic) _Bool hasIdleDurBin5;
@property (nonatomic) unsigned int idleDurBin5;
@property (nonatomic) _Bool hasIdleDurBin6;
@property (nonatomic) unsigned int idleDurBin6;
@property (nonatomic) _Bool hasIdleDurBin7;
@property (nonatomic) unsigned int idleDurBin7;
@property (nonatomic) _Bool hasIdleDurBin8;
@property (nonatomic) unsigned int idleDurBin8;
@property (nonatomic) _Bool hasIdleDurBin9;
@property (nonatomic) unsigned int idleDurBin9;
@property (nonatomic) _Bool hasIdleDurBin10;
@property (nonatomic) unsigned int idleDurBin10;
@property (nonatomic) _Bool hasIdleDurBin11;
@property (nonatomic) unsigned int idleDurBin11;
@property (nonatomic) _Bool hasIdleDurBin12;
@property (nonatomic) unsigned int idleDurBin12;
@property (nonatomic) _Bool hasConnDurBin0;
@property (nonatomic) unsigned int connDurBin0;
@property (nonatomic) _Bool hasConnDurBin1;
@property (nonatomic) unsigned int connDurBin1;
@property (nonatomic) _Bool hasConnDurBin2;
@property (nonatomic) unsigned int connDurBin2;
@property (nonatomic) _Bool hasConnDurBin3;
@property (nonatomic) unsigned int connDurBin3;
@property (nonatomic) _Bool hasConnDurBin4;
@property (nonatomic) unsigned int connDurBin4;
@property (nonatomic) _Bool hasConnDurBin5;
@property (nonatomic) unsigned int connDurBin5;
@property (nonatomic) _Bool hasConnDurBin6;
@property (nonatomic) unsigned int connDurBin6;
@property (nonatomic) _Bool hasConnDurBin7;
@property (nonatomic) unsigned int connDurBin7;
@property (nonatomic) _Bool hasConnDurBin8;
@property (nonatomic) unsigned int connDurBin8;
@property (nonatomic) _Bool hasConnDurBin9;
@property (nonatomic) unsigned int connDurBin9;
@property (nonatomic) _Bool hasConnDurBin10;
@property (nonatomic) unsigned int connDurBin10;
@property (nonatomic) _Bool hasConnDurBin11;
@property (nonatomic) unsigned int connDurBin11;
@property (nonatomic) _Bool hasConnDurBin12;
@property (nonatomic) unsigned int connDurBin12;
@property (nonatomic) _Bool hasSubsId;
@property (nonatomic) unsigned int subsId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
