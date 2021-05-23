/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <PBCodable.h>

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSData, NSString;

@interface VCPBVoiceShortcut : PBCodable <Swift>

{
    double _dateCreated;
    double _dateLastModified;
    NSString *_associatedAppBundleIdentifier;
    NSString *_identifier;
    NSData *_keyImageData;
    NSString *_phrase;
    NSData *_serializedWorkflowData;
    NSString *_shortcutDescription;
    NSString *_shortcutName;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *phrase;
@property (retain, nonatomic) NSString *shortcutName;
@property (nonatomic, readonly) _Bool hasShortcutDescription;
@property (retain, nonatomic) NSString *shortcutDescription;
@property (retain, nonatomic) NSString *associatedAppBundleIdentifier;
@property (nonatomic) double dateCreated;
@property (nonatomic) double dateLastModified;
@property (retain, nonatomic) NSData *serializedWorkflowData;
@property (nonatomic, readonly) _Bool hasKeyImageData;
@property (retain, nonatomic) NSData *keyImageData;

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
