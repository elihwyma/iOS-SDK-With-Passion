/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDCollection : NSObject <Swift>

{
    NSMutableArray *mObjects;
}

+ (id)collection;
+ (id)collectionWithObject:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)initWithObject:(id)arg1;
- (unsigned long long)addOrEquivalentObject:(id)arg1;
- (_Bool)isEqualToCollection:(id)arg1;

@end
