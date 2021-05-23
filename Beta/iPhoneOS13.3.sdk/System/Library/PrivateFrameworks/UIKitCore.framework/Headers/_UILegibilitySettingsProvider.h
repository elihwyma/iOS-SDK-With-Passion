/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface _UILegibilitySettingsProvider : NSObject

{
    _Bool _hasContrast;
    _Bool _accumulatorIsPrimed;
    double _mostRecentSaturation;
    double _accumulatedSaturation;
    double _mostRecentBrightness;
    double _accumulatedBrightness;
    UIColor *_contentColor;
    double _mostRecentContrast;
    double _accumulatedContrast;
    double _mostRecentLuminance;
    double _accumulatedLuminance;
    double _nextChangeBarrier;
    long long _currentStyle;
}

@property (retain, nonatomic) UIColor *contentColor;
@property (nonatomic) double mostRecentBrightness;
@property (nonatomic) double accumulatedBrightness;
@property (nonatomic) double mostRecentContrast;
@property (nonatomic) double accumulatedContrast;
@property (nonatomic) double mostRecentLuminance;
@property (nonatomic) double accumulatedLuminance;
@property (nonatomic) double mostRecentSaturation;
@property (nonatomic) double accumulatedSaturation;
@property (nonatomic) _Bool hasContrast;
@property (nonatomic) _Bool accumulatorIsPrimed;
@property (nonatomic) double nextChangeBarrier;
@property (nonatomic) long long currentStyle;

+ (long long)styleForContentColor:(id)arg1 contrast:(double)arg2;
+ (long long)styleForContentColor:(id)arg1;

- (void)dealloc;
- (id)settings;
- (void)clearContentColorAccumulator;
- (_Bool)accumulateChangesToContentColor:(id)arg1 contrast:(double)arg2;
- (_Bool)accumulateChangesToContentColor:(id)arg1;

@end
