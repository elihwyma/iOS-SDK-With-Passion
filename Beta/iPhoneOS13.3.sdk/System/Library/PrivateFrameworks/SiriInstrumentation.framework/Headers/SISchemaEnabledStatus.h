/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaEnabledStatus : PBCodable

{
    _Bool _assistantEnabled;
    _Bool _dictationEnabled;
    _Bool _hardwareButtonEnabled;
    _Bool _heySiriEnabled;
    _Bool _assistantOnLockscreen;
    _Bool _raiseToSpeakEnabled;
    _Bool _spokenNotificationsEnabled;
    _Bool _hasHomekitHome;
    int _shortcutsAvailable;
    int _dataSharingOptInStatus;
}

@property (nonatomic) _Bool assistantEnabled;
@property (nonatomic) _Bool dictationEnabled;
@property (nonatomic) _Bool hardwareButtonEnabled;
@property (nonatomic) _Bool heySiriEnabled;
@property (nonatomic) _Bool assistantOnLockscreen;
@property (nonatomic) _Bool raiseToSpeakEnabled;
@property (nonatomic) _Bool spokenNotificationsEnabled;
@property (nonatomic) _Bool hasHomekitHome;
@property (nonatomic) int shortcutsAvailable;
@property (nonatomic) int dataSharingOptInStatus;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
