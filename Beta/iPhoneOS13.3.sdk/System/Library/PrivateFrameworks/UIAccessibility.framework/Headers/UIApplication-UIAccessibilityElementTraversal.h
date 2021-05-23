/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <UIKit/UIApplication.h>

@class NSDate;

@interface UIApplication (UIAccessibilityElementTraversal)

@property (retain, nonatomic) NSDate *accessibilityLastGesturedTextInputStatusChange;

- (_Bool)_accessibilitySystemAppServerIsReady;
- (_Bool)_accessibilityIsAppReadyToBeProbed;
- (_Bool)_accessibilityIsSystemAppServer;
- (_Bool)_accessibilityEnumerateSiblingsWithParent:(id *)arg1 options:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;
- (id)_accessibilityViewChildrenWithOptions:(id)arg1 referenceWindow:(id)arg2;
- (id)_accessibilityElementWindowsWithOptions:(id)arg1 referenceWindow:(id)arg2;
- (void)_accessibilityAddKeyboardWindowToArray:(id)arg1 forModalWindow:(id)arg2;
- (id)accessibilityPresentingViewController;

@end
