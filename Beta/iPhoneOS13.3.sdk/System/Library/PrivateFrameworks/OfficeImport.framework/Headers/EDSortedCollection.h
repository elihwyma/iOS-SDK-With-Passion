/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDKeyedCollection.h>

__attribute__((visibility("hidden")))
@interface EDSortedCollection : EDKeyedCollection

- (unsigned long long)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (unsigned long long)addObject:(id)arg1 overrideDuplicate:(_Bool)arg2;

@end
