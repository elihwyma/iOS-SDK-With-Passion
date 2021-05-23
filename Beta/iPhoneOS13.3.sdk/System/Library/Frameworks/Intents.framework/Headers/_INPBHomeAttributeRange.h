/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBHomeAttributeRange : PBCodable <Swift>

{
    struct {
        unsigned int lowerValue:1;
        unsigned int upperValue:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    double _lowerValue;
    double _upperValue;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double lowerValue;
@property (nonatomic) _Bool hasLowerValue;
@property (nonatomic) double upperValue;
@property (nonatomic) _Bool hasUpperValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
