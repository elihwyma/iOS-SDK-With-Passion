/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSNotificationCenter.h>

@interface NSNotificationCenter (SafariCoreExtras)

- (void)safari_addObserver:(id)arg1 selector:(SEL)arg2 forUserDefaultKey:(id)arg3;
- (void)safari_removeObserver:(id)arg1 forUserDefaultKey:(id)arg2;
- (id)safari_addObserverForUserDefaultKey:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end
