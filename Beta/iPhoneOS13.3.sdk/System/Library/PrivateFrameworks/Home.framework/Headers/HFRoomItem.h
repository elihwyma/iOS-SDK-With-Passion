/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMHome, HMRoom, NSString;

@protocol HFHomeKitObject;

@interface HFRoomItem : HFItem <Swift>

{
    HMRoom *_room;
    HMHome *_home;
}

@property (nonatomic, readonly) HMRoom *room;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;

- (id)init;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (id)togglePowerState;

@end
