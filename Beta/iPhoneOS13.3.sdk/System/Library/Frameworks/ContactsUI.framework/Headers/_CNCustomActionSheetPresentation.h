/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _CNCustomActionSheetPresentation : NSObject

{
    UIView *_sourceView;
    CDUnknownBlockType _dismissHandler;
    UIViewController *_viewController;
    unsigned long long _permittedArrowDirections;
    struct CGRect _sourceRect;
}

@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect sourceRect;
@property (copy, nonatomic) CDUnknownBlockType dismissHandler;
@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)presentedViewController;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1;
- (void)prepareForPresentationOfController:(id)arg1;

@end
