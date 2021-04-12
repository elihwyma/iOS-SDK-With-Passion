//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>

@class HMHome, HMResidentDevice;
@protocol HFHomeKitObject;

@interface HFResidentDeviceStatusDetailsItem : HFItem <HFHomeKitItemProtocol>
{
    HMHome *_home;
    HMResidentDevice *_residentDevice;
}

@property(readonly, nonatomic) HMResidentDevice *residentDevice; // @synthesize residentDevice=_residentDevice;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)initWithHome:(id)arg1 residentDevice:(id)arg2;
- (id)init;

@end

