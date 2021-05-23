/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _LSPlistHint : NSObject

{
    NSSet *_keys;
    NSDictionary *_cachedValues;
    struct os_unfair_lock_s _valueLock;
    _Bool _cachedValuesAreComplete;
    _Bool _keysAreCompacted;
}

@property (copy, nonatomic, readonly) NSSet *keys;
@property (retain) NSDictionary *completeDictionary;

- (id)debugDescription;
- (id)initWithKeys:(id)arg1 compacted:(_Bool)arg2;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (_Bool)hasValueForKey:(id)arg1;
- (id)cachedValueForKey:(id)arg1;

@end
