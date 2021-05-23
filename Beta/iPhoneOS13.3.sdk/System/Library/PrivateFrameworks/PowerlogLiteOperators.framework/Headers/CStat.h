/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface CStat : PBCodable

{
    unsigned int _activeDurMs;
    unsigned int _ident;
    unsigned int _idleDurMs;
    unsigned int _sleepDurMs;
    unsigned int _sleepEntryCount;
    struct {
        unsigned int activeDurMs:1;
        unsigned int ident:1;
        unsigned int idleDurMs:1;
        unsigned int sleepDurMs:1;
        unsigned int sleepEntryCount:1;
    } _has;
}

@property (nonatomic) _Bool hasIdent;
@property (nonatomic) unsigned int ident;
@property (nonatomic) _Bool hasSleepDurMs;
@property (nonatomic) unsigned int sleepDurMs;
@property (nonatomic) _Bool hasIdleDurMs;
@property (nonatomic) unsigned int idleDurMs;
@property (nonatomic) _Bool hasActiveDurMs;
@property (nonatomic) unsigned int activeDurMs;
@property (nonatomic) _Bool hasSleepEntryCount;
@property (nonatomic) unsigned int sleepEntryCount;

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
