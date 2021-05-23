/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <UIKit/UILabel.h>

@class NSAttributedString, NSLayoutManager, NSNumber, NSString, NSTextContainer, NSTextStorage, UIColor, UIFont, UIView;

@interface CLKUICurvedLabel : UILabel

{
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    _Bool _storageIsNonAttributedText;
    double _maxTextWidth;
    NSNumber *_isTextTruncated;
    struct CGRect _cachedBounds;
    struct CGRect _cachedGlyphsBoundingRect;
    struct CGSize _cachedSize;
    _Bool _cachedSizeIsValid;
    UIColor *_textColor;
    NSAttributedString *_attributedStringWithoutColorModification;
    NSAttributedString *_attributedStringUnmodified;
    double _viewAlpha;
    UIFont *_font;
    _Bool _hasMonospacedNumbers;
    _Bool _interior;
    _Bool _attributedTextProvidesColor;
    double _circleRadius;
    double _centerAngle;
    double _maxAngularWidth;
    double _tracking;
    unsigned long long _imagePlacement;
    double _imagePadding;
    UIView *_imageView;
    double _animationAlpha;
}

@property (nonatomic) double circleRadius;
@property (nonatomic) _Bool interior;
@property (nonatomic) double centerAngle;
@property (nonatomic) double maxAngularWidth;
@property (nonatomic, readonly) double maxLinearWidth;
@property (nonatomic, readonly) double maxLinearTextWidth;
@property (nonatomic, readonly) _Bool isTextTruncated;
@property (nonatomic) double tracking;
@property (nonatomic) _Bool attributedTextProvidesColor;
@property (nonatomic, readonly) struct CGRect textBoundingRect;
@property (nonatomic) unsigned long long imagePlacement;
@property (nonatomic) double imagePadding;
@property (weak, nonatomic) UIView *imageView;
@property (nonatomic) double animationAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic, readonly) double _lastLineBaseline;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic, readonly) struct UIEdgeInsets opticalInsets;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)alpha;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (double)_distance;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)_setAttributedText:(id)arg1;
- (_Bool)_hasImage;
- (void)_updateTextColor;
- (void)invalidateCachedSize;
- (void)_updateMaxSize;
- (struct CGRect)_glyphsBoundingRect;
- (struct CGPoint)_offsetOfBoundingRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
- (struct __CTLine *)_newLineFromDrawableTextStorage;
- (void)_enumerateTransformsForDrawableCharacters:(CDUnknownBlockType)arg1;
- (struct _NSRange)_drawableCharacterRange:(struct _NSRange *)arg1;
- (void)_updateTracking;
- (double)_extraWidthForImage;
- (void)_transformForImage:(CDUnknownBlockType)arg1;
- (void)_enumerateTransforms:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setImageView:(id)arg1 placement:(unsigned long long)arg2 padding:(double)arg3;
- (void)getTextCenter:(struct CGPoint *)arg1 startAngle:(double *)arg2 endAngle:(double *)arg3;

@end
