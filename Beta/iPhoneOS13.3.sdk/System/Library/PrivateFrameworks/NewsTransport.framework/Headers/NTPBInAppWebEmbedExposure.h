/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NTPBInAppWebEmbedExposure : PBCodable

{
    int _articleDisplayRankInGroup;
    NSString *_articleId;
    int _displayRank;
    int _feedType;
    NSData *_feedViewExposureId;
    int _groupType;
    int _moduleEventType;
    NSData *_moduleExposureId;
    int _moduleItemCount;
    int _moduleItemPosition;
    int _moduleLocation;
    NSString *_webEmbedId;
    int _webEmbedLocation;
    struct {
        unsigned int articleDisplayRankInGroup:1;
        unsigned int displayRank:1;
        unsigned int feedType:1;
        unsigned int groupType:1;
        unsigned int moduleEventType:1;
        unsigned int moduleItemCount:1;
        unsigned int moduleItemPosition:1;
        unsigned int moduleLocation:1;
        unsigned int webEmbedLocation:1;
    } _has;
}

@property (nonatomic) _Bool hasModuleEventType;
@property (nonatomic) int moduleEventType;
@property (nonatomic) _Bool hasModuleLocation;
@property (nonatomic) int moduleLocation;
@property (nonatomic) _Bool hasModuleItemCount;
@property (nonatomic) int moduleItemCount;
@property (nonatomic, readonly) _Bool hasModuleExposureId;
@property (retain, nonatomic) NSData *moduleExposureId;
@property (nonatomic, readonly) _Bool hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) _Bool hasWebEmbedLocation;
@property (nonatomic) int webEmbedLocation;
@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) _Bool hasModuleItemPosition;
@property (nonatomic) int moduleItemPosition;
@property (nonatomic, readonly) _Bool hasWebEmbedId;
@property (retain, nonatomic) NSString *webEmbedId;
@property (nonatomic) _Bool hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic) _Bool hasFeedType;
@property (nonatomic) int feedType;
@property (nonatomic) _Bool hasDisplayRank;
@property (nonatomic) int displayRank;
@property (nonatomic) _Bool hasArticleDisplayRankInGroup;
@property (nonatomic) int articleDisplayRankInGroup;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)moduleEventTypeAsString:(int)arg1;
- (int)StringAsModuleEventType:(id)arg1;
- (id)moduleLocationAsString:(int)arg1;
- (int)StringAsModuleLocation:(id)arg1;
- (id)webEmbedLocationAsString:(int)arg1;
- (int)StringAsWebEmbedLocation:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
- (int)StringAsGroupType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
- (int)StringAsFeedType:(id)arg1;

@end
