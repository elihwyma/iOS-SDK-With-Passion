/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface PStat : PBCodable

{
    unsigned int _activeDurMs;
    unsigned int _ident;
    unsigned int _inactiveDurMs;
    unsigned int _sleepBlockCount;
    unsigned int _toActiveCount;
    struct {
        unsigned int activeDurMs:1;
        unsigned int ident:1;
        unsigned int inactiveDurMs:1;
        unsigned int sleepBlockCount:1;
        unsigned int toActiveCount:1;
    } _has;
}

@property (nonatomic) _Bool hasIdent;
@property (nonatomic) unsigned int ident;
@property (nonatomic) _Bool hasActiveDurMs;
@property (nonatomic) unsigned int activeDurMs;
@property (nonatomic) _Bool hasInactiveDurMs;
@property (nonatomic) unsigned int inactiveDurMs;
@property (nonatomic) _Bool hasToActiveCount;
@property (nonatomic) unsigned int toActiveCount;
@property (nonatomic) _Bool hasSleepBlockCount;
@property (nonatomic) unsigned int sleepBlockCount;

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
