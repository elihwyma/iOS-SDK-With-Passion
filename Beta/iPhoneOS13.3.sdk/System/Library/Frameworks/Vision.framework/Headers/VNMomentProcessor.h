/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class VNMPContext;

__attribute__((visibility("hidden")))
@interface VNMomentProcessor : NSObject

{
    VNMPContext *_context;
}

@property (retain, nonatomic) VNMPContext *context;

+ (id)sortImageDescriptorsChronologically:(id)arg1;

- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (id)processImagesFromDataProvider:(id)arg1 error:(id *)arg2;
- (id)computeClusteringOfImageDescriptors:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;
- (id)computeNaturalClusteringOfImageDescriptors:(id)arg1 error:(id *)arg2;
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 error:(id *)arg2;
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 assumeDescriptorsAreSorted:(_Bool)arg2 error:(id *)arg3;
- (id)convertClusterNodesListToDescriptorsList:(vector_e14a6833)arg1;
- (id)performClustersPostprocessing:(id)arg1 error:(id *)arg2;
- (id)computeClusteringForClusteringTree:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;
- (id)computeClusteringForClusteringTree:(id)arg1 usingThreshold:(float)arg2 error:(id *)arg3;
- (id)computeNaturalClusteringForClusteringTree:(id)arg1 error:(id *)arg2;
- (id)getKey:(id)arg1 fromDictionary:(id)arg2 withDefault:(id)arg3;

@end
