/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBPressSequenceSettings : NSObject

{
    unsigned long long _numberOfPresses;
    double _maxDefaultPressDownDuration;
    double _maxDefaultPressUpDuration;
    double _maxDownToDownDuration;
    unsigned long long _indexOfPressDownToUseForVarianceAndGrowth;
    unsigned long long _numberOfPressDownGrowthTerms;
    unsigned long long _indexOfPressUpToUseForVarianceAndGrowth;
    unsigned long long _numberOfPressUpGrowthTerms;
    double _pressDownVariance;
    double _pressUpVariance;
}

@property (nonatomic) unsigned long long numberOfPresses;
@property (nonatomic) double maxDefaultPressDownDuration;
@property (nonatomic) double maxDefaultPressUpDuration;
@property (nonatomic) double maxDownToDownDuration;
@property (nonatomic) unsigned long long indexOfPressDownToUseForVarianceAndGrowth;
@property (nonatomic) unsigned long long numberOfPressDownGrowthTerms;
@property (nonatomic) unsigned long long indexOfPressUpToUseForVarianceAndGrowth;
@property (nonatomic) unsigned long long numberOfPressUpGrowthTerms;
@property (nonatomic) double pressDownVariance;
@property (nonatomic) double pressUpVariance;

@end
