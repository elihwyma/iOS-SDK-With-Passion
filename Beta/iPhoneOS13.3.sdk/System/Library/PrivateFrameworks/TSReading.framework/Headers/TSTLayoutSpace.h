/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSTCoordinateArray, TSTLayout, TSTLayoutSpaceBundle, TSTMasterLayout;

@interface TSTLayoutSpace : NSObject

{
    TSTLayoutSpaceBundle *mBundle;
    int mLayoutSpaceType;
    struct {
        _Bool coordinates;
        _Bool tableOffset;
    } mInvalidFlags;
    CDStruct_58eae27c mGridRange;
    _Bool mHeaderColumnsRepeat;
    _Bool mHeaderRowsRepeat;
    double mViewScale;
    struct CGAffineTransform mTransformToCanvas;
    struct CGAffineTransform mTransformFromCanvas;
    struct CGAffineTransform mTransformToDevice;
    struct CGAffineTransform mTransformFromDevice;
    _Bool mDrawBlackAndWhite;
    _Bool mDrawPreventAntialias;
    struct CGPoint mTableOffset;
    TSTCoordinateArray *mHeaderRowColumnCoordinates;
    TSTCoordinateArray *mBodyColumnCoordinates;
    TSTCoordinateArray *mHeaderColumnRowCoordinates;
    TSTCoordinateArray *mBodyRowCoordinates;
    struct CGRect mCachedFrame;
    struct CGRect mCachedAlignedFrame;
    struct CGRect mCachedStrokeFrame;
    struct CGRect mCachedAlignedStrokeFrame;
    _Bool mLayoutDirectionIsLeftToRight;
    struct _opaque_pthread_rwlock_t mLock;
}

@property (nonatomic, readonly) TSTLayoutSpaceBundle *bundle;
@property (nonatomic, readonly) int layoutSpaceType;
@property (nonatomic, readonly) TSTLayout *layout;
@property (nonatomic, readonly) TSTMasterLayout *masterLayout;
@property (nonatomic, readonly) _Bool layoutDirectionIsLeftToRight;
@property (nonatomic, readonly) _Bool isMain;
@property (nonatomic, readonly) _Bool isFrozen;
@property (nonatomic, readonly) _Bool isRepeat;
@property (nonatomic, readonly) _Bool isColumns;
@property (nonatomic, readonly) _Bool isRows;
@property (nonatomic, readonly) _Bool isCorner;
@property (nonatomic) _Bool headerColumnsRepeat;
@property (nonatomic) _Bool headerRowsRepeat;
@property (nonatomic) double viewScale;
@property (nonatomic) struct CGAffineTransform transformToCanvas;
@property (nonatomic) struct CGAffineTransform transformFromCanvas;
@property (nonatomic) struct CGAffineTransform transformToDevice;
@property (nonatomic) struct CGAffineTransform transformFromDevice;
@property (nonatomic) _Bool drawBlackAndWhite;
@property (nonatomic) _Bool drawPreventAntialias;
@property (nonatomic) struct CGPoint tableOffset;

- (void)dealloc;
- (id)description;
- (void)unlock;
- (int)validate:(id)arg1;
- (void)lockForRead;
- (_Bool)p_getLayoutDirectionLeftToRight;
- (void)lockForWrite;
- (void)validateCachedFrames;
- (int)validateCoordinateCache:(id)arg1;
- (int)validateTableOffset:(id)arg1;
- (id)initWithLayoutSpaceBundle:(id)arg1 type:(int)arg2;
- (void)invalidateCoordinates;
- (void)invalidateTableOffset;

@end
