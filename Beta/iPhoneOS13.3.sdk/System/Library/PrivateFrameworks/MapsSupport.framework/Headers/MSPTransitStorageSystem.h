/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class MSPTransitStorageArtwork, NSString, PBUnknownFields;

@protocol GEOTransitArtworkDataSource;

@interface MSPTransitStorageSystem : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    MSPTransitStorageArtwork *_artwork;
    NSString *_name;
    CDStruct_e99c65f7 _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> artwork;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *artwork;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithSystem:(id)arg1;

@end
