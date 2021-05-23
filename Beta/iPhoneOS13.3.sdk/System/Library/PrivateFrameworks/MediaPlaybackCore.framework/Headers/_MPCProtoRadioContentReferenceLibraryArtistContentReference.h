/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryArtistContentReference : PBCodable <Swift>

{
    long long _representativeItemCloudID;
    long long _storeAdamID;
    NSString *_artistName;
    CDStruct_c223d907 _has;
}

@property (nonatomic, readonly) _Bool hasArtistName;
@property (retain, nonatomic) NSString *artistName;
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
