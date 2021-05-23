/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBarBackgroundImageView.h>

@class NSMutableDictionary, NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UISearchBarBackground : _UIBarBackgroundImageView

{
    UIColor *_barTintColor;
    NSMutableDictionary *_customBackgroundImages;
    long long _barPosition;
    unsigned long long _searchBarStyle;
    long long _barStyle;
    long long _barTranslucence;
    _Bool _usesEmbeddedAppearance;
    _Bool _usesContiguousBarBackground;
}

@property (nonatomic) long long barStyle;
@property (nonatomic) unsigned long long searchBarStyle;
@property (retain, nonatomic) UIColor *barTintColor;
@property (nonatomic, getter=isTranslucent) _Bool translucent;
@property (nonatomic) _Bool usesEmbeddedAppearance;
@property (nonatomic, readonly) UIImage *backgroundImage;
@property (nonatomic, readonly) UIImage *backgroundImagePrompt;
@property (nonatomic) _Bool usesContiguousBarBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (long long)_barPosition;
- (void)_setBarPosition:(long long)arg1;
- (void)_updateBackgroundImageIfPossible;
- (_Bool)_hasCustomBackgroundImage;
- (id)_backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (id)_createBackgroundImageForBarStyle:(long long)arg1 alpha:(double)arg2;
- (void)_updateBackgroundImage;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;

@end
