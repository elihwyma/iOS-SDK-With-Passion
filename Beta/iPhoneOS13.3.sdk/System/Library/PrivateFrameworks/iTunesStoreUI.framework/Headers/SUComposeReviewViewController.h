/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class NSString, NSURL, SKComposeReviewViewController;

@interface SUComposeReviewViewController : SUViewController

{
    NSURL *_compositionURL;
    SKComposeReviewViewController *_remoteViewController;
}

@property (nonatomic, readonly) NSURL *compositionURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reviewComposeViewControllerDidFinish:(id)arg1;
- (id)initWithCompositionURL:(id)arg1;
- (id)copyScriptViewController;
- (void)_showRemoteView;

@end
