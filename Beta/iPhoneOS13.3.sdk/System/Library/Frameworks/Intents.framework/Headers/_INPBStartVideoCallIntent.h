/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBStartVideoCallIntent : PBCodable <Swift>

{
    CDStruct_fbf2c6cd _has;
    _Bool __encodeLegacyGloryData;
    int _audioRoute;
    NSArray *_contacts;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_targetContacts;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int audioRoute;
@property (nonatomic) _Bool hasAudioRoute;
@property (copy, nonatomic) NSArray *contacts;
@property (nonatomic, readonly) unsigned long long contactsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSArray *targetContacts;
@property (nonatomic, readonly) unsigned long long targetContactsCount;

+ (_Bool)supportsSecureCoding;
+ (Class)contactType;
+ (Class)targetContactsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addContact:(id)arg1;
- (id)audioRouteAsString:(int)arg1;
- (int)StringAsAudioRoute:(id)arg1;
- (void)clearContacts;
- (id)contactAtIndex:(unsigned long long)arg1;
- (void)clearTargetContacts;
- (void)addTargetContacts:(id)arg1;
- (id)targetContactsAtIndex:(unsigned long long)arg1;

@end
