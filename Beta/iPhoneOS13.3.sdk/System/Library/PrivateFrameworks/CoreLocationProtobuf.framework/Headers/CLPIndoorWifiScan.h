/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBCodable.h>

@class NSString;

@interface CLPIndoorWifiScan : PBCodable

{
    double _age;
    double _timestamp;
    NSString *_bundleId;
    int _channel;
    int _hidden;
    NSString *_mac;
    int _rssi;
    struct {
        unsigned int age:1;
        unsigned int hidden:1;
    } _has;
}

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *mac;
@property (nonatomic) int channel;
@property (nonatomic) _Bool hasHidden;
@property (nonatomic) int hidden;
@property (nonatomic) int rssi;
@property (nonatomic) _Bool hasAge;
@property (nonatomic) double age;
@property (nonatomic, readonly) _Bool hasBundleId;
@property (retain, nonatomic) NSString *bundleId;

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
