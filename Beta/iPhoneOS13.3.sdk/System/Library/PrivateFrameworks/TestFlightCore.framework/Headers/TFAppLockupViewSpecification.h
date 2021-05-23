/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface TFAppLockupViewSpecification : NSObject

{
    double _titleLabelBaselineToFirstSubtitleLabelBaseline;
    double _firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
    UIFont *_titleLabelFont;
    UIFont *_subtitleLabelFont;
}

@property (nonatomic, readonly) UIColor *titleTextColor;
@property (nonatomic, readonly) UIColor *subtitleTextColor;
@property (nonatomic, readonly) UIColor *iconPlaceholderColor;
@property (nonatomic, readonly) struct CGSize iconSize;
@property (nonatomic, readonly) double paddingBetweenIconAndText;
@property (nonatomic, readonly) double titleLabelBaselineToFirstSubtitleLabelBaseline;
@property (nonatomic, readonly) double firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
@property (nonatomic, readonly) UIFont *titleLabelFont;
@property (nonatomic, readonly) UIFont *subtitleLabelFont;

- (id)initWithTraitCollection:(id)arg1;
- (id)_createTitleLabelFontWithTraitCollection:(id)arg1;
- (id)_createSubtitleLabelFontWithTraitCollection:(id)arg1;
- (id)_titleFontStyle;
- (id)_subtitleFontStyle;

@end
