/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMHome, HMTrigger, NSString;

@protocol HFHomeKitObject;

@interface HFTriggerItem : HFItem <Swift>

{
    HMHome *_home;
    HMTrigger *_trigger;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMTrigger *trigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;

- (id)init;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 trigger:(id)arg2;

@end
