/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

@interface _MRUpdateContentItemMessageProtobuf : PBCodable

{
    NSMutableArray *_contentItems;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

@property (retain, nonatomic) NSMutableArray *contentItems;
@property (nonatomic, readonly) _Bool hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

+ (Class)contentItemsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addContentItems:(id)arg1;
- (unsigned long long)contentItemsCount;
- (void)clearContentItems;
- (id)contentItemsAtIndex:(unsigned long long)arg1;

@end
