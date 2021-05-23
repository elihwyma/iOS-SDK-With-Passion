/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSMapTable.h>

@interface NSMapTable (BaseBoard)

- (void)bs_each:(CDUnknownBlockType)arg1;
- (id)bs_safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (id)bs_filter:(CDUnknownBlockType)arg1;
- (void)bs_setSafeObject:(id)arg1 forKey:(id)arg2;
- (id)bs_takeObjectForKey:(id)arg1;

@end
