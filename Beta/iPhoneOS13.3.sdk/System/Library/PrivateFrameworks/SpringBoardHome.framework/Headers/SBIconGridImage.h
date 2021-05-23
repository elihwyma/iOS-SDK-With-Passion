/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIImage.h>

@class CPMemoryPool;

@protocol SBIconListLayout;

@interface SBIconGridImage : UIImage

{
    unsigned int _treatedCells;
    id <SBIconListLayout> _listLayout;
    CPMemoryPool *_pool;
}

@property (retain, nonatomic) id <SBIconListLayout> listLayout;
@property (retain, nonatomic) CPMemoryPool *pool;
@property (nonatomic) unsigned int treatedCells;
@property (nonatomic, readonly) unsigned long long numberOfCells;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) unsigned long long numberOfRows;

+ (struct CGSize)sizeForLayout:(id)arg1;
+ (struct CGRect)rectAtIndex:(unsigned long long)arg1 inLayout:(id)arg2 maxCount:(unsigned long long)arg3;
+ (id)gridImageForLayout:(id)arg1 previousGridImage:(id)arg2 previousGridCellIndexToUpdate:(unsigned long long)arg3 pool:(id)arg4 cellImageDrawBlock:(CDUnknownBlockType)arg5;
+ (unsigned long long)numberOfRowsForNumberOfCells:(unsigned long long)arg1 inLayout:(id)arg2;
+ (id)gridImageForLayout:(id)arg1 cellImageDrawBlock:(CDUnknownBlockType)arg2;
+ (id)gridImageForLayout:(id)arg1 pool:(id)arg2 cellImageDrawBlock:(CDUnknownBlockType)arg3;

- (id)gridImageByPatchingCellAtIndex:(unsigned long long)arg1 cellImageProviderBlock:(CDUnknownBlockType)arg2;
- (id)iconImageAtIndex:(unsigned long long)arg1;
- (_Bool)isIconImageTreatedAtIndex:(unsigned long long)arg1;

@end
