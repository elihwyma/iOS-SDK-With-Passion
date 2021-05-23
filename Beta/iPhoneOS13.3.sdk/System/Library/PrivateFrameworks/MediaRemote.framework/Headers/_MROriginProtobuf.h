/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _MRDeviceInfoMessageProtobuf;

@interface _MROriginProtobuf : PBCodable

{
    _MRDeviceInfoMessageProtobuf *_deviceInfoDeprecated;
    NSString *_displayName;
    int _identifier;
    int _type;
    struct {
        unsigned int identifier:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic, readonly) _Bool isLocal;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) _Bool hasIdentifier;
@property (nonatomic) int identifier;
@property (nonatomic, readonly) _Bool hasDeviceInfoDeprecated;
@property (retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfoDeprecated;

+ (id)localOrigin;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
