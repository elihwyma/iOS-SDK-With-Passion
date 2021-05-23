/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable

{
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_globalCohorts;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_sourceChannelCohorts;
    NSMutableArray *_topicCohorts;
}

@property (retain, nonatomic) NSMutableArray *topicCohorts;
@property (nonatomic, readonly) _Bool hasGlobalCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (nonatomic, readonly) _Bool hasSourceChannelCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts;

+ (Class)topicCohortsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addTopicCohorts:(id)arg1;
- (unsigned long long)topicCohortsCount;
- (void)clearTopicCohorts;
- (id)topicCohortsAtIndex:(unsigned long long)arg1;

@end
