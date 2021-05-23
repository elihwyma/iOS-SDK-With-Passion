/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSTTableDataObject.h>

@class TSWPStorage;

@interface TSTTableDataFormulaError : TSTTableDataObject

{
    TSWPStorage *mFormulaError;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initObjectWithFormulaError:(id)arg1;

@end
