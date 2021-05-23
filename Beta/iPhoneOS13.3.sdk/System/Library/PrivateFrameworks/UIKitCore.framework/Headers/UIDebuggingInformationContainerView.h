/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationContainerView : UIView

{
    UIView *_shadowView;
    _Bool _shadowHidden;
}

@property (nonatomic) _Bool shadowHidden;

- (void)layoutSubviews;

@end
