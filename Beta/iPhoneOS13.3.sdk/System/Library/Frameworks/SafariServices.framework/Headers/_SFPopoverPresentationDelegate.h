/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, UIPopoverPresentationController;

@protocol _SFPopoverSourceInfo;

@interface _SFPopoverPresentationDelegate : NSObject

{
    id <_SFPopoverSourceInfo> _sourceInfo;
    UIPopoverPresentationController *_popoverPresentationController;
    _Bool _popoverUsesAdaptivePresentationInCompact;
}

@property (nonatomic) _Bool popoverUsesAdaptivePresentationInCompact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)attachDelegateToPopoverPresentationController:(id)arg1 anchoredToURLOutlineInNavigationBar:(id)arg2 usesAdaptivePresentationInCompact:(_Bool)arg3;
+ (void)attachDelegateToPopoverPresentationController:(id)arg1 anchoredToReloadButtonInNavigationBar:(id)arg2;
+ (void)attachDelegateToPopoverPresentationController:(id)arg1 anchoredToURLOutlineInNavigationBar:(id)arg2;

- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (id)initWithSourceInfo:(id)arg1;
- (void)attachToPopoverPresentationController:(id)arg1;
- (void)updatePopoverPosition;

@end
