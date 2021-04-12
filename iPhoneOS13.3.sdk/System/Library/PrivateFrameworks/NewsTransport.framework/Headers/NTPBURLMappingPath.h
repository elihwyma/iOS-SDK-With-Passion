//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface NTPBURLMappingPath : PBCodable <NSCopying>
{
    NSMutableArray *_channelTags;
    NSString *_path;
    NSMutableArray *_sectionTags;
    NSMutableArray *_topicTags;
}

+ (Class)sectionTagsType;
+ (Class)channelTagsType;
+ (Class)topicTagsType;
@property(retain, nonatomic) NSMutableArray *sectionTags; // @synthesize sectionTags=_sectionTags;
@property(retain, nonatomic) NSMutableArray *channelTags; // @synthesize channelTags=_channelTags;
@property(retain, nonatomic) NSMutableArray *topicTags; // @synthesize topicTags=_topicTags;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)sectionTagsAtIndex:(NSUInteger)arg1;
- (NSUInteger)sectionTagsCount;
- (void)addSectionTags:(id)arg1;
- (void)clearSectionTags;
- (id)channelTagsAtIndex:(NSUInteger)arg1;
- (NSUInteger)channelTagsCount;
- (void)addChannelTags:(id)arg1;
- (void)clearChannelTags;
- (id)topicTagsAtIndex:(NSUInteger)arg1;
- (NSUInteger)topicTagsCount;
- (void)addTopicTags:(id)arg1;
- (void)clearTopicTags;

@end

