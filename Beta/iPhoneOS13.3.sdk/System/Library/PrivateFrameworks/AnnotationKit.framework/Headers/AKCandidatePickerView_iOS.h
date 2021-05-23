/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIView.h>

@class NSArray, UIStackView, UIVisualEffectView;

@interface AKCandidatePickerView_iOS : UIView

{
    UIStackView *_buttonContainer;
    UIVisualEffectView *_visualEffectView;
    long long _blurStyle;
    NSArray *_itemTags;
    NSArray *_annotations;
    NSArray *_buttons;
    id _target;
    SEL _action;
}

@property (retain, nonatomic) UIStackView *buttonContainer;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (nonatomic) long long blurStyle;
@property (retain, nonatomic) NSArray *itemTags;
@property (retain, nonatomic) NSArray *annotations;
@property (retain, nonatomic) NSArray *buttons;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (struct CGSize)intrinsicContentSize;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 items:(id)arg2 annotations:(id)arg3 target:(id)arg4 action:(SEL)arg5 visualStyle:(long long)arg6;
- (void)setBarHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_createButtonsWithBlurStyle:(long long)arg1;
- (void)_selectBackground:(id)arg1 animated:(_Bool)arg2;
- (void)_selectBackground:(id)arg1;
- (long long)tagForCandidateItemAtIndex:(unsigned long long)arg1;

@end
