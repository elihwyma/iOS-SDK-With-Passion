//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString;

@protocol _ICPredictionManaging <NSObject>
- (void)hibernate;
- (void)warmUp;
- (NSArray *)searchForMeCardEmailAddresses;
- (NSArray *)searchForMeCardRegions;
- (void)reset;
- (void)predictedItemSelected:(NSString *)arg1;
- (NSArray *)lastCachedResultWithInitialCharacters:(NSString *)arg1;
- (NSArray *)searchWithTriggers:(NSArray *)arg1 application:(NSString *)arg2 recipient:(NSString *)arg3 localeIdentifier:(NSString *)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id )arg7;
@end

