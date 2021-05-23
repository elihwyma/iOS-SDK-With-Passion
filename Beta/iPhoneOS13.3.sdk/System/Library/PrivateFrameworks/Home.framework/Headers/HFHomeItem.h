/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMHome, NSString;

@protocol HFHomeKitObject;

@interface HFHomeItem : HFItem <Swift>

{
    HMHome *_home;
}

@property (nonatomic, readonly) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;

- (id)init;
- (id)initWithHome:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;

@end
