/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWInferenceDataRequirement.h>

#import <Celestial/Swift-Protocol.h>

@class NSArray;

@interface BWInferenceMetadataRequirement : BWInferenceDataRequirement <Swift>

{
    short _mappingOption;
    NSArray *_metadataKeys;
}

@property (copy, nonatomic, readonly) NSArray *metadataKeys;
@property (nonatomic, readonly) short mappingOption;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadataKeys:(id)arg1;
- (id)initWithMetadataKeys:(id)arg1 mappingOption:(short)arg2;
- (id)initWithMetadataRequirement:(id)arg1;

@end
