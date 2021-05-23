/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface HDSessionAssertionGroup : NSObject

{
    NSMutableSet *_allAssertions;
    NSMutableDictionary *_assertionsForState;
    long long _state;
}

@property (nonatomic, readonly) long long state;

- (id)init;
- (void)invalidate;
- (void)transitionToState:(long long)arg1;
- (void)_transitionToNewAssertions:(id)arg1;
- (void)setupState:(long long)arg1 withAssertions:(id)arg2;

@end
