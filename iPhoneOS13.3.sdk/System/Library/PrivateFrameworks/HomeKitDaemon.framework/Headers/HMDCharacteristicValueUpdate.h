//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSDate, NSError, NSNumber, NSString;

@interface HMDCharacteristicValueUpdate : HMFObject
{
    id _value;
    NSString *_updateIdentifier;
    NSError *_error;
    HMDDevice *_remoteDevice;
    NSDate *_valueUpatedTime;
    NSNumber *_valueUpdatedStateNumber;
}

@property(readonly, nonatomic) NSNumber *valueUpdatedStateNumber; // @synthesize valueUpdatedStateNumber=_valueUpdatedStateNumber;
@property(readonly, nonatomic) NSDate *valueUpatedTime; // @synthesize valueUpatedTime=_valueUpatedTime;
@property(readonly, nonatomic) HMDDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *updateIdentifier; // @synthesize updateIdentifier=_updateIdentifier;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (void)setValueUpdatedTime:(id)arg1 stateNumber:(id)arg2;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1 updateIdentifier:(id)arg2 remoteDevice:(id)arg3;

@end

