//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@interface SGDataDetectorDissector : SGPipelineDissector
{
    long long _scannerOptions;
}

+ (BOOL)stringHasDatesOrTimes:(id)arg1;
+ (void)resetUnusedScannersForTesting;
+ (void)initialize;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)detectionsInPlainText:(id)arg1 withEligibleRegions:(id)arg2 ddSignature:(struct __DDResult )arg3;
- (id)init;
- (id)initWithSigs:(BOOL)arg1;

@end

