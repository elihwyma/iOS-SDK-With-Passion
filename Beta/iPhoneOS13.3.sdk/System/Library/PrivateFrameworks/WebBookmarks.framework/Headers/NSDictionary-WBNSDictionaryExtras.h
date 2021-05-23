/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (WBNSDictionaryExtras)

- (id)wb_stringForKey:(id)arg1 isValid:(_Bool *)arg2;
- (id)wb_URLForKey:(id)arg1 isValid:(_Bool *)arg2;
- (id)wb_numberForKey:(id)arg1;
- (_Bool)wb_boolForKey:(id)arg1;
- (id)wb_numberForKey:(id)arg1 isValid:(_Bool *)arg2;
- (id)wb_dictionaryForKey:(id)arg1 isValid:(_Bool *)arg2;
- (id)wb_arrayForKey:(id)arg1 isValid:(_Bool *)arg2;
- (id)wb_objectOfType:(Class)arg1 forKey:(id)arg2 isValid:(_Bool *)arg3;
- (id)wb_dateForKey:(id)arg1 isValid:(_Bool *)arg2;

@end
