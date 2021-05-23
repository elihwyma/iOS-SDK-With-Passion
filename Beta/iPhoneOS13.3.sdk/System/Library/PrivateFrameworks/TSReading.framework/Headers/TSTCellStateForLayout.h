/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSTCell, TSTLayoutContentCachedKey, TSWPColumn;

@interface TSTCellStateForLayout : NSObject

{
    _Bool mCellPropsRowHeight;
    _Bool mCellWraps;
    _Bool mForDrawing;
    _Bool mInDynamicLayout;
    CDStruct_0441cfb5 mModelCellID;
    unsigned int mVerticalAlignment;
    int mLayoutCacheFlags;
    TSTCell *mCell;
    CDStruct_5f1f7aa9 mMergedRange;
    TSWPColumn *mWPColumn;
    id mCellContents;
    TSTLayoutContentCachedKey *mKeyVal;
    unsigned long long mPageNumber;
    unsigned long long mPageCount;
    struct CGSize mMinSize;
    struct CGSize mMaxSize;
    struct UIEdgeInsets mPaddingInsets;
}

@property (nonatomic) CDStruct_0441cfb5 modelCellID;
@property (copy, nonatomic) TSTCell *cell;
@property (nonatomic) CDStruct_5f1f7aa9 mergedRange;
@property (retain, nonatomic) id cellContents;
@property (nonatomic) struct CGSize minSize;
@property (nonatomic) struct CGSize maxSize;
@property (nonatomic) struct UIEdgeInsets paddingInsets;
@property (nonatomic) unsigned int verticalAlignment;
@property (nonatomic) _Bool cellPropsRowHeight;
@property (nonatomic) _Bool cellWraps;
@property (nonatomic) _Bool forDrawing;
@property (nonatomic) _Bool inDynamicLayout;
@property (nonatomic) int layoutCacheFlags;
@property (nonatomic, readonly) _Bool hasContent;
@property (retain, nonatomic) TSTLayoutContentCachedKey *keyVal;
@property (retain, nonatomic) TSWPColumn *wpColumn;
@property (nonatomic) unsigned long long pageNumber;
@property (nonatomic) unsigned long long pageCount;

- (id)init;
- (void)dealloc;

@end
