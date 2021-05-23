/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSString;

@interface _MPCProtoDelegateInfo : PBCodable <Swift>

{
    unsigned long long _accountID;
    long long _delegateInfoID;
    NSString *_deviceGUID;
    NSString *_deviceName;
    NSString *_requestUserAgent;
    int _systemReleaseType;
    NSString *_timeZoneName;
    NSString *_uuid;
    _Bool _privateListeningEnabled;
    struct {
        unsigned int accountID:1;
        unsigned int delegateInfoID:1;
        unsigned int systemReleaseType:1;
        unsigned int privateListeningEnabled:1;
    } _has;
}

@property (nonatomic) _Bool hasDelegateInfoID;
@property (nonatomic) long long delegateInfoID;
@property (nonatomic) _Bool hasAccountID;
@property (nonatomic) unsigned long long accountID;
@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic, readonly) _Bool hasDeviceGUID;
@property (retain, nonatomic) NSString *deviceGUID;
@property (nonatomic, readonly) _Bool hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) _Bool hasSystemReleaseType;
@property (nonatomic) int systemReleaseType;
@property (nonatomic, readonly) _Bool hasRequestUserAgent;
@property (retain, nonatomic) NSString *requestUserAgent;
@property (nonatomic, readonly) _Bool hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;
@property (nonatomic) _Bool hasPrivateListeningEnabled;
@property (nonatomic) _Bool privateListeningEnabled;

+ (id)currentDeviceDelegateInfo;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)_getPlaybackRequestEnvironmentWithBaseEnvironment:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
