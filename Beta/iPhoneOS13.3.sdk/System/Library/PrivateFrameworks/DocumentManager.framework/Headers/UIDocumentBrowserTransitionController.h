/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <Foundation/NSObject.h>

@class FPItem, NSOperationQueue, NSProgress, NSString, NSURL, UIView;

@protocol DOCServiceDocumentBrowserViewControllerInterface, DOCServiceTransitionProtocol;

@interface UIDocumentBrowserTransitionController : NSObject

{
    NSURL *_itemURL;
    FPItem *_item;
    id <DOCServiceDocumentBrowserViewControllerInterface> _serviceDocumentBrowserProxy;
    UIView *_referenceView;
    _Bool _transitionDidFinish;
    NSProgress *_loadingProgress;
    UIView *_targetView;
    id <DOCServiceTransitionProtocol> _transitionController;
    NSOperationQueue *_transitionControllerQueue;
}

@property _Bool transitionDidFinish;
@property (retain, nonatomic) id <DOCServiceTransitionProtocol> transitionController;
@property (retain, nonatomic) NSOperationQueue *transitionControllerQueue;
@property (retain, nonatomic) NSProgress *loadingProgress;
@property (weak, nonatomic) UIView *targetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_commonInit;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithItemURL:(id)arg1 documentBrowserProxy:(id)arg2 referenceView:(id)arg3;
- (id)initWithItem:(id)arg1 documentBrowserProxy:(id)arg2 referenceView:(id)arg3;

@end
