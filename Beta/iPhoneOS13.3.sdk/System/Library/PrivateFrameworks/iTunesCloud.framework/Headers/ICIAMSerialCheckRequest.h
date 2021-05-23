/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBRequest.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSString;

@interface ICIAMSerialCheckRequest : PBRequest <Swift>

{
    long long _dSID;
    NSString *_deviceID;
    CDStruct_f07dd4d9 _has;
}

@property (nonatomic) _Bool hasDSID;
@property (nonatomic) long long dSID;
@property (nonatomic, readonly) _Bool hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;

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
