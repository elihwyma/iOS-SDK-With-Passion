/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PXMemoriesFontsSpec : NSObject

{
    NSDictionary *_titleTextAttributes;
    NSDictionary *_fallbackTitleTextAttributes;
    NSDictionary *_subtitleTextAttributes;
    double _baselineDistance;
    struct UIEdgeInsets _padding;
}

@property (nonatomic, readonly) NSDictionary *titleTextAttributes;
@property (nonatomic, readonly) NSDictionary *fallbackTitleTextAttributes;
@property (nonatomic, readonly) NSDictionary *subtitleTextAttributes;
@property (nonatomic, readonly) double baselineDistance;
@property (nonatomic, readonly) struct UIEdgeInsets padding;

+ (struct UIEdgeInsets)_paddingForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 horizontalMargin:(double)arg4 width:(double)arg5 shouldScale:(_Bool)arg6;
+ (double)_baselineDistanceForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 size:(struct CGSize)arg4 shouldScale:(_Bool)arg5;
+ (id)_textAttributesForFontSet:(long long)arg1 specSet:(long long)arg2 labelKind:(long long)arg3 withTitleFontName:(id)arg4 variant:(long long)arg5 size:(struct CGSize)arg6 shouldScale:(_Bool)arg7;
+ (void)preloadFontsSpecsForExtendedTraitCollection:(id)arg1;
+ (id)_fontSpecCache;
+ (id)memoriesFontsSpecForDescriptor:(struct PXViewSpecDescriptor)arg1 extendedTraitCollection:(id)arg2;
+ (id)_fontSetByTitleFontName;
+ (id)_titleFontNameByFontSet;
+ (id)supportedTitleFontNames;
+ (long long)_fontSetForTitleFontName:(id)arg1;
+ (void)_getSpecSet:(out long long *)arg1 variant:(out long long *)arg2 forDescriptor:(struct PXViewSpecDescriptor)arg3 extendedTraitCollection:(id)arg4;
+ (long long)_memoryLabelKindForDescriptor:(struct PXViewSpecDescriptor)arg1;
+ (double)_playButtonPaddingForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 deviceMargin:(double)arg4;
+ (double)_fontScaleForSpecSet:(long long)arg1 variant:(long long)arg2 width:(double)arg3;
+ (double)_scaleForSpecSet:(long long)arg1 variant:(long long)arg2 width:(double)arg3;
+ (double)_referenceWidthForSpecSet:(long long)arg1 variant:(long long)arg2;
+ (id)_textAttributesForFontName:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 tracking:(double)arg4 stroke:(double)arg5 shadow:(id)arg6 capitalizationStyle:(long long)arg7;

- (id)_initWithIdentifier:(struct PXMemoryFontsSpecIdentifier)arg1 titleFontName:(id)arg2;

@end
