/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SISchemaActiveStatus, SISchemaEnabledStatus, SISchemaMultiUserState, SISchemaPersonalization;

@interface SISchemaDailyDeviceStatus : PBCodable

{
    _Bool _spokenNotificationsproxCardSeen;
    _Bool _spokenNotificationsControlCenterModuleEnabled;
    int _spokenNotificationsWhitelistSettings;
    NSString *_siriDeviceID;
    NSString *_siriSpeechID;
    NSString *_sharedUserId;
    long long _clientDeviceSamplingTimestampMs;
    long long _assistantRecordPublishTimestampMs;
    NSString *_locale;
    NSString *_deviceType;
    NSString *_deviceOs;
    NSString *_deviceBuild;
    SISchemaEnabledStatus *_enabledStatus;
    SISchemaActiveStatus *_activeStatus;
    SISchemaPersonalization *_personalization;
    SISchemaMultiUserState *_multiUserState;
}

@property (copy, nonatomic) NSString *siriDeviceID;
@property (copy, nonatomic) NSString *siriSpeechID;
@property (copy, nonatomic) NSString *sharedUserId;
@property (nonatomic) long long clientDeviceSamplingTimestampMs;
@property (nonatomic) long long assistantRecordPublishTimestampMs;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *deviceOs;
@property (copy, nonatomic) NSString *deviceBuild;
@property (retain, nonatomic) SISchemaEnabledStatus *enabledStatus;
@property (retain, nonatomic) SISchemaActiveStatus *activeStatus;
@property (retain, nonatomic) SISchemaPersonalization *personalization;
@property (retain, nonatomic) SISchemaMultiUserState *multiUserState;
@property (nonatomic) _Bool spokenNotificationsproxCardSeen;
@property (nonatomic) _Bool spokenNotificationsControlCenterModuleEnabled;
@property (nonatomic) int spokenNotificationsWhitelistSettings;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)getAnyEventType;

@end
