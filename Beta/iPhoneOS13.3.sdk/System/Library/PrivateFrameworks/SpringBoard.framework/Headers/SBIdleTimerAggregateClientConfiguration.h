/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBIdleTimerConfigurationDisablesTimerSetting, SBIdleTimerTimeoutPrecedenceSettings, SBIdleTimerTimeoutRange;

@interface SBIdleTimerAggregateClientConfiguration : NSObject <Swift>

{
    SBIdleTimerTimeoutRange *_resolvedExpirationTimeoutRange;
    SBIdleTimerConfigurationDisablesTimerSetting *_disableTimerSetting;
    SBIdleTimerTimeoutPrecedenceSettings *_minExpirationTimeoutSettings;
    SBIdleTimerTimeoutPrecedenceSettings *_maxExpirationTimeoutSettings;
}

@property (nonatomic, readonly) SBIdleTimerConfigurationDisablesTimerSetting *disableTimerSetting;
@property (nonatomic, readonly) SBIdleTimerTimeoutPrecedenceSettings *minExpirationTimeoutSettings;
@property (nonatomic, readonly) SBIdleTimerTimeoutPrecedenceSettings *maxExpirationTimeoutSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)resolvedExpirationTimeoutRange;
- (void)setMinExpirationTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2;
- (void)setMaxExpirationTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2;
- (id)expirationTimeoutIntervalRangeForPrecedence:(unsigned long long)arg1;
- (void)setDisablesTimerWithPrecedence:(unsigned long long)arg1;
- (void)setMinExpirationTimeout:(double)arg1 ifGreatestForPrecedence:(unsigned long long)arg2;
- (void)setMaxExpirationTimeout:(double)arg1 ifLeastForPrecedence:(unsigned long long)arg2;

@end
