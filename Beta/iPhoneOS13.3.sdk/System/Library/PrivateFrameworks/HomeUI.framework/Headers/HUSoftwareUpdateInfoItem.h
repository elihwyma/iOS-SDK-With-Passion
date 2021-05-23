/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

#import <HomeUI/Swift-Protocol.h>

@class HMSoftwareUpdate, NSString;

@protocol HFHomeKitObject;

@interface HUSoftwareUpdateInfoItem : HFItem <Swift>

{
    HMSoftwareUpdate *_softwareUpdate;
    NSString *_publisher;
}

@property (nonatomic, readonly) HMSoftwareUpdate *softwareUpdate;
@property (nonatomic, readonly) NSString *publisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;

- (id)init;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithSoftwareUpdate:(id)arg1 publisher:(id)arg2;

@end
