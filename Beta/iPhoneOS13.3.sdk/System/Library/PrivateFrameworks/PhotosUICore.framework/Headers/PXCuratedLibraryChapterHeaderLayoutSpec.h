/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@class NSString, UIColor, UIFont;

@interface PXCuratedLibraryChapterHeaderLayoutSpec : PXFeatureSpec

{
    _Bool _shouldFloat;
    _Bool _shouldAbbreviateMonth;
    struct UIFont *_titleFont;
    double _titleHeight;
    struct UIColor *_titleColor;
    struct UIColor *_floatingTitleColor;
    struct UIColor *_subtitleColor;
    struct UIColor *_floatingSubtitleColor;
    NSString *_chevronImageName;
    double _spacingBetweenTitleAndSubtitle;
    double _spacingBetweenTitleTopAndPreviousCardBottom;
    double _spacingBetweenTitleBottomAndNextCardTop;
    double _floatingDistanceFromSafeAreaTop;
    double _floatingAppearanceCrossfadeStartDistance;
    double _floatingAppearanceCrossfadeDistance;
    double _floatingAppearanceCrossfadeDuration;
    double _floatingFadeOutDistance;
    struct CGSize _contentInset;
}

@property (nonatomic, readonly) struct CGSize contentInset;
@property (nonatomic, readonly) UIFont *titleFont;
@property (nonatomic, readonly) double titleHeight;
@property (nonatomic, readonly) UIColor *titleColor;
@property (nonatomic, readonly) UIColor *floatingTitleColor;
@property (nonatomic, readonly) UIColor *subtitleColor;
@property (nonatomic, readonly) UIColor *floatingSubtitleColor;
@property (nonatomic, readonly) NSString *chevronImageName;
@property (nonatomic, readonly) double spacingBetweenTitleAndSubtitle;
@property (nonatomic, readonly) double spacingBetweenTitleTopAndPreviousCardBottom;
@property (nonatomic, readonly) double spacingBetweenTitleBottomAndNextCardTop;
@property (nonatomic, readonly) _Bool shouldFloat;
@property (nonatomic, readonly) _Bool shouldAbbreviateMonth;
@property (nonatomic, readonly) double floatingDistanceFromSafeAreaTop;
@property (nonatomic, readonly) double floatingAppearanceCrossfadeStartDistance;
@property (nonatomic, readonly) double floatingAppearanceCrossfadeDistance;
@property (nonatomic, readonly) double floatingAppearanceCrossfadeDuration;
@property (nonatomic, readonly) double floatingFadeOutDistance;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;

@end
