/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@class NSData;

@interface PHAssetSceneprintProperties : PHAssetPropertySet

{
    NSData *_sceneprint;
}

@property (nonatomic, readonly) NSData *sceneprint;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
