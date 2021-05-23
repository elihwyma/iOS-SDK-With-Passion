/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImageView.h>

__attribute__((visibility("hidden")))
@interface _UIShadowView : UIImageView

{
    _Bool _useLowerIntensity;
}

@property (nonatomic) _Bool useLowerIntensity;

- (void)didMoveToSuperview;
- (void)_updateShadowVisualStyling;

@end
