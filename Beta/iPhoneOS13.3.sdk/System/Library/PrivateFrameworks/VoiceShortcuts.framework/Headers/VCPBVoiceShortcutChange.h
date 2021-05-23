/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <PBCodable.h>

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSData, NSString, VCPBVoiceShortcut;

@interface VCPBVoiceShortcutChange : PBCodable <Swift>

{
    int _changeType;
    NSData *_syncMetadata;
    VCPBVoiceShortcut *_voiceShortcut;
    NSString *_voiceShortcutIdentifier;
}

@property (nonatomic) int changeType;
@property (retain, nonatomic) NSString *voiceShortcutIdentifier;
@property (nonatomic, readonly) _Bool hasVoiceShortcut;
@property (retain, nonatomic) VCPBVoiceShortcut *voiceShortcut;
@property (nonatomic, readonly) _Bool hasSyncMetadata;
@property (retain, nonatomic) NSData *syncMetadata;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
- (int)StringAsChangeType:(id)arg1;

@end
