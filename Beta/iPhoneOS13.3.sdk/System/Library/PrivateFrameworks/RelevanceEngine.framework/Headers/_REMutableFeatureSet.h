/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REMutableFeatureSet.h>

@class NSMutableSet;

@interface _REMutableFeatureSet : REMutableFeatureSet

{
    NSMutableSet *_names;
    NSMutableSet *_features;
}

- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)addFeature:(id)arg1;
- (id)initWithFeature:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (id)featureWithName:(id)arg1;
- (void)removeFeature:(id)arg1;
- (_Bool)containsFeature:(id)arg1;
- (void)removeAllFeatures;

@end
