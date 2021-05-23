/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface REFeatureSet : NSObject

@property (nonatomic, readonly) NSArray *allFeatures;
@property (nonatomic, readonly) NSArray *allFeatures;
@property (nonatomic, readonly) unsigned long long count;

+ (id)featureSetWithFeatures:(id)arg1;
+ (id)featureSet;
+ (id)featureSetWithFeature:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithFeature:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (id)featureWithName:(id)arg1;
- (_Bool)containsFeature:(id)arg1;
- (void)enumerateFeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)intersectsFeatureSet:(id)arg1;
- (_Bool)isEqualToFeatureSet:(id)arg1;
- (id)initWithFeatureSet:(id)arg1;
- (_Bool)isSubsetOfFeatureSet:(id)arg1;

@end
