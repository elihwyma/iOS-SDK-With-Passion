/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UIViewControllerWrapperView : UIView

{
    _Bool _tightWrappingDisabled;
}

@property (nonatomic) _Bool tightWrappingDisabled;

+ (id)existingWrapperViewForView:(id)arg1;
+ (id)wrapperViewForView:(id)arg1 wrapperFrame:(struct CGRect)arg2 viewFrame:(struct CGRect)arg3;
+ (id)wrapperViewForView:(id)arg1 frame:(struct CGRect)arg2;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)unwrapView;
- (void)unwrapView:(id)arg1;

@end
