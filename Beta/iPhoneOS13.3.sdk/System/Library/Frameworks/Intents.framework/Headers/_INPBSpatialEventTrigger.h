/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBLocationValue;

@interface _INPBSpatialEventTrigger : PBCodable <Swift>

{
    struct {
        unsigned int event:1;
        unsigned int mobileSpace:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _event;
    int _mobileSpace;
    _INPBLocationValue *_location;
    NSArray *_suggestedValues;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int event;
@property (nonatomic) _Bool hasEvent;
@property (retain, nonatomic) _INPBLocationValue *location;
@property (nonatomic, readonly) _Bool hasLocation;
@property (nonatomic) int mobileSpace;
@property (nonatomic) _Bool hasMobileSpace;
@property (copy, nonatomic) NSArray *suggestedValues;
@property (nonatomic, readonly) unsigned long long suggestedValuesCount;

+ (_Bool)supportsSecureCoding;
+ (Class)suggestedValuesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)eventAsString:(int)arg1;
- (int)StringAsEvent:(id)arg1;
- (id)mobileSpaceAsString:(int)arg1;
- (int)StringAsMobileSpace:(id)arg1;
- (void)clearSuggestedValues;
- (void)addSuggestedValues:(id)arg1;
- (id)suggestedValuesAtIndex:(unsigned long long)arg1;

@end
