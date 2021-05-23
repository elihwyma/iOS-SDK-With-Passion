/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSTLayout, TSTLayoutSpace;

@interface TSTLayoutSpaceBundle : NSObject

{
    TSTLayout *mLayout;
    TSTLayoutSpace *mSpace;
    TSTLayoutSpace *mFrozenHeaderColumnsSpace;
    TSTLayoutSpace *mFrozenHeaderRowsSpace;
    TSTLayoutSpace *mFrozenHeaderCornerSpace;
    TSTLayoutSpace *mRepeatHeaderColumnsSpace;
    TSTLayoutSpace *mRepeatHeaderRowsSpace;
    TSTLayoutSpace *mRepeatHeaderCornerSpace;
}

@property (nonatomic) TSTLayout *layout;
@property (retain, nonatomic) TSTLayoutSpace *space;
@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderColumnsSpace;
@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderRowsSpace;
@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderCornerSpace;
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderColumnsSpace;
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderRowsSpace;
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderCornerSpace;

- (void)dealloc;
- (id)description;
- (id)initWithLayout:(id)arg1;
- (void)performActionOnEachLayoutSpace:(CDUnknownBlockType)arg1;
- (void)invalidateCoordinates;
- (_Bool)performActionOnFrozenLayoutSpaces:(CDUnknownBlockType)arg1;
- (_Bool)performActionOnRepeatLayoutSpaces:(CDUnknownBlockType)arg1;
- (void)invalidateTableOffsets;
- (id)getSpaceContainingCellID:(CDStruct_0441cfb5)arg1;
- (int)validateLayoutSpaces;

@end
