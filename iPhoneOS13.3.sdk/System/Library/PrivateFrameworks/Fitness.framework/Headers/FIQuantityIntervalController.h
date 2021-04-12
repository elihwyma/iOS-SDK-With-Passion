//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Fitness/FIIntervalController-Protocol.h>

@class FIIntervalQuantityTrigger, FIMutableTimeSliceGroup;

@interface FIQuantityIntervalController : NSObject <FIIntervalController>
{
    FIIntervalQuantityTrigger *_quantityTrigger;
    FIMutableTimeSliceGroup *_sliceGroup;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL allSlicesFinalized; // @dynamic allSlicesFinalized;
- (BOOL)isIntervalEndDate;
@property(readonly, nonatomic) BOOL intervalComplete; // @dynamic intervalComplete;
- (BOOL)_updateTriggerWithSample:(id)arg1;
- (void)addSample:(id)arg1;
- (id)initWithIntervalQuantityType:(id)arg1 threshold:(id)arg2 startDate:(id)arg3 trackedQuantityTypes:(id)arg4;

@end

