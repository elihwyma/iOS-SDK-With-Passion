/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSMutableDictionary.h>

@interface NSMutableDictionary (PDAdditions)

- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setLongLong:(long long)arg1 forKey:(id)arg2;
- (void)setInt32:(int)arg1 forKey:(id)arg2;
- (void)safelySetObject:(id)arg1 forKey:(id)arg2;
- (void)setObjectOrNull:(id)arg1 forKey:(id)arg2;
- (void)setUnsignedLongLong:(unsigned long long)arg1 forKey:(id)arg2;

@end
