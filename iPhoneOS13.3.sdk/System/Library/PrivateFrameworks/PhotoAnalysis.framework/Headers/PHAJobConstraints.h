//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PHAJobConstraints : NSObject <NSCopying>
{
    BOOL _canRunAutomaticBackgroundAnalysis;
    BOOL _canRunAutomaticForegroundAnalysis;
    BOOL _canRunUserInitiatedForegroundAnalysis;
    BOOL _canUseNetwork;
    BOOL _turboMode;
    BOOL _cancelsTurboMode;
}

+ (id)constraintsWithAllAllowances;
+ (id)constraintsWithNoAllowances;
@property(nonatomic) BOOL cancelsTurboMode; // @synthesize cancelsTurboMode=_cancelsTurboMode;
@property(nonatomic, getter=isTurboMode) BOOL turboMode; // @synthesize turboMode=_turboMode;
@property(readonly, nonatomic) BOOL canUseNetwork; // @synthesize canUseNetwork=_canUseNetwork;
@property(readonly, nonatomic) BOOL canRunUserInitiatedForegroundAnalysis; // @synthesize canRunUserInitiatedForegroundAnalysis=_canRunUserInitiatedForegroundAnalysis;
@property(readonly, nonatomic) BOOL canRunAutomaticForegroundAnalysis; // @synthesize canRunAutomaticForegroundAnalysis=_canRunAutomaticForegroundAnalysis;
@property(readonly, nonatomic) BOOL canRunAutomaticBackgroundAnalysis; // @synthesize canRunAutomaticBackgroundAnalysis=_canRunAutomaticBackgroundAnalysis;
- (id)statusAsDictionary;
- (unsigned int)qosClassForProcessing;
- (BOOL)isEqualToConstraints:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (void)applyConstraints:(id)arg1 usingMask:(id)arg2;
- (id)asBitString;
- (id)initFromBitString:(id)arg1;
- (id)initWithCanRunAutomaticBackgroundAnalysis:(BOOL)arg1 canRunAutomaticForegroundAnalysis:(BOOL)arg2 canRunUserInitiatedForegroundAnalysis:(BOOL)arg3 canUseNetwork:(BOOL)arg4;

@end

