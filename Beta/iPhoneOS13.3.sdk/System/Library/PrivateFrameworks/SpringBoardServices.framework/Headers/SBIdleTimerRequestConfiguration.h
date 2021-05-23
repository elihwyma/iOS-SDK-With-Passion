/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <IdleTimerServices/ITIdleTimerConfiguration.h>

@class NSNumber;

@interface SBIdleTimerRequestConfiguration : ITIdleTimerConfiguration

{
    NSNumber *_boxed_minExpirationTimeout;
    NSNumber *_boxed_maxExpirationTimeout;
    unsigned long long _precedence;
}

@property (retain, nonatomic, getter=_boxed_minExpirationTimeout, setter=_setBoxed_minExpirationTimeout:) NSNumber *boxed_minExpirationTimeout;
@property (retain, nonatomic, getter=_boxed_maxExpirationTimeout, setter=_setBoxed_maxExpirationTimeout:) NSNumber *boxed_maxExpirationTimeout;
@property (nonatomic, readonly) unsigned long long idleEventMask;
@property (nonatomic) unsigned long long precedence;
@property (nonatomic) double minExpirationTimeout;
@property (nonatomic, readonly) _Bool hasMinExpirationTimeout;
@property (nonatomic) double maxExpirationTimeout;
@property (nonatomic, readonly) _Bool hasMaxExpirationTimeout;

+ (id)configurationWithMinimumExpirationTimeout:(double)arg1;
+ (id)configurationWithMaximumExpirationTimeout:(double)arg1;
+ (id)configurationWithMinimumExpirationTimeout:(double)arg1 maximumExpirationTimeout:(double)arg2;
+ (id)configurationWithIdleEventHandler:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithConfiguration:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)_setIdleEventHandler:(id)arg1;

@end
