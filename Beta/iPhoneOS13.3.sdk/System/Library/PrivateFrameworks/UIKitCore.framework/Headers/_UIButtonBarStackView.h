/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStackView.h>

@class _UIButtonBar;

__attribute__((visibility("hidden")))
@interface _UIButtonBarStackView : UIStackView

{
    _UIButtonBar *_buttonBar;
}

+ (Class)layerClass;

- (id)init;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithButtonBar:(id)arg1;

@end
