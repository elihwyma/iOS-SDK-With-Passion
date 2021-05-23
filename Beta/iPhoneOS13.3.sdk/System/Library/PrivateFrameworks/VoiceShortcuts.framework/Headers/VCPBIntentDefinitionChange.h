/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <PBCodable.h>

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSString, VCPBIntentDefinition;

@interface VCPBIntentDefinitionChange : PBCodable <Swift>

{
    NSString *_associatedBundleID;
    int _changeType;
    VCPBIntentDefinition *_intentDefinition;
}

@property (nonatomic) int changeType;
@property (retain, nonatomic) NSString *associatedBundleID;
@property (nonatomic, readonly) _Bool hasIntentDefinition;
@property (retain, nonatomic) VCPBIntentDefinition *intentDefinition;

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
