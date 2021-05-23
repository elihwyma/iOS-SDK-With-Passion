/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NTPBFeedCellExposure, NTPBTocCellExposureArticleElement;

@interface NTPBTocCellExposure : PBCodable

{
    int _displayRank;
    NTPBFeedCellExposure *_feedCellExposure;
    int _rankInSection;
    NTPBTocCellExposureArticleElement *_tocCellExposureArticleElement;
    NSData *_tocCellExposureId;
    int _tocCellSection;
    int _type;
    _Bool _isBadged;
    struct {
        unsigned int displayRank:1;
        unsigned int rankInSection:1;
        unsigned int tocCellSection:1;
        unsigned int type:1;
        unsigned int isBadged:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasTocCellExposureId;
@property (retain, nonatomic) NSData *tocCellExposureId;
@property (nonatomic) _Bool hasIsBadged;
@property (nonatomic) _Bool isBadged;
@property (nonatomic) _Bool hasDisplayRank;
@property (nonatomic) int displayRank;
@property (nonatomic) _Bool hasRankInSection;
@property (nonatomic) int rankInSection;
@property (nonatomic) _Bool hasTocCellSection;
@property (nonatomic) int tocCellSection;
@property (nonatomic, readonly) _Bool hasFeedCellExposure;
@property (retain, nonatomic) NTPBFeedCellExposure *feedCellExposure;
@property (nonatomic, readonly) _Bool hasTocCellExposureArticleElement;
@property (retain, nonatomic) NTPBTocCellExposureArticleElement *tocCellExposureArticleElement;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)tocCellSectionAsString:(int)arg1;
- (int)StringAsTocCellSection:(id)arg1;

@end
