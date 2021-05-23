/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (TVMLKitAdditions)

- (id)tv_lookupValueForKey:(id)arg1 expectedClass:(Class)arg2;
- (id)tv_stringForKey:(id)arg1;
- (id)tv_dictionaryForKey:(id)arg1;
- (id)tv_arrayForKey:(id)arg1;
- (id)tv_numberForKey:(id)arg1;
- (_Bool)tv_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;

@end
