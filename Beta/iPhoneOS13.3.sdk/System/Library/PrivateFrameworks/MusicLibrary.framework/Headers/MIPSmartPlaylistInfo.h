/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface MIPSmartPlaylistInfo : PBCodable

{
    unsigned int _evaluationOrder;
    int _limitKind;
    unsigned int _limitOrder;
    unsigned int _limitValue;
    NSData *_smartCriteria;
    _Bool _dynamic;
    _Bool _enabledItemsOnly;
    _Bool _filtered;
    _Bool _genius;
    _Bool _limited;
    _Bool _reverseLimitOrder;
    struct {
        unsigned int evaluationOrder:1;
        unsigned int limitKind:1;
        unsigned int limitOrder:1;
        unsigned int limitValue:1;
        unsigned int dynamic:1;
        unsigned int enabledItemsOnly:1;
        unsigned int filtered:1;
        unsigned int genius:1;
        unsigned int limited:1;
        unsigned int reverseLimitOrder:1;
    } _has;
}

@property (nonatomic) _Bool hasDynamic;
@property (nonatomic) _Bool dynamic;
@property (nonatomic) _Bool hasFiltered;
@property (nonatomic) _Bool filtered;
@property (nonatomic) _Bool hasLimited;
@property (nonatomic) _Bool limited;
@property (nonatomic) _Bool hasLimitKind;
@property (nonatomic) int limitKind;
@property (nonatomic) _Bool hasEvaluationOrder;
@property (nonatomic) unsigned int evaluationOrder;
@property (nonatomic) _Bool hasLimitOrder;
@property (nonatomic) unsigned int limitOrder;
@property (nonatomic) _Bool hasLimitValue;
@property (nonatomic) unsigned int limitValue;
@property (nonatomic) _Bool hasEnabledItemsOnly;
@property (nonatomic) _Bool enabledItemsOnly;
@property (nonatomic) _Bool hasReverseLimitOrder;
@property (nonatomic) _Bool reverseLimitOrder;
@property (nonatomic, readonly) _Bool hasSmartCriteria;
@property (retain, nonatomic) NSData *smartCriteria;
@property (nonatomic) _Bool hasGenius;
@property (nonatomic) _Bool genius;

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
