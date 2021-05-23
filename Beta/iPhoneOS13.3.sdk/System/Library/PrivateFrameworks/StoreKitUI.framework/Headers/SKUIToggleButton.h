/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStyledButton.h>

@class NSString, SKUIAttributedStringLayout, SKUIButtonViewElement;

@protocol SKUIToggleButtonDelegate;

__attribute__((visibility("hidden")))
@interface SKUIToggleButton : SKUIStyledButton

{
    _Bool _autoIncrement;
    long long _autoIncrementCount;
    long long _count;
    SKUIButtonViewElement *_element;
    id <SKUIToggleButtonDelegate> _delegate;
    NSString *_itemIdentifier;
    SKUIAttributedStringLayout *_nonToggledLayout;
    NSString *_titleToggleString;
    SKUIAttributedStringLayout *_toggledLayout;
    _Bool _toggled;
    NSString *_toggleItemIdentifier;
    NSString *_nonToggledTitle;
    NSString *_toggledTitle;
    id _nonToggledContents;
    id _toggledContents;
    long long _toggleButtonType;
}

@property (nonatomic) long long autoIncrementCount;
@property (nonatomic) long long count;
@property (weak, nonatomic) SKUIButtonViewElement *element;
@property (retain, nonatomic) NSString *toggleItemIdentifier;
@property (retain, nonatomic) NSString *nonToggledTitle;
@property (retain, nonatomic) NSString *toggledTitle;
@property (retain, nonatomic) id nonToggledContents;
@property (retain, nonatomic) id toggledContents;
@property (nonatomic) long long toggleButtonType;
@property (nonatomic, getter=isToggled) _Bool toggled;
@property (nonatomic) _Bool autoIncrement;
@property (weak, nonatomic) id <SKUIToggleButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)_titleAttributes;
- (void)setToggled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setButtonTitleText:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStateChanged:(id)arg2;
- (id)_toggledLayout;
- (id)_nonToggledLayout;
- (void)_showToggleState:(_Bool)arg1;
- (id)_layoutForString:(id)arg1;
- (void)_sendWillAnimate;
- (void)_sendDidAnimate;

@end
