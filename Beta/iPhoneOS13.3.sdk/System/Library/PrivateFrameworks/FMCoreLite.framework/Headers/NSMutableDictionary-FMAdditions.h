/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (FMAdditions)

- (void)safelySetObject:(id)arg1 forKey:(id)arg2;
- (void)fm_safelySetObject:(id)arg1 forKey:(id)arg2;
- (void)fm_safelyMapKey:(id)arg1 toObject:(id)arg2;
- (void)fm_safeSetObject:(id)arg1 forKey:(id)arg2;
- (id)fm_objectForKey:(id)arg1 withDefaultValue:(CDUnknownBlockType)arg2;
- (void)safelyMapKey:(id)arg1 toObject:(id)arg2;

@end
