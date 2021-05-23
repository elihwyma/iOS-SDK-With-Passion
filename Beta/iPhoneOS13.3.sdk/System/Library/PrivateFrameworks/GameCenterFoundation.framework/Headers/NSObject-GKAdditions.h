/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@interface NSObject (GKAdditions)

+ (id)_gkDefaultKeymap;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)_gkRecursiveDescription;
- (id)_gkDescription;
- (void)_gkPerformSelector:(SEL)arg1;
- (void)_gkPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)_gkAddObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_gkRemoveObserverWithBlockToken:(id)arg1;
- (id)_gkInvokeSelector:(SEL)arg1;
- (void)_gkPerformSelector:(SEL)arg1 withNullableObject:(id)arg2;
- (id)_gkInvokeSelector:(SEL)arg1 withNullableObject:(id)arg2;
- (void)_gkPopulateWithObject:(id)arg1 keymap:(id)arg2;
- (id)_gkInvokeSelector:(SEL)arg1 withObject:(id)arg2;
- (id)_gkViewDebuggingChildKeys;
- (id)_gkViewDebuggingChildren;

@end
