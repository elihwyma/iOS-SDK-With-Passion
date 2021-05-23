/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIBlurEffect, UIColor, UIVibrancyEffect;

__attribute__((visibility("hidden")))
@interface UIKBUndoStyling : NSObject

{
    _Bool _undoRedoIconOnly;
    _Bool _isRTL;
    _Bool _cutCopyPasteIconOnly;
    UIBlurEffect *_backgroundBlurEffect;
    UIVibrancyEffect *_backgroundVibrancyEffect;
    UIColor *_HUDbackgroundColor;
    UIColor *_HUDShadowColor;
    UIColor *_buttonGlyphColorEnabled;
    UIColor *_buttonGlyphColorPressed;
    UIColor *_buttonGlyphColorDisabled;
    UIColor *_elementBackgroundColor;
    UIColor *_elementCoverColor;
    long long _appearance;
}

@property (retain, nonatomic) UIBlurEffect *backgroundBlurEffect;
@property (retain, nonatomic) UIVibrancyEffect *backgroundVibrancyEffect;
@property (retain, nonatomic) UIColor *HUDbackgroundColor;
@property (retain, nonatomic) UIColor *HUDShadowColor;
@property (retain, nonatomic) UIColor *buttonGlyphColorEnabled;
@property (retain, nonatomic) UIColor *buttonGlyphColorPressed;
@property (retain, nonatomic) UIColor *buttonGlyphColorDisabled;
@property (retain, nonatomic) UIColor *elementBackgroundColor;
@property (retain, nonatomic) UIColor *elementCoverColor;
@property (nonatomic) _Bool undoRedoIconOnly;
@property (nonatomic) _Bool cutCopyPasteIconOnly;
@property (nonatomic) _Bool isRTL;
@property (nonatomic) long long appearance;

- (id)vibrancyEffectForBlur:(id)arg1;
- (void)createDynamicColors;
- (id)initWithKeyboardAppearance:(long long)arg1 isRTL:(_Bool)arg2;

@end
