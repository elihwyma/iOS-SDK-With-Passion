/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

#import <ModelIO/Swift-Protocol.h>

@class MDLScatteringFunction, NSMutableArray, NSString;

@interface MDLMaterial : NSObject <Swift>

{
    NSMutableArray *_userProperties;
    NSMutableArray *_builtinProperties;
    MDLScatteringFunction *_scatteringFunction;
    NSString *_name;
    MDLMaterial *_baseMaterial;
    unsigned long long _materialFace;
}

@property (retain, nonatomic, readonly) MDLScatteringFunction *scatteringFunction;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) MDLMaterial *baseMaterial;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) unsigned long long materialFace;

- (id)init;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllProperties;
- (id)propertyNamed:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)removeProperty:(id)arg1;
- (id)initWithName:(id)arg1 scatteringFunction:(id)arg2;
- (id)propertyWithSemantic:(unsigned long long)arg1;
- (void)loadTexturesUsingArchiveAssetResolver:(id)arg1 cache:(id)arg2;
- (void)resolveTexturesWithResolver:(id)arg1;
- (void)loadTexturesUsingResolver:(id)arg1 cache:(id)arg2;
- (void)setScatteringFunction:(id)arg1;
- (id)propertiesWithSemantic:(unsigned long long)arg1;
- (void)loadTexturesUsingResolver:(id)arg1;
- (id)initWithName:(id)arg1 physicallyPlausibleBSDF:(struct PhysicallyPlausibleDistribution *)arg2;
- (void)conformToMatProperties;
- (struct BidirectionalScatteringDistributionFunction *)bsdf;

@end
