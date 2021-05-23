/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UIFocusContainerGuide;

@interface _TVFocusRedirectView : UIView

{
    _Bool _containsInertia;
    UIFocusContainerGuide *_containerGuide;
}

@property (nonatomic) _Bool containsInertia;
@property (nonatomic, readonly) UIFocusContainerGuide *containerGuide;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)_containsInertiaSelectionChanges;

@end
