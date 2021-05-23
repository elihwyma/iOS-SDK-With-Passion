/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBString;

@interface _INPBGeographicalFeature : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_geographicalFeatureDescriptors;
    _INPBString *_geographicalFeatureType;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *geographicalFeatureDescriptors;
@property (nonatomic, readonly) unsigned long long geographicalFeatureDescriptorsCount;
@property (retain, nonatomic) _INPBString *geographicalFeatureType;
@property (nonatomic, readonly) _Bool hasGeographicalFeatureType;

+ (_Bool)supportsSecureCoding;
+ (Class)geographicalFeatureDescriptorsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearGeographicalFeatureDescriptors;
- (void)addGeographicalFeatureDescriptors:(id)arg1;
- (id)geographicalFeatureDescriptorsAtIndex:(unsigned long long)arg1;

@end
