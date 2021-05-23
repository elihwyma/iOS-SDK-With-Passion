/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKLegibilityLabel.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKDevice, CLKFont, CLKTextProvider, NSAttributedString, NSParagraphStyle, NSString, UIColor, UIFont, UIView, _NTKColorManager;

@protocol CLKMonochromeFilterProvider;

@interface NTKColoringLabel : NTKLegibilityLabel <Swift>

{
    CLKDevice *_device;
    unsigned long long _options;
    _NTKColorManager *_colorManager;
    struct NSNumber *_updateToken;
    _Bool _updatedAfterTimeTravelStateChange;
    CLKFont *_preTimeTravelFont;
    _Bool _monochromeSnapshot;
    double _previousFraction;
    NSAttributedString *_originalString;
    UIView *_snapshot;
    _Bool _inTimeTravel;
    _Bool _uppercase;
    _Bool _usesTextProviderTintColoring;
    _Bool _isTextTruncated;
    _Bool _cachedSizeIsValid;
    _Bool _cachedOpticalEdgeInsetsIsValid;
    _Bool _usesTextProviderSize;
    UIColor *_overrideColor;
    CLKTextProvider *_textProvider;
    CLKFont *_textProviderFont;
    CLKFont *_textProviderSmallCapsBaseFont;
    double _maxWidth;
    NSParagraphStyle *_paragraphStyle;
    double _tracking;
    CDUnknownBlockType _nowProvider;
    CDUnknownBlockType _needsResizeHandler;
    long long _twoToneStyleInMonochrome;
    id <CLKMonochromeFilterProvider> _filterProvider;
    struct CGSize _cachedSingleLineSize;
    struct UIEdgeInsets _cachedOpticalEdgeInsets;
}

@property (nonatomic) struct CGSize cachedSingleLineSize;
@property (nonatomic) _Bool cachedSizeIsValid;
@property (nonatomic, readonly) struct UIEdgeInsets cachedOpticalEdgeInsets;
@property (nonatomic) _Bool cachedOpticalEdgeInsetsIsValid;
@property (nonatomic) _Bool usesTextProviderSize;
@property (nonatomic, readonly) unsigned long long options;
@property (retain, nonatomic) CLKTextProvider *textProvider;
@property (retain, nonatomic) CLKFont *textProviderFont;
@property (retain, nonatomic) CLKFont *textProviderSmallCapsBaseFont;
@property (nonatomic) double maxWidth;
@property (nonatomic) _Bool uppercase;
@property (nonatomic) _Bool usesTextProviderTintColoring;
@property (nonatomic, readonly) _Bool isTextTruncated;
@property (copy, nonatomic) NSParagraphStyle *paragraphStyle;
@property (nonatomic) double tracking;
@property (copy, nonatomic) CDUnknownBlockType nowProvider;
@property (copy, nonatomic) CDUnknownBlockType needsResizeHandler;
@property (nonatomic) long long twoToneStyleInMonochrome;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (nonatomic, readonly) UIColor *contentColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic, readonly) double _lastLineBaseline;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic, readonly) struct UIEdgeInsets opticalInsets;
@property (nonatomic) _Bool inTimeTravel;

+ (id)labelWithOptions:(unsigned long long)arg1;

- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)_font;
- (void)setBounds:(struct CGRect)arg1;
- (void)setShadowOffset:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (double)minimumWidth;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (double)_firstLineBaseline;
- (id)initWithFrame:(struct CGRect)arg1 options:(unsigned long long)arg2;
- (void)invalidateCachedSize;
- (void)editingDidEnd;
- (void)transitionToMonochromeWithFraction:(double)arg1 style:(long long)arg2;
- (void)updateMonochromeColorWithStyle:(long long)arg1;
- (double)widthForMaxWidth:(double)arg1 withFont:(id)arg2;
- (id)_activeFont;
- (void)_updateDynamicTracking;
- (void)_requeryTextProviderAndNotify:(_Bool)arg1;
- (void)_updateTwoToneLabelMonochromeColor;
- (void)_transitionTwoToneLabelToMonochromeWithFraction:(double)arg1;
- (double)widthForMaxWidth:(double)arg1 withFont:(id)arg2 smallCapsBaseFont:(id)arg3;
- (double)minimumWithFont:(id)arg1;
- (double)minimumWithFont:(id)arg1 smallCapsBaseFont:(id)arg2;
- (id)_fontWithMonospaceNumbers:(id)arg1;
- (void)_setAnimationAlpha:(double)arg1;
- (_Bool)usesLegibility:(_Bool)arg1;
- (double)widthForMaxWidth:(double)arg1;
- (void)_setUpSnapshot;

@end
