/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBAbsolutePersonalizedSectionPresenceConfig : PBCodable

{
    double _cTRToHide;
    double _cTRToShow;
    double _minProbabilityToShow;
    unsigned long long _sectionEdition;
    struct {
        unsigned int cTRToHide:1;
        unsigned int cTRToShow:1;
        unsigned int minProbabilityToShow:1;
        unsigned int sectionEdition:1;
    } _has;
}

@property (nonatomic) _Bool hasCTRToShow;
@property (nonatomic) double cTRToShow;
@property (nonatomic) _Bool hasCTRToHide;
@property (nonatomic) double cTRToHide;
@property (nonatomic) _Bool hasMinProbabilityToShow;
@property (nonatomic) double minProbabilityToShow;
@property (nonatomic) _Bool hasSectionEdition;
@property (nonatomic) unsigned long long sectionEdition;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
