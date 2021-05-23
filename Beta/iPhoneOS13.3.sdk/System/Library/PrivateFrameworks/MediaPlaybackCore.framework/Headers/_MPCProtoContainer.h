/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSMutableArray, NSString, _MPCProtoContainerIdentifierSet;

@interface _MPCProtoContainer : PBCodable <Swift>

{
    int _containerType;
    _MPCProtoContainerIdentifierSet *_identifierSet;
    NSMutableArray *_items;
    NSString *_playActivityFeatureName;
    struct {
        unsigned int containerType:1;
    } _has;
}

@property (nonatomic) _Bool hasContainerType;
@property (nonatomic) int containerType;
@property (nonatomic, readonly) _Bool hasIdentifierSet;
@property (retain, nonatomic) _MPCProtoContainerIdentifierSet *identifierSet;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic, readonly) _Bool hasPlayActivityFeatureName;
@property (retain, nonatomic) NSString *playActivityFeatureName;

+ (Class)itemType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addItem:(id)arg1;
- (unsigned long long)itemsCount;
- (id)itemAtIndex:(unsigned long long)arg1;
- (void)clearItems;

@end
