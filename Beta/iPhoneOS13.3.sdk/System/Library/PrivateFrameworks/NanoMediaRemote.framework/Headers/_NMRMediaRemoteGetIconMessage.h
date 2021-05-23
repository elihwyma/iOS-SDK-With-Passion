/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NMRMediaRemoteGetIconMessage : PBCodable

{
    double _height;
    double _timestamp;
    double _width;
    NSString *_bundleID;
    int _originIdentifier;
    struct {
        unsigned int height:1;
        unsigned int timestamp:1;
        unsigned int width:1;
        unsigned int originIdentifier:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasWidth;
@property (nonatomic) double width;
@property (nonatomic) _Bool hasHeight;
@property (nonatomic) double height;
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
