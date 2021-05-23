/*
 Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NanoPhoneVoicemailBody : PBCodable

{
    long long _voicemailNumber;
    NSData *_voicemailRecording;
}

@property (nonatomic) long long voicemailNumber;
@property (nonatomic, readonly) _Bool hasVoicemailRecording;
@property (retain, nonatomic) NSData *voicemailRecording;

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
