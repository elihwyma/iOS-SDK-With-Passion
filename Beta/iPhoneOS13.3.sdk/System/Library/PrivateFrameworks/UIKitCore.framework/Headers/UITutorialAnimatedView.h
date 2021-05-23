/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CALayer, CAPackage;

__attribute__((visibility("hidden")))
@interface UITutorialAnimatedView : UIView

{
    CALayer *_packageLayer;
    long long _appearance;
    CAPackage *_package;
}

@property (nonatomic) long long appearance;
@property (retain, nonatomic) CAPackage *package;

- (id)initWithKeyboardAppearance:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_setPackage:(id)arg1;

@end
