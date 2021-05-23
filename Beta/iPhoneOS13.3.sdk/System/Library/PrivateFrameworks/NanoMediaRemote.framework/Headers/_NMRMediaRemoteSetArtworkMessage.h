/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _NMRMediaRemoteSetArtworkMessage : PBCodable

{
    double _timestamp;
    NSData *_jpegData;
    int _originIdentifier;
    NSData *_originalDigest;
    CDStruct_99886639 _has;
}

@property (nonatomic, readonly) _Bool hasJpegData;
@property (retain, nonatomic) NSData *jpegData;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) _Bool hasOriginalDigest;
@property (retain, nonatomic) NSData *originalDigest;
@property (nonatomic) _Bool hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

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
