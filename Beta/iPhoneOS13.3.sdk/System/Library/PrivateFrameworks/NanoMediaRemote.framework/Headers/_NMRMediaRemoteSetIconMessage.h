/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _NMRMediaRemoteSetIconMessage : PBCodable

{
    double _timestamp;
    NSString *_bundleID;
    NSData *_iconData;
    int _originIdentifier;
    NSData *_originalDigest;
    CDStruct_99886639 _has;
}

@property (nonatomic, readonly) _Bool hasIconData;
@property (retain, nonatomic) NSData *iconData;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) _Bool hasOriginalDigest;
@property (retain, nonatomic) NSData *originalDigest;
@property (nonatomic, readonly) _Bool hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
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
