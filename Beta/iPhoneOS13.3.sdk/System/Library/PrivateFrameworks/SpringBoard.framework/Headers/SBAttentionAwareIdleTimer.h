/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBIdleTimerBase.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBAttentionAwarenessClient, SBIdleTimerDescriptor;

@interface SBAttentionAwareIdleTimer : SBIdleTimerBase <Swift>

{
    unsigned long long _configurationGeneration;
    NSString *_configurationIdentifier;
    _Bool _requiresManualReset;
    SBIdleTimerDescriptor *_descriptor;
    SBAttentionAwarenessClient *_attentionAwarenessClient;
    double _timeMultiplier;
    long long _expectation;
}

@property (retain, nonatomic) SBAttentionAwarenessClient *attentionAwarenessClient;
@property (nonatomic) double timeMultiplier;
@property (nonatomic) long long expectation;
@property (nonatomic) _Bool requiresManualReset;
@property (nonatomic, readonly, getter=_configurationGeneration) unsigned long long configurationGeneration;
@property (copy, nonatomic) SBIdleTimerDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)reset;
- (_Bool)isDisabled;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setActivated:(_Bool)arg1;
- (_Bool)isActivated;
- (id)initWithConfigurationIdentifier:(id)arg1;
- (void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4;
- (void)clientDidResetForUserAttention:(id)arg1;
- (id)initWithConfigurationIdentifier:(id)arg1 attentionAwarenessClient:(id)arg2;
- (void)_resetExpectation;
- (void)_reconfigureAttentionClientAndReset:(_Bool)arg1;
- (double)_effectiveWarnTimeout;
- (double)_effectiveQuickUnwarnTimeoutForWarnTimeout:(double)arg1;
- (double)_effectiveExpireTimeout;
- (void)_stopIfManual;
- (double)_effectiveTimeoutForBaseTimeout:(double)arg1;
- (id)_timeoutDictionaryForDescriptor:(id)arg1;

@end
