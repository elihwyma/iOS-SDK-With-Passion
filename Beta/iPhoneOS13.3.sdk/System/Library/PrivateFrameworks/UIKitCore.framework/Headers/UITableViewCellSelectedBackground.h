/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, UIColor, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UITableViewCellSelectedBackground : UIView

{
    long long _selectionStyle;
    UIColor *_multiselectBackgroundColor;
    UIColor *_selectionTintColor;
    UIColor *_noneStyleBackgroundColor;
    UIVisualEffectView *_selectionEffectsView;
    _Bool _multiselect;
}

@property (nonatomic) long long selectionStyle;
@property (retain, nonatomic) UIColor *multiselectBackgroundColor;
@property (nonatomic, getter=isMultiselect) _Bool multiselect;
@property (retain, nonatomic) UIColor *selectionTintColor;
@property (copy, nonatomic) NSArray *selectionEffects;
@property (retain, nonatomic) UIColor *noneStyleBackgroundColor;

- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)_canDrawContent;

@end
