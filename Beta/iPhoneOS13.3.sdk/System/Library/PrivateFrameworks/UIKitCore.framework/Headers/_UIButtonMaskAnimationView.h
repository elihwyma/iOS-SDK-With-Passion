/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIButton, UIColor;

__attribute__((visibility("hidden")))
@interface _UIButtonMaskAnimationView : UIView

{
    unsigned long long _hardEdge;
    UIView *_hardEdgeLine;
    UIButton *_delegate;
}

@property (nonatomic) UIButton *delegate;
@property double borderWidth;
@property (nonatomic) UIColor *borderColor;
@property unsigned long long hardEdge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)layoutSubviews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct CGRect)_frameForLine;

@end
