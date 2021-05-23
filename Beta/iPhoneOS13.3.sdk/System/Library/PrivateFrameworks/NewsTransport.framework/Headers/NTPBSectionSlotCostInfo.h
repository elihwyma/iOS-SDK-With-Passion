/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBSectionSlotCostInfo : PBCodable

{
    double _leadingFirstHeadlineSlotCost;
    double _sectionTitleSlotCost;
    double _standardFirstHeadlineSlotCost;
    double _subsequentHeadlineSlotCost;
    struct {
        unsigned int leadingFirstHeadlineSlotCost:1;
        unsigned int sectionTitleSlotCost:1;
        unsigned int standardFirstHeadlineSlotCost:1;
        unsigned int subsequentHeadlineSlotCost:1;
    } _has;
}

@property (nonatomic) _Bool hasSectionTitleSlotCost;
@property (nonatomic) double sectionTitleSlotCost;
@property (nonatomic) _Bool hasStandardFirstHeadlineSlotCost;
@property (nonatomic) double standardFirstHeadlineSlotCost;
@property (nonatomic) _Bool hasLeadingFirstHeadlineSlotCost;
@property (nonatomic) double leadingFirstHeadlineSlotCost;
@property (nonatomic) _Bool hasSubsequentHeadlineSlotCost;
@property (nonatomic) double subsequentHeadlineSlotCost;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
