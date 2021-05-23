/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBHeadlineAnalyticsElement : PBCodable

{
    long long _articleVersion;
    NSString *_articleID;
    NSString *_channelID;
    NSString *_preseenCountTrackingIdentifier;
    _Bool _needsSeenStateTracking;
    struct {
        unsigned int articleVersion:1;
        unsigned int needsSeenStateTracking:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (nonatomic) _Bool hasArticleVersion;
@property (nonatomic) long long articleVersion;
@property (nonatomic) _Bool hasNeedsSeenStateTracking;
@property (nonatomic) _Bool needsSeenStateTracking;
@property (nonatomic, readonly) _Bool hasChannelID;
@property (retain, nonatomic) NSString *channelID;
@property (nonatomic, readonly) _Bool hasPreseenCountTrackingIdentifier;
@property (retain, nonatomic) NSString *preseenCountTrackingIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
