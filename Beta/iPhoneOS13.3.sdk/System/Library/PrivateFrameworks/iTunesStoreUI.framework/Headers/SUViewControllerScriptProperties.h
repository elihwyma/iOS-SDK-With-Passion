/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, SUGradient, UIColor;

@interface SUViewControllerScriptProperties : NSObject

{
    _Bool _alwaysDispatchesScrollEvents;
    UIColor *_backgroundColor;
    NSDictionary *_contextDictionary;
    _Bool _doubleTapEnabled;
    _Bool _embedded;
    _Bool _flashesScrollIndicators;
    _Bool _inputViewObeysDOMFocus;
    long long _loadingIndicatorStyle;
    UIColor *_loadingTextColor;
    UIColor *_loadingTextShadowColor;
    SUGradient *_placeholderBackgroundGradient;
    struct UIEdgeInsets _scrollContentInsets;
    _Bool _scrollingDisabled;
    _Bool _shouldLoadProgressively;
    _Bool _shouldShowFormAccessory;
    _Bool _showsHorizontalScrollIndicator;
    _Bool _showsVerticalScrollIndicator;
    _Bool _showsBackgroundShadow;
    UIColor *_topExtensionColor;
    _Bool _usesBlurredBackground;
}

@property (nonatomic) _Bool alwaysDispatchesScrollEvents;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSDictionary *contextDictionary;
@property (nonatomic) _Bool inputViewObeysDOMFocus;
@property (nonatomic, getter=isDoubleTapEnabled) _Bool doubleTapEnabled;
@property (nonatomic, getter=isScrollingDisabled) _Bool scrollingDisabled;
@property (nonatomic, getter=isEmbedded) _Bool embedded;
@property (nonatomic) long long loadingIndicatorStyle;
@property (retain, nonatomic) UIColor *loadingTextColor;
@property (retain, nonatomic) UIColor *loadingTextShadowColor;
@property (retain, nonatomic) SUGradient *placeholderBackgroundGradient;
@property (nonatomic) struct UIEdgeInsets scrollContentInsets;
@property (nonatomic) _Bool shouldLoadProgressively;
@property (nonatomic) _Bool shouldShowFormAccessory;
@property (nonatomic) _Bool showsBackgroundShadow;
@property (nonatomic) _Bool flashesScrollIndicators;
@property (nonatomic) _Bool showsHorizontalScrollIndicator;
@property (nonatomic) _Bool showsVerticalScrollIndicator;
@property (retain, nonatomic) UIColor *topExtensionColor;
@property (nonatomic) _Bool usesBlurredBackground;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
