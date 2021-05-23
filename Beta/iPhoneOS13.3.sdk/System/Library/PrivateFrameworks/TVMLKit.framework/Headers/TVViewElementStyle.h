/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class IKViewElementStyle, NSMutableDictionary, NSShadow, NSString, TVAppStyle, TVColor;

@interface TVViewElementStyle : NSObject

{
    NSMutableDictionary *_cachedColorObjects;
    IKViewElementStyle *_style;
}

@property (weak, nonatomic, readonly) IKViewElementStyle *style;
@property (retain, nonatomic) TVAppStyle *styleMetrics;
@property (nonatomic, readonly) NSString *textTransform;
@property (nonatomic, readonly) NSShadow *shadow;
@property (nonatomic, readonly) TVColor *backgroundColor;
@property (nonatomic, readonly) TVColor *color;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) NSString *fontWeight;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) struct UIEdgeInsets margin;
@property (nonatomic, readonly) struct UIEdgeInsets focusMargin;
@property (nonatomic, readonly) double maxHeight;
@property (nonatomic, readonly) double maxWidth;
@property (nonatomic, readonly) double minHeight;
@property (nonatomic, readonly) double minWidth;
@property (nonatomic, readonly) struct UIEdgeInsets padding;
@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) long long contentAlignment;
@property (nonatomic, readonly) TVColor *highlightColor;
@property (nonatomic, readonly) NSString *imageTreatmentName;
@property (nonatomic, readonly) double interitemSpacing;
@property (nonatomic, readonly) NSString *textHighlightStyle;
@property (nonatomic, readonly) double textMinimumScaleFactor;
@property (nonatomic, readonly) long long position;
@property (nonatomic, readonly) NSString *ratingStyle;
@property (nonatomic, readonly) unsigned long long maxTextLines;
@property (nonatomic, readonly) NSString *textStyle;
@property (nonatomic, readonly) TVColor *tintColor;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStyle:(id)arg1;
- (id)darkTintColor;
- (id)valueForStyleProperty:(id)arg1;
- (id)cssValueForStyleProperty:(id)arg1;

@end
