/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDCollection.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EDOptimizedStringsCollection : EDCollection

{
    NSMutableDictionary *mStringDictionary;
}

- (id)init;
- (unsigned long long)addObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (unsigned long long)addOrEquivalentObject:(id)arg1;

@end
