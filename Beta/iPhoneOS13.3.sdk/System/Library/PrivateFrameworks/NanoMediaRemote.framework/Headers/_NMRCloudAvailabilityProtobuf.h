/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface _NMRCloudAvailabilityProtobuf : PBCodable

{
    _Bool _canShowCloudMusic;
    _Bool _hasProperNetworkConditionsToPlayMedia;
    struct {
        unsigned int canShowCloudMusic:1;
        unsigned int hasProperNetworkConditionsToPlayMedia:1;
    } _has;
}

@property (nonatomic) _Bool hasHasProperNetworkConditionsToPlayMedia;
@property (nonatomic) _Bool hasProperNetworkConditionsToPlayMedia;
@property (nonatomic) _Bool hasCanShowCloudMusic;
@property (nonatomic) _Bool canShowCloudMusic;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
