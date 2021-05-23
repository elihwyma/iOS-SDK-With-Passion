/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIViewController.h>

@class NSDictionary, TVApplicationController;

@protocol TVDocumentViewControllerDelegate;

@interface TVDocumentViewController : UIViewController

{
    struct {
        _Bool respondsToWillUpdate;
        _Bool respondsToDidUpdate;
        _Bool respondsToHandleEvent;
        _Bool respondsToDidFailWithError;
        _Bool respondsToDidUpdateWithContext;
    } _delegateFlags;
    NSDictionary *_documentContext;
    TVApplicationController *_appController;
    id <TVDocumentViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) NSDictionary *documentContext;
@property (weak, nonatomic, readonly) TVApplicationController *appController;
@property (weak, nonatomic) id <TVDocumentViewControllerDelegate> delegate;

+ (id)viewControllerWithContext:(id)arg1 forAppController:(id)arg2;

- (void)didChangeDocumentContext;
- (id)tvdvc_initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateUsingContext:(id)arg1;
- (void)willUpdateDocument;
- (void)didUpdateDocument;
- (void)didUpdateWithContext:(id)arg1;
- (void)didFailUpdateWithError:(id)arg1;
- (_Bool)handleEvent:(id)arg1 withElement:(id)arg2 targetResponder:(id)arg3;

@end
