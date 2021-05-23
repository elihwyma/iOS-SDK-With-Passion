/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (BaseBoard)

- (id)bs_safeStringForKey:(id)arg1;
- (id)bs_safeDictionaryForKey:(id)arg1;
- (void)bs_each:(CDUnknownBlockType)arg1;
- (id)bs_safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (id)bs_filter:(CDUnknownBlockType)arg1;
- (_Bool)bs_boolForKey:(id)arg1;
- (id)bs_safeNumberForKey:(id)arg1;
- (id)bs_safeURLForKey:(id)arg1;
- (id)bs_safeArrayForKey:(id)arg1;
- (id)bs_dictionaryByAddingEntriesFromDictionary:(id)arg1;

@end
