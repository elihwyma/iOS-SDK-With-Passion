/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXNewMagazineGrid;

@interface PXNewMagazineRectArray : NSObject

{
    unsigned long long _currentIndex;
    unsigned long long _size;
    PXNewMagazineGrid *_tileGrid;
    _Bool _isPerfectEnding;
    double _score;
    unsigned long long _endingType;
    struct PXMagazineRect *_rects;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) double score;
@property (nonatomic) unsigned long long endingType;
@property (nonatomic, readonly) struct PXMagazineRect *rects;

- (void)dealloc;
- (void)reset;
- (void)addRect:(struct PXMagazineRect)arg1;
- (struct PXMagazineRect)rectAtIndex:(unsigned long long)arg1;
- (_Bool)nextEmptyTileX:(long long *)arg1 Y:(long long *)arg2 maxWidth:(long long *)arg3;
- (_Bool)isPerfectEnding;
- (_Bool)isGoodEnding;
- (unsigned long long)rowsUsed;
- (void)removeLastRect;
- (id)initWithSize:(unsigned long long)arg1 tileGrid:(id)arg2;
- (id)immutableCopyForCurrentRectsCount;
- (double)tileDensity;
- (_Bool)isEqualToRectArray:(id)arg1;

@end
