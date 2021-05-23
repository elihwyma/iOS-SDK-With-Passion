/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBUserOnboardingResult : PBCodable

{
    NSMutableArray *_channelIds;
    NSString *_onboardAbandonStage;
    int _resultType;
    NSMutableArray *_topicIds;
    int _totalChannelSelections;
    int _totalResets;
    int _totalTopicSelections;
    _Bool _icloudAccountMatch;
    _Bool _sawEmailOptIn;
    struct {
        unsigned int resultType:1;
        unsigned int totalChannelSelections:1;
        unsigned int totalResets:1;
        unsigned int totalTopicSelections:1;
        unsigned int icloudAccountMatch:1;
        unsigned int sawEmailOptIn:1;
    } _has;
}

@property (nonatomic) _Bool hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) _Bool hasIcloudAccountMatch;
@property (nonatomic) _Bool icloudAccountMatch;
@property (nonatomic, readonly) _Bool hasOnboardAbandonStage;
@property (retain, nonatomic) NSString *onboardAbandonStage;
@property (nonatomic) _Bool hasTotalChannelSelections;
@property (nonatomic) int totalChannelSelections;
@property (nonatomic) _Bool hasTotalTopicSelections;
@property (nonatomic) int totalTopicSelections;
@property (retain, nonatomic) NSMutableArray *channelIds;
@property (retain, nonatomic) NSMutableArray *topicIds;
@property (nonatomic) _Bool hasTotalResets;
@property (nonatomic) int totalResets;
@property (nonatomic) _Bool hasSawEmailOptIn;
@property (nonatomic) _Bool sawEmailOptIn;

+ (Class)channelIdType;
+ (Class)topicIdType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addChannelId:(id)arg1;
- (void)addTopicId:(id)arg1;
- (void)clearChannelIds;
- (unsigned long long)channelIdsCount;
- (id)channelIdAtIndex:(unsigned long long)arg1;
- (void)clearTopicIds;
- (unsigned long long)topicIdsCount;
- (id)topicIdAtIndex:(unsigned long long)arg1;

@end
