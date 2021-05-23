/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface MIPArtist : PBCodable

{
    long long _persistentId;
    long long _storeId;
    NSString *_artworkId;
    NSString *_cloudUniversalLibraryId;
    NSString *_name;
    NSString *_sortName;
    CDStruct_0ee5a09b _has;
}

@property (nonatomic) _Bool hasStoreId;
@property (nonatomic) long long storeId;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasSortName;
@property (retain, nonatomic) NSString *sortName;
@property (nonatomic, readonly) _Bool hasArtworkId;
@property (retain, nonatomic) NSString *artworkId;
@property (nonatomic) _Bool hasPersistentId;
@property (nonatomic) long long persistentId;
@property (nonatomic, readonly) _Bool hasCloudUniversalLibraryId;
@property (retain, nonatomic) NSString *cloudUniversalLibraryId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
