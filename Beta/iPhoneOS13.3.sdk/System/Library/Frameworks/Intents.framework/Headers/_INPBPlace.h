/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBString;

@interface _INPBPlace : PBCodable <Swift>

{
    struct {
        unsigned int personalPlaceType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _personalPlaceType;
    NSArray *_placeDescriptors;
    _INPBString *_placeSubType;
    _INPBString *_placeType;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int personalPlaceType;
@property (nonatomic) _Bool hasPersonalPlaceType;
@property (copy, nonatomic) NSArray *placeDescriptors;
@property (nonatomic, readonly) unsigned long long placeDescriptorsCount;
@property (retain, nonatomic) _INPBString *placeSubType;
@property (nonatomic, readonly) _Bool hasPlaceSubType;
@property (retain, nonatomic) _INPBString *placeType;
@property (nonatomic, readonly) _Bool hasPlaceType;

+ (_Bool)supportsSecureCoding;
+ (Class)placeDescriptorsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)personalPlaceTypeAsString:(int)arg1;
- (int)StringAsPersonalPlaceType:(id)arg1;
- (void)clearPlaceDescriptors;
- (void)addPlaceDescriptors:(id)arg1;
- (id)placeDescriptorsAtIndex:(unsigned long long)arg1;

@end
