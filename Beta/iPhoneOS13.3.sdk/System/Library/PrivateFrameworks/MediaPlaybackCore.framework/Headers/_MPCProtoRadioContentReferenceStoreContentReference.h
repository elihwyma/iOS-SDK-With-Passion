/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@interface _MPCProtoRadioContentReferenceStoreContentReference : PBCodable <Swift>

{
    long long _storeAdamID;
    struct {
        unsigned int storeAdamID:1;
    } _has;
}

@property (nonatomic) _Bool hasStoreAdamID;
@property (nonatomic) long long storeAdamID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
