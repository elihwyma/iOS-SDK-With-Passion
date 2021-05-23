/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoPayloadSettings : PBCodable

{
    NSString *_featureString;
    unsigned int _parameterSet;
    unsigned int _payload;
    NSMutableArray *_videoRuleCollections;
}

@property (nonatomic) unsigned int payload;
@property (retain, nonatomic) NSMutableArray *videoRuleCollections;
@property (retain, nonatomic) NSString *featureString;
@property (nonatomic) unsigned int parameterSet;

+ (Class)videoRuleCollectionsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addVideoRuleCollections:(id)arg1;
- (unsigned long long)videoRuleCollectionsCount;
- (void)clearVideoRuleCollections;
- (id)videoRuleCollectionsAtIndex:(unsigned long long)arg1;

@end
