/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXViewSpec.h>

@class NSDictionary, UIColor, UIFont;

@interface PXLabelSpec : PXViewSpec

{
    _Bool _adjustsFontSizeToFitWidth;
    _Bool _allowTruncation;
    struct UIColor *_textColor;
    struct UIFont *_font;
    NSDictionary *_textAttributes;
    NSDictionary *_fallbackTextAttributes;
    long long _textAlignment;
    unsigned long long _numberOfLines;
    long long _verticalAlignment;
    long long _capitalization;
    long long _fallbackCapitalization;
    double _minimumScaleFactor;
    double _minimumTruncatedScaleFactor;
    struct UIEdgeInsets _contentInsets;
}

@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (copy, nonatomic) NSDictionary *fallbackTextAttributes;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) long long capitalization;
@property (nonatomic) long long fallbackCapitalization;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) _Bool adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) _Bool allowTruncation;
@property (nonatomic) double minimumTruncatedScaleFactor;

+ (id)px_headerTitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2;
+ (id)px_headerSubtitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
