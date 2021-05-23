/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject

{
    Class _defaultClass;
    NSMutableDictionary *_dict;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)keys;
- (id)deepCopy;
- (id)initWithDefaultClass:(Class)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 isDeepCopy:(_Bool)arg2;
- (id)_mutableCopyOfFinalDictionaryWithZone:(struct _NSZone *)arg1 isDeepCopy:(_Bool)arg2;
- (id)finalDictionary;
- (id)existingObjectForKey:(id)arg1;

@end
