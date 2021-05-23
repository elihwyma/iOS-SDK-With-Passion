/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _NMROriginProtobuf : PBCodable

{
    NSData *_deviceInfoData;
    NSString *_displayName;
    int _uniqueIdentifier;
    struct {
        unsigned int uniqueIdentifier:1;
    } _has;
}

@property (nonatomic) _Bool hasUniqueIdentifier;
@property (nonatomic) int uniqueIdentifier;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic, readonly) _Bool hasDeviceInfoData;
@property (retain, nonatomic) NSData *deviceInfoData;

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
