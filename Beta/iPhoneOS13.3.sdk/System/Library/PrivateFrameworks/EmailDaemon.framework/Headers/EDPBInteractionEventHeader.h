/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/Swift-Protocol.h>

@class NSString;

@interface EDPBInteractionEventHeader : PBCodable <Swift>

{
    long long _deviceId;
    long long _userId;
    NSString *_locale;
    int _timezoneOffset;
    unsigned int _userSegment;
    unsigned int _version;
    struct {
        unsigned int deviceId:1;
        unsigned int userId:1;
        unsigned int timezoneOffset:1;
        unsigned int userSegment:1;
        unsigned int version:1;
    } _has;
}

@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) _Bool hasUserId;
@property (nonatomic) long long userId;
@property (nonatomic) _Bool hasDeviceId;
@property (nonatomic) long long deviceId;
@property (nonatomic, readonly) _Bool hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) _Bool hasTimezoneOffset;
@property (nonatomic) int timezoneOffset;
@property (nonatomic) _Bool hasUserSegment;
@property (nonatomic) unsigned int userSegment;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (int)messageFrameType;

@end
