//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class _MPCProtoRadioContentReferenceLibraryAlbumContentReference, _MPCProtoRadioContentReferenceLibraryArtistContentReference, _MPCProtoRadioContentReferenceLibraryItemContentReference, _MPCProtoRadioContentReferenceStoreContentReference;

@interface _MPCProtoRadioContentReference : PBCodable <NSCopying>
{
    _MPCProtoRadioContentReferenceLibraryAlbumContentReference *_libraryAlbumContentReference;
    _MPCProtoRadioContentReferenceLibraryArtistContentReference *_libraryArtistContentReference;
    _MPCProtoRadioContentReferenceLibraryItemContentReference *_libraryItemContentReference;
    _MPCProtoRadioContentReferenceStoreContentReference *_storeContentReference;
}

@property(retain, nonatomic) _MPCProtoRadioContentReferenceStoreContentReference *storeContentReference; // @synthesize storeContentReference=_storeContentReference;
@property(retain, nonatomic) _MPCProtoRadioContentReferenceLibraryItemContentReference *libraryItemContentReference; // @synthesize libraryItemContentReference=_libraryItemContentReference;
@property(retain, nonatomic) _MPCProtoRadioContentReferenceLibraryArtistContentReference *libraryArtistContentReference; // @synthesize libraryArtistContentReference=_libraryArtistContentReference;
@property(retain, nonatomic) _MPCProtoRadioContentReferenceLibraryAlbumContentReference *libraryAlbumContentReference; // @synthesize libraryAlbumContentReference=_libraryAlbumContentReference;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasStoreContentReference;
@property(readonly, nonatomic) BOOL hasLibraryItemContentReference;
@property(readonly, nonatomic) BOOL hasLibraryArtistContentReference;
@property(readonly, nonatomic) BOOL hasLibraryAlbumContentReference;

@end

