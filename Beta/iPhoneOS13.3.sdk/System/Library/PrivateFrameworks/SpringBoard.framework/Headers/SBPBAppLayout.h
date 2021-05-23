/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SpringBoard/Swift-Protocol.h>

@class SBPBDisplayItem;

@interface SBPBAppLayout : PBCodable <Swift>

{
    int _environment;
    int _layoutConfiguration;
    SBPBDisplayItem *_primaryDisplayItem;
    SBPBDisplayItem *_secondaryDisplayItem;
    int _secondaryDisplayItemRole;
    _Bool _hidden;
    struct {
        unsigned int secondaryDisplayItemRole:1;
    } _has;
}

@property (nonatomic) int layoutConfiguration;
@property (nonatomic, readonly) _Bool hasPrimaryDisplayItem;
@property (retain, nonatomic) SBPBDisplayItem *primaryDisplayItem;
@property (nonatomic) _Bool hasSecondaryDisplayItemRole;
@property (nonatomic) int secondaryDisplayItemRole;
@property (nonatomic, readonly) _Bool hasSecondaryDisplayItem;
@property (retain, nonatomic) SBPBDisplayItem *secondaryDisplayItem;
@property (nonatomic) int environment;
@property (nonatomic) _Bool hidden;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)layoutConfigurationAsString:(int)arg1;
- (int)StringAsLayoutConfiguration:(id)arg1;
- (id)secondaryDisplayItemRoleAsString:(int)arg1;
- (int)StringAsSecondaryDisplayItemRole:(id)arg1;
- (id)environmentAsString:(int)arg1;
- (int)StringAsEnvironment:(id)arg1;

@end
