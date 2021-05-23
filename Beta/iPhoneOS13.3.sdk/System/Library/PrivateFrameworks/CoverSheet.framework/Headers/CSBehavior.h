/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

#import <CoverSheet/Swift-Protocol.h>

@class NSString;

@interface CSBehavior : NSObject <Swift>

{
    long long _idleTimerDuration;
    long long _idleTimerMode;
    long long _idleWarnMode;
    long long _scrollingStrategy;
    unsigned long long _restrictedCapabilities;
    long long _notificationBehavior;
    long long _proximityDetectionMode;
}

@property (nonatomic) long long idleTimerDuration;
@property (nonatomic) long long idleTimerMode;
@property (nonatomic) long long idleWarnMode;
@property (nonatomic) long long scrollingStrategy;
@property (nonatomic) long long notificationBehavior;
@property (nonatomic) unsigned long long restrictedCapabilities;
@property (nonatomic) long long proximityDetectionMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;

+ (id)behavior;
+ (id)behaviorForProvider:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)areRestrictedCapabilities:(unsigned long long)arg1;
- (void)addRestrictedCapabilities:(unsigned long long)arg1;
- (void)unionBehavior:(id)arg1;
- (_Bool)isEqualToBehavior:(id)arg1;
- (void)removeRestrictedCapabilities:(unsigned long long)arg1;

@end
