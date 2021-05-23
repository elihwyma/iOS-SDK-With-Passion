/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDCollection.h>

__attribute__((visibility("hidden")))
@interface EDStylesCollection : EDCollection

{
    unsigned long long mDefaultWorkbookStyleIndex;
}

- (id)init;
- (unsigned long long)addObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)defaultWorkbookStyle;
- (void)setDefaultWorkbookStyleIndex:(unsigned long long)arg1;
- (unsigned long long)defaultWorkbookStyleIndex;

@end
