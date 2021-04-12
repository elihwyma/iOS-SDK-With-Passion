//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, OADGraphicFeatureCache;

__attribute__((visibility("hidden")))
@interface OADGraphicStyleCache : NSObject
{
    OADGraphicFeatureCache *mFillCacheArray[4];
    OADGraphicFeatureCache *mStrokeCache;
    OADGraphicFeatureCache *mShadowCache;
    OADGraphicFeatureCache *mColorCache;
    OADGraphicFeatureCache *mFontFaceCache;
    OADGraphicFeatureCache *mTextStyleCache;
    OADGraphicFeatureCache *mTableIdCache;
    NSMutableDictionary *mTableStyleCache;
    OADGraphicFeatureCache *mChartIdCache;
    OADGraphicFeatureCache *mDrawableStyleCacheArray[4];
}

+ (int)fillCatagory:(id)arg1;
// - (void).cxx_destruct;
- (void)applyCachedDrawableStyle:(id)arg1 toTextBodyProperties:(id)arg2;
- (void)applyCachedDrawableStyle:(id)arg1 toParagraphProperties:(id)arg2;
- (void)applyCachedDrawableStyle:(id)arg1 toGraphicProperties:(id)arg2;
- (id)cachedDrawableStylesOfCategory:(int)arg1;
- (id)chartStyleIds;
- (id)tableStyleIds;
- (id)fillsOfCategory:(int)arg1;
- (id)shadows;
- (id)strokes;
- (id)countedDrawableStyleOfCategory:(int)arg1 atIndex:(NSUInteger)arg2;
- (NSUInteger)cacheDrawablePropertiesOfCategory:(int)arg1 withGraphicProperties:(id)arg2 textBodyProperties:(id)arg3 paragraphProperties:(id)arg4 characterProperties:(id)arg5 colorContext:(id)arg6;
- (NSUInteger)cacheDrawablePropertiesOfCategory:(int)arg1 withFillCategory:(int)arg2 fillIndex:(NSUInteger)arg3 strokeIndex:(NSUInteger)arg4 shadowIndex:(NSUInteger)arg5 reflectionOpacity:(float)arg6 textStyleIndex:(NSUInteger)arg7;
- (void)cacheChartStyleId:(int)arg1;
- (id)tableStyleForId:(id)arg1;
- (void)cacheTableStyle:(id)arg1;
- (NSUInteger)cacheShadow:(id)arg1;
- (NSUInteger)cacheStroke:(id)arg1;
- (NSUInteger)cacheFill:(id)arg1 returnCategory:(int )arg2;
- (id)fontFaceCache;
- (id)colorCache;
- (void)dealloc;
- (id)init;

@end

