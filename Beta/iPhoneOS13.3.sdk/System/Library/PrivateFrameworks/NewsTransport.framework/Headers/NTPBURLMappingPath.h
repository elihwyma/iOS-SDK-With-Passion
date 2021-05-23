/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBURLMappingPath : PBCodable

{
    NSMutableArray *_channelTags;
    NSString *_path;
    NSMutableArray *_sectionTags;
    NSMutableArray *_topicTags;
}

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableArray *topicTags;
@property (retain, nonatomic) NSMutableArray *channelTags;
@property (retain, nonatomic) NSMutableArray *sectionTags;

+ (Class)topicTagsType;
+ (Class)channelTagsType;
+ (Class)sectionTagsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addTopicTags:(id)arg1;
- (void)addChannelTags:(id)arg1;
- (void)addSectionTags:(id)arg1;
- (void)clearTopicTags;
- (unsigned long long)topicTagsCount;
- (id)topicTagsAtIndex:(unsigned long long)arg1;
- (void)clearChannelTags;
- (unsigned long long)channelTagsCount;
- (id)channelTagsAtIndex:(unsigned long long)arg1;
- (void)clearSectionTags;
- (unsigned long long)sectionTagsCount;
- (id)sectionTagsAtIndex:(unsigned long long)arg1;

@end
