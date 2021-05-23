/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@interface NSObject (BoxingUtils)

- (_Bool)boolValueSafe;
- (_Bool)boolValueSafe:(int *)arg1;
- (long long)int64ValueSafe;
- (long long)int64ValueSafe:(int *)arg1;
- (double)doubleValueSafe;
- (double)doubleValueSafe:(int *)arg1;
- (id)stringValueSafe;
- (const char *)utf8ValueSafe;
- (id)stringValueSafe:(int *)arg1;
- (const char *)utf8ValueSafe:(int *)arg1;

@end
