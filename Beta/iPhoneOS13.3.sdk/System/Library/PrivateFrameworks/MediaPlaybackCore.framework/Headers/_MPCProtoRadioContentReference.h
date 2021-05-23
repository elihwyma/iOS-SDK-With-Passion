/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class _MPCProtoRadioContentReferenceLibraryAlbumContentReference, _MPCProtoRadioContentReferenceLibraryArtistContentReference, _MPCProtoRadioContentReferenceLibraryItemContentReference, _MPCProtoRadioContentReferenceStoreContentReference;

@interface _MPCProtoRadioContentReference : PBCodable <Swift>

{
    _MPCProtoRadioContentReferenceLibraryAlbumContentReference *_libraryAlbumContentReference;
    _MPCProtoRadioContentReferenceLibraryArtistContentReference *_libraryArtistContentReference;
    _MPCProtoRadioContentReferenceLibraryItemContentReference *_libraryItemContentReference;
    _MPCProtoRadioContentReferenceStoreContentReference *_storeContentReference;
}

@property (nonatomic, readonly) _Bool hasLibraryAlbumContentReference;
@property (retain, nonatomic) _MPCProtoRadioContentReferenceLibraryAlbumContentReference *libraryAlbumContentReference;
@property (nonatomic, readonly) _Bool hasLibraryArtistContentReference;
@property (retain, nonatomic) _MPCProtoRadioContentReferenceLibraryArtistContentReference *libraryArtistContentReference;
@property (nonatomic, readonly) _Bool hasLibraryItemContentReference;
@property (retain, nonatomic) _MPCProtoRadioContentReferenceLibraryItemContentReference *libraryItemContentReference;
@property (nonatomic, readonly) _Bool hasStoreContentReference;
@property (retain, nonatomic) _MPCProtoRadioContentReferenceStoreContentReference *storeContentReference;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
