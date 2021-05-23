/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIAlertController.h>

@protocol WKActionSheetDelegate;

__attribute__((visibility("hidden")))
@interface WKActionSheet : UIAlertController

{
    id <WKActionSheetDelegate> _sheetDelegate;
    unsigned long long _arrowDirections;
    _Bool _isRotating;
    _Bool _readyToPresentAfterRotation;
    long long _currentPresentationStyle;
    struct RetainPtr<UIViewController> _currentPresentingViewController;
    struct RetainPtr<UIViewController> _presentedViewControllerWhileRotating;
    struct RetainPtr<id<UIPopoverPresentationControllerDelegate>> _popoverPresentationControllerDelegateWhileRotating;
}

@property (nonatomic) id <WKActionSheetDelegate> sheetDelegate;
@property (nonatomic) unsigned long long arrowDirections;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)_cleanup;
- (void)willRotate;
- (void)didRotate;
- (_Bool)presentSheetFromRect:(struct CGRect)arg1;
- (void)_didRotateAndLayout;
- (struct CGRect)_presentationRectForStyle:(long long)arg1;
- (void)updateSheetPosition;
- (_Bool)presentSheet:(long long)arg1;
- (void)doneWithSheet:(_Bool)arg1;

@end
