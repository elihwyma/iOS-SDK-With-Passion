/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIVisualEffectView.h>

@class NSObject, TintColorUpdateView;

@protocol EKUITintColorUpdateDelegate;

@interface EKUIVisualEffectView : UIVisualEffectView

{
    TintColorUpdateView *_updateView;
    NSObject<EKUITintColorUpdateDelegate> *_tintColorDelegate;
}

@property (weak, nonatomic) NSObject<EKUITintColorUpdateDelegate> *tintColorDelegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;
- (void)subTintColorUpdatedToColor:(id)arg1;

@end
