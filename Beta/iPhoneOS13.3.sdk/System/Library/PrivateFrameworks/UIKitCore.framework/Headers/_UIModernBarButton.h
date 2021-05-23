/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIButton.h>

__attribute__((visibility("hidden")))
@interface _UIModernBarButton : UIButton

{
    struct UIEdgeInsets __additionalSelectionInsets;
}

@property (nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets _additionalSelectionInsets;

- (struct CGRect)_selectedIndicatorBounds;
- (struct CGSize)_roundSize:(struct CGSize)arg1;

@end
