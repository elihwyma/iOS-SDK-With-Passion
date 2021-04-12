//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaPropertyRequest, NSDate, NSError, NSNumber;

@interface HMDMediaPropertyResponse : HMFObject
{
    HMDMediaPropertyRequest *_request;
    id _value;
    NSError *_error;
    NSNumber *_stateNumber;
    NSDate *_valueUpdatedTime;
}

+ (id)responseWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4;
+ (id)responseWithRequest:(id)arg1 error:(id)arg2;
+ (NSArray )responsesFromSerializedResponse:(NSDictionary )arg1 requests:(id)arg2 home:(id)arg3;
+ (NSDictionary )serializeResponses:(id)arg1;
+ (NSArray )groupedProfileResponses:(id)arg1;
+ (id)propertyResponsesFromRequests:(id)arg1 error:(id)arg2;
@property(readonly, nonatomic) NSDate *valueUpdatedTime; // @synthesize valueUpdatedTime=_valueUpdatedTime;
@property(readonly, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) HMDMediaPropertyRequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4;
- (id)initWithRequest:(id)arg1 error:(id)arg2;

@end

