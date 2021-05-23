/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHFacePropertySet.h>

@class NSString, PHFaceprint;

@interface PHFaceClusteringProperties : PHFacePropertySet

{
    PHFaceprint *_faceprint;
    NSString *_groupingIdentifier;
}

@property (nonatomic, readonly) PHFaceprint *faceprint;
@property (nonatomic, readonly) NSString *groupingIdentifier;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(_Bool)arg3;

@end
