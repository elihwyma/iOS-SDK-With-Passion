/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, UIBlurEffect, UIColor;

@interface UITextInputAssistantItem : NSObject

{
    _Bool _allowsHidingShortcuts;
    _Bool _showsBarButtonItemsInline;
    _Bool _independentGroupSizes;
    NSArray *_leadingBarButtonGroups;
    NSArray *_trailingBarButtonGroups;
    NSArray *_centerBarButtonGroups;
    double _marginOverride;
    UIColor *_detachedBackgroundColor;
    UIBlurEffect *_detachedBackgroundEffect;
    UIColor *_detachedTintColor;
}

@property (nonatomic, readonly, getter=_hasItemsToDisplay) _Bool hasItemsToDisplay;
@property (nonatomic, readonly, getter=_requiresPredictionDisabled) _Bool requiresPredictionDisabled;
@property (nonatomic, getter=_showsBarButtonItemsInline, setter=_setShowsBarButtonItemsInline:) _Bool showsBarButtonItemsInline;
@property (copy, nonatomic, getter=_centerBarButtonGroups, setter=_setCenterBarButtonGroups:) NSArray *centerBarButtonGroups;
@property (nonatomic, getter=_independentGroupSizes, setter=_setIndependentGroupSizes:) _Bool independentGroupSizes;
@property (nonatomic, getter=_marginOverride, setter=_setMarginOverride:) double marginOverride;
@property (retain, nonatomic, getter=_detachedBackgroundColor, setter=_setDetachedBackgroundColor:) UIColor *detachedBackgroundColor;
@property (copy, nonatomic, getter=_detachedBackgroundEffect, setter=_setDetachedBackgroundEffect:) UIBlurEffect *detachedBackgroundEffect;
@property (retain, nonatomic, getter=_detachedTintColor, setter=_setDetachedTintColor:) UIColor *detachedTintColor;
@property (nonatomic) _Bool allowsHidingShortcuts;
@property (copy, nonatomic) NSArray *leadingBarButtonGroups;
@property (copy, nonatomic) NSArray *trailingBarButtonGroups;

+ (id)_keyboardDeleteItem;

- (id)init;
- (void)dealloc;
- (id)description;

@end
