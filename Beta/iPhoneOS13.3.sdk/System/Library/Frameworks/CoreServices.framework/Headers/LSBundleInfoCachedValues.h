/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSSet;

@interface LSBundleInfoCachedValues : NSObject

{
    NSSet *_keys;
    NSDictionary *_values;
}

@property (nonatomic, readonly) NSSet *allKeys;
@property (nonatomic, readonly) NSDictionary *rawValues;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)_initWithKeys:(id)arg1 forDictionary:(id)arg2;
- (id)objectForKey:(id)arg1 ofType:(Class)arg2;
- (id)arrayForKey:(id)arg1 withValuesOfClass:(Class)arg2;
- (id)numberForKey:(id)arg1;

@end
