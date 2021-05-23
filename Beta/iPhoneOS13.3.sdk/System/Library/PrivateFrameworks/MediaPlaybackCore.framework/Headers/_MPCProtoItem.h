/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class _MPCProtoItemIdentifierSet;

@interface _MPCProtoItem : PBCodable <Swift>

{
    _MPCProtoItemIdentifierSet *_identifierSet;
    int _mediaType;
    _Bool _excludeFromShuffle;
    struct {
        unsigned int mediaType:1;
        unsigned int excludeFromShuffle:1;
    } _has;
}

@property (nonatomic) _Bool hasMediaType;
@property (nonatomic) int mediaType;
@property (nonatomic, readonly) _Bool hasIdentifierSet;
@property (retain, nonatomic) _MPCProtoItemIdentifierSet *identifierSet;
@property (nonatomic) _Bool hasExcludeFromShuffle;
@property (nonatomic) _Bool excludeFromShuffle;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
