/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardMenuView.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardDictationMenu : UIKeyboardMenuView

+ (id)sharedInstance;
+ (id)activeInstance;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)preferredSize;
- (void)hide;
- (void)fade;
- (void)fadeWithDelay:(double)arg1;
- (_Bool)usesTable;
- (void)cleanupForFadeOrHide;
- (_Bool)centerPopUpOverKey;
- (void)performShowAnimation;
- (void)willShow;
- (_Bool)usesDimmingView;

@end
