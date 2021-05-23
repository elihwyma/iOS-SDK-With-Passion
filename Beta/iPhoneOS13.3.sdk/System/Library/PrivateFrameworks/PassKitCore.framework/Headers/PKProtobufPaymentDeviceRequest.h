/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBRequest.h>

@class NSMutableArray, NSString;

@interface PKProtobufPaymentDeviceRequest : PBRequest

{
    NSString *_deviceName;
    NSMutableArray *_knownManifestHashes;
    unsigned int _protocolVersion;
    _Bool _shouldAdvertise;
    struct {
        unsigned int protocolVersion:1;
        unsigned int shouldAdvertise:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) _Bool hasShouldAdvertise;
@property (nonatomic) _Bool shouldAdvertise;
@property (retain, nonatomic) NSMutableArray *knownManifestHashes;
@property (nonatomic) _Bool hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;

+ (Class)knownManifestHashesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addKnownManifestHashes:(id)arg1;
- (unsigned long long)knownManifestHashesCount;
- (void)clearKnownManifestHashes;
- (id)knownManifestHashesAtIndex:(unsigned long long)arg1;

@end
