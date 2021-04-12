//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface ARPPredictionContext : NSObject
{
    NSDate *_microLocationEventDate;
    NSDate *_predictionDate;
    NSDictionary *_microLocationProbabilityVector;
}

@property(readonly, nonatomic) NSDictionary *microLocationProbabilityVector; // @synthesize microLocationProbabilityVector=_microLocationProbabilityVector;
@property(readonly, copy, nonatomic) NSDate *predictionDate; // @synthesize predictionDate=_predictionDate;
@property(readonly, copy, nonatomic) NSDate *microLocationEventDate; // @synthesize microLocationEventDate=_microLocationEventDate;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithPredictionDate:(id)arg1 microLocationEventDate:(id)arg2 microLocationProbabilityVector:(id)arg3;

@end

