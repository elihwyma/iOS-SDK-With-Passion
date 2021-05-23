/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@interface _MPCProtoTracklistIndexPath : PBCodable <Swift>

{
    long long _containerIndex;
    long long _itemIndex;
    struct {
        unsigned int containerIndex:1;
        unsigned int itemIndex:1;
    } _has;
}

@property (nonatomic) _Bool hasContainerIndex;
@property (nonatomic) long long containerIndex;
@property (nonatomic) _Bool hasItemIndex;
@property (nonatomic) long long itemIndex;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
