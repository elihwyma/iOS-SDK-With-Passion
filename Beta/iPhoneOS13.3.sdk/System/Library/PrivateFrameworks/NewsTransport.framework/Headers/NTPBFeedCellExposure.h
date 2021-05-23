/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NTPBFeedCellExposure : PBCodable

{
    int _displayRankInSection;
    NSData *_feedCellHostExposureId;
    int _feedCellHostType;
    int _feedCellSection;
    NSString *_feedId;
    int _feedType;
    NSString *_viewFrameInScreen;
    _Bool _isUserSubscribedToFeed;
    struct {
        unsigned int displayRankInSection:1;
        unsigned int feedCellHostType:1;
        unsigned int feedCellSection:1;
        unsigned int feedType:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

@property (nonatomic) _Bool hasFeedType;
@property (nonatomic) int feedType;
@property (nonatomic, readonly) _Bool hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) _Bool hasIsUserSubscribedToFeed;
@property (nonatomic) _Bool isUserSubscribedToFeed;
@property (nonatomic) _Bool hasFeedCellSection;
@property (nonatomic) int feedCellSection;
@property (nonatomic) _Bool hasDisplayRankInSection;
@property (nonatomic) int displayRankInSection;
@property (nonatomic, readonly) _Bool hasViewFrameInScreen;
@property (retain, nonatomic) NSString *viewFrameInScreen;
@property (nonatomic) _Bool hasFeedCellHostType;
@property (nonatomic) int feedCellHostType;
@property (nonatomic, readonly) _Bool hasFeedCellHostExposureId;
@property (retain, nonatomic) NSData *feedCellHostExposureId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
- (int)StringAsFeedType:(id)arg1;
- (id)feedCellSectionAsString:(int)arg1;
- (int)StringAsFeedCellSection:(id)arg1;
- (id)feedCellHostTypeAsString:(int)arg1;
- (int)StringAsFeedCellHostType:(id)arg1;

@end
