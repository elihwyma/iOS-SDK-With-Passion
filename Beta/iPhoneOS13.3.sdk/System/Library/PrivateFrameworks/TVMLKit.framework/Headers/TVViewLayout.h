/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface TVViewLayout : NSObject

{
    _Bool _acceptsFocus;
    _Bool _centerGrowth;
    UIColor *_tintColor;
    UIColor *_darkTintColor;
    UIColor *_backgroundColor;
    UIColor *_darkBackgroundColor;
    double _height;
    double _maxHeight;
    double _maxWidth;
    double _minHeight;
    double _minWidth;
    double _width;
    double _focusSizeIncrease;
    NSString *_focusAlign;
    double _lineSpacing;
    long long _alignment;
    long long _contentAlignment;
    UIColor *_highlightColor;
    long long _position;
    NSString *_highlightStyle;
    double _interitemSpacing;
    NSString *_progressStyle;
    NSString *_group;
    struct UIEdgeInsets _margin;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _focusMargin;
}

@property (nonatomic) double interitemSpacing;
@property (copy, nonatomic) NSString *progressStyle;
@property (copy, nonatomic) NSString *group;
@property (nonatomic) struct UIEdgeInsets margin;
@property (nonatomic) struct UIEdgeInsets padding;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *darkTintColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *darkBackgroundColor;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets focusMargin;
@property (nonatomic) double maxHeight;
@property (nonatomic) double maxWidth;
@property (nonatomic) double minHeight;
@property (nonatomic) double minWidth;
@property (nonatomic) double width;
@property (nonatomic) double focusSizeIncrease;
@property (copy, nonatomic) NSString *focusAlign;
@property (nonatomic) double lineSpacing;
@property (nonatomic) long long alignment;
@property (nonatomic) long long contentAlignment;
@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic) long long position;
@property (nonatomic) _Bool acceptsFocus;
@property (nonatomic) _Bool centerGrowth;
@property (copy, nonatomic) NSString *highlightStyle;

+ (Class)layoutClassForElement:(id)arg1;
+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDUnknownBlockType)tv_layoutPropertySetterForStyle:(id)arg1;
- (CDUnknownBlockType)tv_layoutPropertyGetterForStyle:(id)arg1;

@end
