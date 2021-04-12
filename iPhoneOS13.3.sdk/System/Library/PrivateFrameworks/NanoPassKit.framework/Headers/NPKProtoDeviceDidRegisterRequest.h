//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSMutableArray, NSString;

@interface NPKProtoDeviceDidRegisterRequest : PBRequest <NSCopying>
{
    NSMutableArray *_brokerRegionPushTopics;
    NSString *_primaryRegionTopic;
    NSMutableArray *_tsmRegionPushTopics;
    NSMutableArray *_tsmRegionURLs;
}

+ (Class)brokerRegionPushTopicsType;
+ (Class)tsmRegionURLsType;
+ (Class)tsmRegionPushTopicsType;
@property(retain, nonatomic) NSString *primaryRegionTopic; // @synthesize primaryRegionTopic=_primaryRegionTopic;
@property(retain, nonatomic) NSMutableArray *brokerRegionPushTopics; // @synthesize brokerRegionPushTopics=_brokerRegionPushTopics;
@property(retain, nonatomic) NSMutableArray *tsmRegionURLs; // @synthesize tsmRegionURLs=_tsmRegionURLs;
@property(retain, nonatomic) NSMutableArray *tsmRegionPushTopics; // @synthesize tsmRegionPushTopics=_tsmRegionPushTopics;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPrimaryRegionTopic;
- (id)brokerRegionPushTopicsAtIndex:(NSUInteger)arg1;
- (NSUInteger)brokerRegionPushTopicsCount;
- (void)addBrokerRegionPushTopics:(id)arg1;
- (void)clearBrokerRegionPushTopics;
- (id)tsmRegionURLsAtIndex:(NSUInteger)arg1;
- (NSUInteger)tsmRegionURLsCount;
- (void)addTsmRegionURLs:(id)arg1;
- (void)clearTsmRegionURLs;
- (id)tsmRegionPushTopicsAtIndex:(NSUInteger)arg1;
- (NSUInteger)tsmRegionPushTopicsCount;
- (void)addTsmRegionPushTopics:(id)arg1;
- (void)clearTsmRegionPushTopics;

@end

