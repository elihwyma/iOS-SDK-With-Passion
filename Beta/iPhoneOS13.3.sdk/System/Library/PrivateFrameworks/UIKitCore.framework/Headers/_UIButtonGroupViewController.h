/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIScrollView, _UIButtonBar;

__attribute__((visibility("hidden")))
@interface _UIButtonGroupViewController : UIViewController <Swift>

{
    _UIButtonBar *_originalOwner;
    _UIButtonBar *_buttonBar;
    UIScrollView *_scrollView;
    NSArray *_barButtonItemGroups;
    _Bool _overLightKeyboard;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)dismissIfNecessary;
- (void)_cleanupForDismissal;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)initWithBarButtonItemGroups:(id)arg1 fromButtonBar:(id)arg2;

@end
