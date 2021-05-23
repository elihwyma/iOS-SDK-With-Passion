/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDCollection.h>

@class OITSUIntegerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDKeyedCollection : EDCollection

{
    OITSUIntegerKeyDictionary *mMap;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)objectWithKey:(long long)arg1;
- (void)insertIntoMap:(id)arg1;
- (void)removeFromMap:(id)arg1;
- (_Bool)isObjectInMap:(id)arg1;
- (_Bool)isOverwritingKeyOK;

@end
