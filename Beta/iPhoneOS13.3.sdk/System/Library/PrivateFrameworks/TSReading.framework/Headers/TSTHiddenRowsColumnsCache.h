/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSIndexSet, TSTHiddenDimensionCache;

@interface TSTHiddenRowsColumnsCache : NSObject <Swift>

{
    TSTHiddenDimensionCache *mHiddenRows;
    TSTHiddenDimensionCache *mHiddenColumns;
}

@property (nonatomic, readonly) NSIndexSet *visibleRowIndices;
@property (nonatomic, readonly) NSIndexSet *visibleColumnIndices;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)swap;
- (void)validate:(id)arg1;
- (void)pop;
- (void)push;
- (_Bool)isRowHidden:(unsigned short)arg1;
- (_Bool)isRowUserHidden:(unsigned short)arg1;
- (_Bool)isColumnHidden:(unsigned char)arg1;
- (unsigned short)numberRowsHiddenInCellRange:(CDStruct_5f1f7aa9)arg1;
- (unsigned short)numberRowsUserHiddenInCellRange:(CDStruct_5f1f7aa9)arg1;
- (unsigned short)numberColumnsHiddenInCellRange:(CDStruct_5f1f7aa9)arg1;
- (_Bool)anyRowsHiddenInCellRange:(CDStruct_5f1f7aa9)arg1;
- (_Bool)anyRowsUserHiddenInCellRange:(CDStruct_5f1f7aa9)arg1;
- (_Bool)anyColumnsHiddenInCellRange:(CDStruct_5f1f7aa9)arg1;
- (unsigned short)previousVisibleRow:(unsigned short)arg1;
- (unsigned short)nextVisibleRow:(unsigned short)arg1;
- (unsigned char)previousVisibleColumn:(unsigned char)arg1;
- (unsigned char)nextVisibleColumn:(unsigned char)arg1;
- (unsigned short)previousNthVisibleRow:(unsigned short)arg1 fromRowIndex:(unsigned short)arg2;
- (unsigned char)previousNthVisibleColumn:(unsigned short)arg1 fromColumnIndex:(unsigned char)arg2;
- (CDStruct_0441cfb5)visibleCellOffsetBy:(CDStruct_79c71658)arg1 fromCellID:(CDStruct_0441cfb5)arg2;
- (unsigned short)numberOfVisibleRowsFromHeader:(unsigned short)arg1;
- (void)pushAndValidate:(id)arg1;
- (void)validateChangeDescriptors:(id)arg1;

@end
