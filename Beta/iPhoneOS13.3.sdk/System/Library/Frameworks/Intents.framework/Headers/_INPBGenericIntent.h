/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBGenericIntent : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSString *_domain;
    _INPBIntentMetadata *_metadata;
    NSArray *_parameters;
    NSString *_verb;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic, readonly) _Bool hasDomain;
@property (retain, nonatomic) _INPBIntentMetadata *metadata;
@property (nonatomic, readonly) _Bool hasMetadata;
@property (copy, nonatomic) NSArray *parameters;
@property (nonatomic, readonly) unsigned long long parametersCount;
@property (copy, nonatomic) NSString *verb;
@property (nonatomic, readonly) _Bool hasVerb;

+ (_Bool)supportsSecureCoding;
+ (Class)parametersType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearParameters;
- (id)parametersAtIndex:(unsigned long long)arg1;
- (void)addParameters:(id)arg1;

@end
