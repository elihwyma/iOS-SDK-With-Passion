//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>

@class HMHome, HMTrigger;
@protocol HFHomeKitObject;

@interface HFTriggerItem : HFItem <HFHomeKitItemProtocol>
{
    HMHome *_home;
    HMTrigger *_trigger;
}

@property(readonly, nonatomic) HMTrigger *trigger; // @synthesize trigger=_trigger;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 trigger:(id)arg2;

@end

