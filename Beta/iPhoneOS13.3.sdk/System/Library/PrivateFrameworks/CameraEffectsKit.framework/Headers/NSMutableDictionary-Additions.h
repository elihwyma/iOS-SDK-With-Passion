/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (Additions)

- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setInt:(int)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forIndex:(int)arg2;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (void)copyObjectFromDictionary:(id)arg1 forKey:(id)arg2;
- (void)setObjectOrRemoveIfNil:(id)arg1 forKey:(id)arg2;
- (void)copyObjectFromDictionaryRemoveIfNotPresent:(id)arg1 forKey:(id)arg2;
- (void)setRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)setRectIfNotPresent:(struct CGRect)arg1 forKey:(id)arg2;
- (void)setObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)setBoolIfNotPresent:(_Bool)arg1 forKey:(id)arg2;
- (void)setIntIfNotPresent:(int)arg1 forKey:(id)arg2;
- (void)setFloatIfNotPresent:(float)arg1 forKey:(id)arg2;
- (void)setDoubleIfNotPresent:(double)arg1 forKey:(id)arg2;
- (void)setObjectIfNotPresent:(id)arg1 forKey:(id)arg2;
- (void)copyObjectsFromDictionary:(id)arg1 forKeys:(id)arg2;
- (void)copyObjectsFromDictionaryRemoveIfNotPresent:(id)arg1 forKeys:(id)arg2;
- (void)removeObjectsForKeysOtherThan:(id)arg1;

@end
