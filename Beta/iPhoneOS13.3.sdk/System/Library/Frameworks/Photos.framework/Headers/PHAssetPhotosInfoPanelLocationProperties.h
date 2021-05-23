/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@class NSData;

@interface PHAssetPhotosInfoPanelLocationProperties : PHAssetPropertySet

{
    NSData *_placeAnnotationData;
}

@property (nonatomic, readonly) NSData *placeAnnotationData;

+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
