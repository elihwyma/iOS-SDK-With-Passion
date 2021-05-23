/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _HKIdentifierLookupTable : NSObject

{
    NSMapTable *_identifierMapTable;
    struct os_unfair_lock_s _lookupTableSpinLock;
}

- (id)initWithDictionary:(id)arg1;
- (void)_insertCode:(long long)arg1 forIdentifier:(id)arg2;
- (void)setCode:(long long)arg1 forIdentifier:(id)arg2;
- (_Bool)codeForIdentifier:(id)arg1 code:(long long *)arg2;
- (void)enumerateCodesWithBlock:(CDUnknownBlockType)arg1;

@end
