/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray, NSString;

@interface NPKProtoDeviceDidRegisterRequest : PBRequest

{
    NSMutableArray *_brokerRegionPushTopics;
    NSString *_primaryRegionTopic;
    NSMutableArray *_tsmRegionPushTopics;
    NSMutableArray *_tsmRegionURLs;
}

@property (retain, nonatomic) NSMutableArray *tsmRegionPushTopics;
@property (retain, nonatomic) NSMutableArray *tsmRegionURLs;
@property (retain, nonatomic) NSMutableArray *brokerRegionPushTopics;
@property (nonatomic, readonly) _Bool hasPrimaryRegionTopic;
@property (retain, nonatomic) NSString *primaryRegionTopic;

+ (Class)tsmRegionPushTopicsType;
+ (Class)tsmRegionURLsType;
+ (Class)brokerRegionPushTopicsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addTsmRegionPushTopics:(id)arg1;
- (void)addTsmRegionURLs:(id)arg1;
- (void)addBrokerRegionPushTopics:(id)arg1;
- (unsigned long long)tsmRegionPushTopicsCount;
- (void)clearTsmRegionPushTopics;
- (id)tsmRegionPushTopicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tsmRegionURLsCount;
- (void)clearTsmRegionURLs;
- (id)tsmRegionURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)brokerRegionPushTopicsCount;
- (void)clearBrokerRegionPushTopics;
- (id)brokerRegionPushTopicsAtIndex:(unsigned long long)arg1;

@end
