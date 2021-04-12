//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HAMenstrualAlgorithmsPrediction : NSObject
{
    BOOL _isOngoingMenstruation;
    unsigned int _julianDayOfWindowStart;
    NSArray *_startProbability;
    NSArray *_endProbability;
    NSArray *_convolvedProbability;
    double _startProbabilityMean;
    double _endProbabilityMean;
    double _convolvedProbabilityMean;
    double _startProbabilityStdDev;
    double _endProbabilityStdDev;
    double _convolvedProbabilityStdDev;
    NSRange _lowRange;
}

@property(nonatomic) BOOL isOngoingMenstruation; // @synthesize isOngoingMenstruation=_isOngoingMenstruation;
@property(nonatomic) NSRange lowRange; // @synthesize lowRange=_lowRange;
@property(nonatomic) double convolvedProbabilityStdDev; // @synthesize convolvedProbabilityStdDev=_convolvedProbabilityStdDev;
@property(nonatomic) double endProbabilityStdDev; // @synthesize endProbabilityStdDev=_endProbabilityStdDev;
@property(nonatomic) double startProbabilityStdDev; // @synthesize startProbabilityStdDev=_startProbabilityStdDev;
@property(nonatomic) double convolvedProbabilityMean; // @synthesize convolvedProbabilityMean=_convolvedProbabilityMean;
@property(nonatomic) double endProbabilityMean; // @synthesize endProbabilityMean=_endProbabilityMean;
@property(nonatomic) double startProbabilityMean; // @synthesize startProbabilityMean=_startProbabilityMean;
@property(retain, nonatomic) NSArray *convolvedProbability; // @synthesize convolvedProbability=_convolvedProbability;
@property(retain, nonatomic) NSArray *endProbability; // @synthesize endProbability=_endProbability;
@property(retain, nonatomic) NSArray *startProbability; // @synthesize startProbability=_startProbability;
@property(nonatomic) unsigned int julianDayOfWindowStart; // @synthesize julianDayOfWindowStart=_julianDayOfWindowStart;
// - (void).cxx_destruct;

@end

