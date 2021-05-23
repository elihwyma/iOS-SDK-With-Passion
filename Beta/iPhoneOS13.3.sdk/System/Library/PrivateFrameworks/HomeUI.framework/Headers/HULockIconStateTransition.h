/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@interface HULockIconStateTransition : NSObject

{
    unsigned long long _fromState;
    unsigned long long _toState;
}

@property (nonatomic, readonly) unsigned long long fromState;
@property (nonatomic, readonly) unsigned long long toState;

+ (id)transitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;

@end
