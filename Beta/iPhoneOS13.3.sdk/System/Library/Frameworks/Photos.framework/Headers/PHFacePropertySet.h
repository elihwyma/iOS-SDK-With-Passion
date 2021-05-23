/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSString, PHFace;

@interface PHFacePropertySet : NSObject

{
    PHFace *_face;
}

@property (weak, nonatomic, readonly) PHFace *face;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (_Bool)isToMany;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToPrefetch;

- (id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(_Bool)arg3;

@end
