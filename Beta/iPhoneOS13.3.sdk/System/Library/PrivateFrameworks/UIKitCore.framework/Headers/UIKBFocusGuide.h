/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFocusGuide.h>

@protocol UIKBFocusGuideDelegate;

__attribute__((visibility("hidden")))
@interface UIKBFocusGuide : UIFocusGuide

{
    unsigned long long focusHeading;
    id <UIKBFocusGuideDelegate> _keyboardDelegate;
}

@property (nonatomic) unsigned long long focusHeading;
@property (nonatomic) id <UIKBFocusGuideDelegate> keyboardDelegate;

- (void)_didUpdateFocusToPreferredFocusedView;

@end
