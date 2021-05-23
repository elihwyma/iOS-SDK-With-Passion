/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSUserDefaults.h>

@interface NSUserDefaults (BoxingUtils)

- (_Bool)boolValueSafeForKey:(id)arg1 status:(int *)arg2;
- (long long)int64ValueSafeForKey:(id)arg1 status:(int *)arg2;
- (double)doubleValueSafeForKey:(id)arg1 status:(int *)arg2;
- (id)stringValueSafeForKey:(id)arg1 status:(int *)arg2;
- (const char *)utf8ValueSafeForKey:(id)arg1 status:(int *)arg2;
- (_Bool)boolValueSafeForKey:(id)arg1;
- (long long)int64ValueSafeForKey:(id)arg1;
- (double)doubleValueSafeForKey:(id)arg1;
- (id)stringValueSafeForKey:(id)arg1;
- (const char *)utf8ValueSafeForKey:(id)arg1;

@end
