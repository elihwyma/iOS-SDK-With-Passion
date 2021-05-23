/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBUserOnboardingChannelPickerComplete : PBCodable

{
    NSMutableArray *_channelIds;
    int _channelPickerPresentationReason;
    NSMutableArray *_topicIds;
    int _totalChannelSelections;
    int _totalTopicSelections;
    _Bool _fromPersonalizeNews;
    struct {
        unsigned int channelPickerPresentationReason:1;
        unsigned int totalChannelSelections:1;
        unsigned int totalTopicSelections:1;
        unsigned int fromPersonalizeNews:1;
    } _has;
}

@property (nonatomic) _Bool hasTotalChannelSelections;
@property (nonatomic) int totalChannelSelections;
@property (nonatomic) _Bool hasTotalTopicSelections;
@property (nonatomic) int totalTopicSelections;
@property (retain, nonatomic) NSMutableArray *channelIds;
@property (retain, nonatomic) NSMutableArray *topicIds;
@property (nonatomic) _Bool hasFromPersonalizeNews;
@property (nonatomic) _Bool fromPersonalizeNews;
@property (nonatomic) _Bool hasChannelPickerPresentationReason;
@property (nonatomic) int channelPickerPresentationReason;

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
- (id)channelPickerPresentationReasonAsString:(int)arg1;
- (int)StringAsChannelPickerPresentationReason:(id)arg1;

@end
