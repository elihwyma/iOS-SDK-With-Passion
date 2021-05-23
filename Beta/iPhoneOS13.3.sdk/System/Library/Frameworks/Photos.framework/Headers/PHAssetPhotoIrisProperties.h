/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetPhotoIrisProperties : PHAssetPropertySet

{
    unsigned short _photoIrisVisibilityState;
    CDStruct_1b6d18a9 _photoIrisStillDisplayTime;
    CDStruct_1b6d18a9 _photoIrisVideoDuration;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 photoIrisStillDisplayTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 photoIrisVideoDuration;
@property (nonatomic, readonly) unsigned short photoIrisVisibilityState;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
