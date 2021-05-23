/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class UIFont;

@interface PXCMMPosterHeaderViewSpec : NSObject

{
    _Bool _canShowStatus;
    unsigned int _titleFontDescriptorSymbolicTraits;
    unsigned int _subtitleFontDescriptorSymbolicTraits;
    unsigned int _topGradientFontDescriptorSymbolicTraits;
    unsigned int _statusFontDescriptorSymbolicTraits;
    unsigned int _bottomGradientFontDescriptorSymbolicTraits;
    long long _titleFontTextStyle;
    double _titleBaselineOffset;
    long long _subtitleFontTextStyle;
    double _subtitleBaselineOffset;
    long long _topGradientFontTextStyle;
    double _topGradientBaselineOffset;
    long long _statusFontTextStyle;
    double _statusBaselineOffset;
    long long _bottomGradientFontTextStyle;
    double _bottomGradientBaselineOffset;
}

@property (nonatomic, readonly) long long titleFontTextStyle;
@property (nonatomic, readonly) unsigned int titleFontDescriptorSymbolicTraits;
@property (nonatomic, readonly) double titleBaselineOffset;
@property (nonatomic, readonly) long long subtitleFontTextStyle;
@property (nonatomic, readonly) unsigned int subtitleFontDescriptorSymbolicTraits;
@property (nonatomic, readonly) double subtitleBaselineOffset;
@property (nonatomic, readonly) long long topGradientFontTextStyle;
@property (nonatomic, readonly) unsigned int topGradientFontDescriptorSymbolicTraits;
@property (nonatomic, readonly) double topGradientBaselineOffset;
@property (nonatomic, readonly) _Bool canShowStatus;
@property (nonatomic, readonly) long long statusFontTextStyle;
@property (nonatomic, readonly) unsigned int statusFontDescriptorSymbolicTraits;
@property (nonatomic, readonly) double statusBaselineOffset;
@property (nonatomic, readonly) long long bottomGradientFontTextStyle;
@property (nonatomic, readonly) unsigned int bottomGradientFontDescriptorSymbolicTraits;
@property (nonatomic, readonly) double bottomGradientBaselineOffset;
@property (nonatomic, readonly) double scaledTitleBaselineOffset;
@property (nonatomic, readonly) double scaledSubtitleBaselineOffset;
@property (nonatomic, readonly) double scaledTopGradientBaselineOffset;
@property (nonatomic, readonly) double scaledStatusBaselineOffset;
@property (nonatomic, readonly) double scaledBottomGradientBaselineOffset;
@property (nonatomic, readonly) UIFont *preferredTitleFont;
@property (nonatomic, readonly) UIFont *preferredSubtitleFont;
@property (nonatomic, readonly) UIFont *preferredStatusFont;

- (id)init;
- (id)initWithPresentationStyle:(long long)arg1;

@end
