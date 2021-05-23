/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface INGeographicalFeature : NSObject <Swift>

{
    NSString *_geographicalFeatureType;
    NSArray *_geographicalFeatureDescriptors;
}

@property (copy, nonatomic, readonly) NSString *geographicalFeatureType;
@property (copy, nonatomic, readonly) NSArray *geographicalFeatureDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithGeographicalFeatureType:(id)arg1 geographicalFeatureDescriptors:(id)arg2;

@end
