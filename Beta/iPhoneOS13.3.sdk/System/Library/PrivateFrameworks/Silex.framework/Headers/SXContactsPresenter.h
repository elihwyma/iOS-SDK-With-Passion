/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSString, UIViewController;

@protocol SXViewControllerPresenting;

@interface SXContactsPresenter : NSObject

{
    id <SXViewControllerPresenting> _viewControllerPresenting;
    CNContactStore *_contactStore;
    UIViewController *_presentedViewController;
}

@property (nonatomic, readonly) id <SXViewControllerPresenting> viewControllerPresenting;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)presentContact:(id)arg1;
- (id)initWithViewControllerPresenting:(id)arg1 contactStore:(id)arg2;
- (void)dismissPresentedViewController;

@end
