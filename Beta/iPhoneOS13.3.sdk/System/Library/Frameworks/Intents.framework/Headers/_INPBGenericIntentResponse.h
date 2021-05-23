/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBGenericIntentResponse : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBIntentMetadata *_metadata;
    NSArray *_properties;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBIntentMetadata *metadata;
@property (nonatomic, readonly) _Bool hasMetadata;
@property (copy, nonatomic) NSArray *properties;
@property (nonatomic, readonly) unsigned long long propertiesCount;

+ (_Bool)supportsSecureCoding;
+ (Class)propertiesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
- (id)propertiesAtIndex:(unsigned long long)arg1;

@end
