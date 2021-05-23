/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@class NSData, NSDate;

@interface PHAssetSceneAnalysisProperties : PHAssetPropertySet

{
    unsigned long long _sceneAnalysisVersion;
    NSDate *_sceneAnalysisTimestamp;
    NSData *_distanceIdentity;
}

@property (nonatomic, readonly) unsigned long long sceneAnalysisVersion;
@property (nonatomic, readonly) NSDate *sceneAnalysisTimestamp;
@property (nonatomic, readonly) NSData *distanceIdentity;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
