//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMICameraVideoAnalyzer, HMICameraVideoAnalyzerResult, HMICameraVideoAnalyzerSignificantEvent, HMICameraVideoFragment, NSError;

@protocol HMICameraVideoAnalyzerDelegate <NSObject>
- (void)analyzer:(HMICameraVideoAnalyzer *)arg1 didFailAnalysisForFragment:(HMICameraVideoFragment *)arg2 withError:(NSError *)arg3;
- (void)analyzer:(HMICameraVideoAnalyzer *)arg1 didFindSignificantEvent:(HMICameraVideoAnalyzerSignificantEvent *)arg2 inFragment:(HMICameraVideoFragment *)arg3;
- (void)analyzer:(HMICameraVideoAnalyzer *)arg1 didNotAnalyzeFragment:(HMICameraVideoFragment *)arg2 withResult:(HMICameraVideoAnalyzerResult *)arg3;
- (void)analyzer:(HMICameraVideoAnalyzer *)arg1 didAnalyzeFragment:(HMICameraVideoFragment *)arg2 withResult:(HMICameraVideoAnalyzerResult *)arg3;
@end
