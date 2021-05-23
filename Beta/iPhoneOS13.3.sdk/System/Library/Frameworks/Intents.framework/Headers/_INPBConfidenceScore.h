/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBConfidenceScore : PBCodable <Swift>

{
    struct {
        unsigned int aggregateScore:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    float _aggregateScore;
    NSArray *_components;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float aggregateScore;
@property (nonatomic) _Bool hasAggregateScore;
@property (copy, nonatomic) NSArray *components;
@property (nonatomic, readonly) unsigned long long componentsCount;

+ (_Bool)supportsSecureCoding;
+ (Class)componentsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearComponents;
- (void)addComponents:(id)arg1;
- (id)componentsAtIndex:(unsigned long long)arg1;

@end
