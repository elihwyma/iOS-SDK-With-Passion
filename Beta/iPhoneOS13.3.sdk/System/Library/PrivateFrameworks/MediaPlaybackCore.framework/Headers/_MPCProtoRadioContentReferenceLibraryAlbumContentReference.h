/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryAlbumContentReference : PBCodable <Swift>

{
    long long _representativeItemCloudID;
    long long _storeAdamID;
    NSString *_albumName;
    CDStruct_c223d907 _has;
}

@property (nonatomic, readonly) _Bool hasAlbumName;
@property (retain, nonatomic) NSString *albumName;
@property (nonatomic) _Bool hasRepresentativeItemCloudID;
@property (nonatomic) long long representativeItemCloudID;
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
