/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIControl.h>

@class AKController, UIStackView;

@interface AKModernToolbarPicker : UIControl

{
    UIStackView *_stackview;
    AKController *_controller;
    long long _currentTag;
}

@property (weak, nonatomic) AKController *controller;
@property (retain, nonatomic) UIStackView *stackview;
@property (nonatomic) long long currentTag;

- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;
- (void)revalidateItems:(id)arg1;

@end
