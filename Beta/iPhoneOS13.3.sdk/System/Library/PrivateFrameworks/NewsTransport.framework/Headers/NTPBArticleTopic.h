/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSString;

@interface NTPBArticleTopic : PBCodable

{
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_cohorts;
    NSString *_tagID;
    _Bool _isEligibleForGrouping;
    _Bool _isEligibleForGroupingIfFavorited;
    _Bool _isHidden;
    struct {
        unsigned int isEligibleForGrouping:1;
        unsigned int isEligibleForGroupingIfFavorited:1;
        unsigned int isHidden:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasTagID;
@property (retain, nonatomic) NSString *tagID;
@property (nonatomic, readonly) _Bool hasCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *cohorts;
@property (nonatomic) _Bool hasIsHidden;
@property (nonatomic) _Bool isHidden;
@property (nonatomic) _Bool hasIsEligibleForGrouping;
@property (nonatomic) _Bool isEligibleForGrouping;
@property (nonatomic) _Bool hasIsEligibleForGroupingIfFavorited;
@property (nonatomic) _Bool isEligibleForGroupingIfFavorited;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
