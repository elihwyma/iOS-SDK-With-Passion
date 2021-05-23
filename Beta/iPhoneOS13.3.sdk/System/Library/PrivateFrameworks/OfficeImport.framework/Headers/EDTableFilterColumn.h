/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDTableFilterColumn : NSObject

{
    unsigned long long mColumnIndex;
    NSMutableArray *mFilters;
    int mFiltersRelation;
}

- (id)init;
- (id)description;
- (id)filterAtIndex:(unsigned long long)arg1;
- (void)addFilter:(id)arg1;
- (unsigned long long)columnIndex;
- (void)setColumnIndex:(unsigned long long)arg1;
- (unsigned long long)filterCount;
- (void)setFiltersRelation:(int)arg1;
- (int)filtersRelation;

@end
