/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class TSTLayout;

@interface TSTAnimation : NSObject <Swift>

{
    TSTLayout *mLayout;
    int mKind;
    CDStruct_5f1f7aa9 *mCellRanges;
    unsigned long long mCellRangeCount;
    unsigned long long mStageCount;
    unsigned long long mStage;
    _Bool mFinal;
    _Bool mByColumn;
    _Bool mByRow;
    _Bool mByCell;
    _Bool mByContent;
    _Bool mByCellRange;
    _Bool mByMissingCellRange;
    _Bool mReverse;
    _Bool mShowsTableChrome;
    _Bool mShowsOverlayLayers;
    _Bool mExpandBackgroundFill;
    _Bool mDrawsBlackAndWhite;
}

@property (readonly) unsigned long long stageCount;
@property (readonly) unsigned long long stage;
@property (readonly) _Bool final;
@property _Bool showsTableChrome;
@property _Bool showsOverlayLayers;
@property _Bool expandBackgroundFill;
@property _Bool drawsBlackAndWhite;
@property (readonly) unsigned long long cellRangeCount;
@property (readonly) _Bool drawTableName;
@property (readonly) _Bool drawTableBackground;
@property (readonly) _Bool drawCellBackground;
@property (readonly) _Bool drawCellContent;
@property (readonly) _Bool clipStrokes;
@property (readonly) _Bool drawStrokes;
@property (readonly) _Bool enabled;

+ (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
+ (id)newAnimationWithLayout:(id)arg1 andCellRange:(CDStruct_5f1f7aa9)arg2;
+ (id)textureDeliveryStylesLocalized:(_Bool)arg1;
+ (id)newAnimationWithLayout:(id)arg1 andDeliveryStyle:(unsigned long long)arg2;
+ (unsigned long long)stageCountForTextureDeliveryStyle:(unsigned long long)arg1 andTable:(id)arg2;
+ (_Bool)deliveryStyleSupportedForExport:(unsigned long long)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDStruct_5f1f7aa9)cellRangeAtIndex:(unsigned long long)arg1;
- (void)addCellRange:(CDStruct_5f1f7aa9)arg1;
- (void)setStage:(unsigned long long)arg1 andFinal:(_Bool)arg2;
- (void)clearCellRanges;

@end
