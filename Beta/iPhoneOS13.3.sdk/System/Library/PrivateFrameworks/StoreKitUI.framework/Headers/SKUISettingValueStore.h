/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUISettingValueStore : NSObject

{
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSMutableDictionary *_originalValues;
    NSMutableDictionary *_modifiedValues;
}

- (id)init;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (_Bool)hasChanges;
- (void)commitChanges;
- (void)clearValueForKey:(id)arg1;
- (void)discardChanges;
- (id)modifiedKeys;
- (id)originalValueForKey:(id)arg1;
- (id)resolvedValueForKey:(id)arg1;
- (void)setModifiedValue:(id)arg1 forKey:(id)arg2;
- (void)setOriginalValue:(id)arg1 forKey:(id)arg2;

@end
