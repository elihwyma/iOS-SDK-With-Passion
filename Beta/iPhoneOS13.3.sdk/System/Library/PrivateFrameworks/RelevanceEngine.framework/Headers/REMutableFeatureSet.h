/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeatureSet.h>

@interface REMutableFeatureSet : REFeatureSet

- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)addFeature:(id)arg1;
- (id)initWithFeature:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (void)removeFeature:(id)arg1;
- (void)minusFeatureSet:(id)arg1;
- (void)unionFeatureSet:(id)arg1;
- (void)intersetFeatureSet:(id)arg1;
- (void)removeAllFeatures;

@end
