/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITapGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer

{
    _Bool _failWhenTappingInBars;
    long long _tapCategory;
}

@property (nonatomic, readonly) long long tapCategory;
@property (nonatomic) _Bool failWhenTappingInBars;

- (id)description;
- (void)setDelegate:(id)arg1;
- (void)_setDelegate:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (long long)_categoryForTapLocation:(struct CGPoint)arg1;

@end
