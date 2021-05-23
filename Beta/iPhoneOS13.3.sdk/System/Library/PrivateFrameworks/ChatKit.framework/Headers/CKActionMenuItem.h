/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class UILabel, UIView;

@protocol CKActionMenuItemView;

@interface CKActionMenuItem : NSObject

{
    _Bool _enabled;
    _Bool _highlighted;
    _Bool _selected;
    UIView<CKActionMenuItemView> *_view;
    UILabel<CKActionMenuItemView> *_label;
    id _target;
    SEL _action;
}

@property (retain, nonatomic) UIView<CKActionMenuItemView> *view;
@property (retain, nonatomic) UILabel<CKActionMenuItemView> *label;
@property (retain, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, getter=isSelected) _Bool selected;

+ (id)itemWithImageTemplate:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3 target:(id)arg4 action:(SEL)arg5;
+ (void)animate:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

- (id)init;
- (id)description;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithView:(id)arg1 label:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)sendAction;
- (void)updateForState:(long long)arg1 touchInside:(_Bool)arg2;

@end
