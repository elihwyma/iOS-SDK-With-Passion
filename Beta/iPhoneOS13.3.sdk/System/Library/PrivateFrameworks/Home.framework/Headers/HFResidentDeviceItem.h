/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMResidentDevice, NSString;

@protocol HFHomeKitObject;

@interface HFResidentDeviceItem : HFItem <Swift>

{
    HMResidentDevice *_residentDevice;
}

@property (nonatomic, readonly) HMResidentDevice *residentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithResidentDevice:(id)arg1;

@end
