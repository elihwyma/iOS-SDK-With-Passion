/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAccessoryProfileItem.h>

@class NSArray, NSString;

@protocol HFHomeKitObject;

@interface HFCameraItem : HFAccessoryProfileItem

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;
@property (nonatomic, readonly) _Bool isCompoundItem;
@property (nonatomic, readonly) unsigned long long numberOfCompoundItems;
@property (nonatomic, readonly) id <HFHomeKitObject> primaryHomeKitObject;
@property (nonatomic, readonly) NSArray *allHomeKitObjects;

+ (void)getErrorDescription:(out id *)arg1 detailedErrorDescription:(out id *)arg2 forCameraStreamError:(id)arg3;
+ (_Bool)cameraContainsMotionServiceItem:(id)arg1;

- (id)_subclass_updateWithOptions:(id)arg1;

@end
