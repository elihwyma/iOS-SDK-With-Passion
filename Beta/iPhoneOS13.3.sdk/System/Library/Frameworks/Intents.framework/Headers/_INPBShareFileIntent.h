/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBShareFileIntent : PBCodable <Swift>

{
    struct {
        unsigned int shareMode:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _shareMode;
    NSArray *_entityNames;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_recipients;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *entityNames;
@property (nonatomic, readonly) unsigned long long entityNamesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (nonatomic) int shareMode;
@property (nonatomic) _Bool hasShareMode;

+ (_Bool)supportsSecureCoding;
+ (Class)entityNameType;
+ (Class)recipientsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearEntityNames;
- (void)addEntityName:(id)arg1;
- (id)entityNameAtIndex:(unsigned long long)arg1;
- (void)clearRecipients;
- (void)addRecipients:(id)arg1;
- (id)recipientsAtIndex:(unsigned long long)arg1;
- (id)shareModeAsString:(int)arg1;
- (int)StringAsShareMode:(id)arg1;

@end
