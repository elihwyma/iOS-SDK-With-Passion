/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface RBAssertionTransientState : NSObject

{
    NSMutableDictionary *_cpuUsageViolationPoliciesByRole;
    NSMutableSet *_tags;
}

@property (nonatomic, readonly) NSSet *tags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)addTag:(id)arg1;
- (unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)arg1;
- (void)setMaxCPUUsageViolationPolicy:(unsigned long long)arg1 forRole:(unsigned char)arg2;
- (void)unionState:(id)arg1;

@end
