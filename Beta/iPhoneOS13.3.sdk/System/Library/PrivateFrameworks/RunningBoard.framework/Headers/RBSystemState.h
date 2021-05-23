/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface RBSystemState : NSObject

{
    NSMutableSet *_tags;
    _Bool _preventLaunch;
    _Bool _preventIdleSleep;
    NSMutableSet *_preventIdleSleepIdentifiers;
    _Bool _throttleBestEffortNetworking;
}

@property (nonatomic, readonly) _Bool preventIdleSleep;
@property (nonatomic, readonly) _Bool preventLaunch;
@property (nonatomic, readonly) NSSet *preventIdleSleepIdentifiers;
@property (nonatomic, readonly) _Bool throttleBestEffortNetworking;
@property (copy, nonatomic, readonly) NSSet *tags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
