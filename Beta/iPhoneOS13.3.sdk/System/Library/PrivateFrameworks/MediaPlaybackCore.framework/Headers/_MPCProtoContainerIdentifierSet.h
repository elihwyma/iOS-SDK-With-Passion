/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSString;

@interface _MPCProtoContainerIdentifierSet : PBCodable <Swift>

{
    long long _cloudID;
    long long _delegateInfoID;
    long long _storeAdamID;
    NSString *_cloudCollectionID;
    NSString *_cloudUniversalLibraryID;
    NSString *_radioStationID;
    NSString *_storePlaylistGlobalID;
    NSString *_storePlaylistVersionHash;
    struct {
        unsigned int cloudID:1;
        unsigned int delegateInfoID:1;
        unsigned int storeAdamID:1;
    } _has;
}

@property (nonatomic) _Bool hasDelegateInfoID;
@property (nonatomic) long long delegateInfoID;
@property (nonatomic) _Bool hasStoreAdamID;
@property (nonatomic) long long storeAdamID;
@property (nonatomic, readonly) _Bool hasStorePlaylistGlobalID;
@property (retain, nonatomic) NSString *storePlaylistGlobalID;
@property (nonatomic, readonly) _Bool hasStorePlaylistVersionHash;
@property (retain, nonatomic) NSString *storePlaylistVersionHash;
@property (nonatomic) _Bool hasCloudID;
@property (nonatomic) long long cloudID;
@property (nonatomic, readonly) _Bool hasCloudCollectionID;
@property (retain, nonatomic) NSString *cloudCollectionID;
@property (nonatomic, readonly) _Bool hasRadioStationID;
@property (retain, nonatomic) NSString *radioStationID;
@property (nonatomic, readonly) _Bool hasCloudUniversalLibraryID;
@property (retain, nonatomic) NSString *cloudUniversalLibraryID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
