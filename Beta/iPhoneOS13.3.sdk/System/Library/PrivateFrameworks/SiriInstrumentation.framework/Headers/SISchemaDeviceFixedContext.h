/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaDeviceFixedContext : PBCodable

{
    NSString *_deviceType;
    NSString *_systemBuild;
    NSString *_siriInputLanguage;
    NSString *_siriVoiceLanguage;
    NSString *_systemLocale;
    NSString *_siriDeviceID;
    NSString *_speechID;
}

@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *systemBuild;
@property (copy, nonatomic) NSString *siriInputLanguage;
@property (copy, nonatomic) NSString *siriVoiceLanguage;
@property (copy, nonatomic) NSString *systemLocale;
@property (copy, nonatomic) NSString *siriDeviceID;
@property (copy, nonatomic) NSString *speechID;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
