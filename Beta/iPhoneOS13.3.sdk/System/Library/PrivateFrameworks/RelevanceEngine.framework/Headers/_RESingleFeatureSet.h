/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeatureSet.h>

@class REFeature;

@interface _RESingleFeatureSet : REFeatureSet

{
    REFeature *_feature;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithFeature:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (id)featureWithName:(id)arg1;
- (_Bool)containsFeature:(id)arg1;
- (id)allFeatures;

@end
