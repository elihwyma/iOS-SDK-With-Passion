/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXMagazineGrid : NSObject

{
    unsigned long long _numberOfColumns;
    long long *_table;
    unsigned long long _tableSizeInBytes;
    long long _maxRows;
}

@property (nonatomic, readonly) unsigned long long currentRowsUsed;
@property (nonatomic, readonly) unsigned long long endingType;

- (void)dealloc;
- (void)setNumberOfColumns:(long long)arg1;
- (id)initWithNumberOfColumns:(long long)arg1 size:(unsigned long long)arg2;
- (void)resetWithSize:(unsigned long long)arg1;
- (void)enlargeTable;
- (void)setTileIdentifier:(unsigned long long)arg1 forArea:(struct PXMagazineRect)arg2;
- (void)clearArea:(struct PXMagazineRect)arg1;
- (_Bool)nextEmptyTileX:(long long *)arg1 Y:(long long *)arg2 maxWidth:(long long *)arg3;
- (_Bool)isPerfectEnding;
- (_Bool)isGoodEnding;
- (_Bool)_hasAnyTilesUsedInArea:(struct PXMagazineRect)arg1;
- (long long)_numberOfEmptyTilesInArea:(struct PXMagazineRect)arg1;
- (_Bool)_hasAnyEmptyTilesInArea:(struct PXMagazineRect)arg1;
- (long long)_numberOfEmptyTilesAtTheEnd;
- (unsigned long long)_rowsUsed;
- (_Bool)_isEmptyGrid;

@end
