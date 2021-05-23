/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBTopStoriesConfig : PBCodable

{
    long long _badgesTimeout;
    long long _cutoffTime;
    long long _maximumArticleCount;
    NSString *_channelId;
    NSMutableArray *_styleConfigs;
    _Bool _pinningEnabled;
    _Bool _promotingEnabled;
    struct {
        unsigned int badgesTimeout:1;
        unsigned int cutoffTime:1;
        unsigned int maximumArticleCount:1;
        unsigned int pinningEnabled:1;
        unsigned int promotingEnabled:1;
    } _has;
}

@property (nonatomic) _Bool hasPinningEnabled;
@property (nonatomic) _Bool pinningEnabled;
@property (nonatomic) _Bool hasPromotingEnabled;
@property (nonatomic) _Bool promotingEnabled;
@property (nonatomic, readonly) _Bool hasChannelId;
@property (retain, nonatomic) NSString *channelId;
@property (nonatomic) _Bool hasMaximumArticleCount;
@property (nonatomic) long long maximumArticleCount;
@property (nonatomic) _Bool hasCutoffTime;
@property (nonatomic) long long cutoffTime;
@property (retain, nonatomic) NSMutableArray *styleConfigs;
@property (nonatomic) _Bool hasBadgesTimeout;
@property (nonatomic) long long badgesTimeout;

+ (Class)styleConfigsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addStyleConfigs:(id)arg1;
- (void)clearStyleConfigs;
- (unsigned long long)styleConfigsCount;
- (id)styleConfigsAtIndex:(unsigned long long)arg1;

@end
