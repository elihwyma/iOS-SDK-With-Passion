/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CNDictionaryPrimitiveUserDefaults : NSObject

{
    NSMutableDictionary *_preferences;
    unsigned long long _synchronizeCount;
    unsigned long long _setupAutosyncCount;
}

@property (readonly) unsigned long long synchronizeCount;
@property (readonly) unsigned long long setupAutosyncCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)synchronize;
- (id)primitiveObjectForKey:(id)arg1;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (_Bool)primitiveBoolValueForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (void)setupAutosync;

@end
