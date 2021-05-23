/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@protocol CALayerDelegate;

__attribute__((visibility("hidden")))
@interface _UIStackedImageLayerWrappingView : UIView

{
    id <CALayerDelegate> _actionDelegate;
}

@property (weak, nonatomic) id <CALayerDelegate> actionDelegate;

- (void)dealloc;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

@end
