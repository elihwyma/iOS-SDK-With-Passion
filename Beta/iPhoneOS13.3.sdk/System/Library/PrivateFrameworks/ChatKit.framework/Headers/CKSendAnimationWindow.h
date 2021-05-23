/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIAutoRotatingWindow.h>

@class CKGradientReferenceView;

__attribute__((visibility("hidden")))
@interface CKSendAnimationWindow : UIAutoRotatingWindow

{
    CKGradientReferenceView *_gradientReferenceView;
}

@property (retain, nonatomic) CKGradientReferenceView *gradientReferenceView;

- (_Bool)_canAffectStatusBarAppearance;
- (id)initWithWindowScene:(id)arg1 frame:(struct CGRect)arg2;

@end
