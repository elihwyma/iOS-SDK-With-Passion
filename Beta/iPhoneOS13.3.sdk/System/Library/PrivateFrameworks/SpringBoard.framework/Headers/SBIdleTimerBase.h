/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSHashTable, NSString;

@interface SBIdleTimerBase : NSObject <Swift>

{
    NSHashTable *_observers;
}

@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isDisabled) _Bool disabled;
@property (nonatomic, getter=isActivated) _Bool activated;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)isEqualToTimer:(id)arg1;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)addIdleTimerObserver:(id)arg1;
- (void)removeIdleTimerObserver:(id)arg1;
- (void)_makeObserversPerformSelector:(SEL)arg1;
- (void)_logExpirationTimeout:(double)arg1;
- (void)removeAllIdleTimerObservers;

@end
