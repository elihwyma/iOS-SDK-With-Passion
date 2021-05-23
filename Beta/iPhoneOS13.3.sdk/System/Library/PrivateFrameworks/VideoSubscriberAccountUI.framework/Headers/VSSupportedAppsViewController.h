/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSOperationQueue, VSAuditToken, VSOptional;

@protocol VSSupportedAppsViewControllerDelegate;

@interface VSSupportedAppsViewController : UIViewController

{
    VSOptional *_identityProvider;
    VSAuditToken *_auditToken;
    id <VSSupportedAppsViewControllerDelegate> _delegate;
    NSOperationQueue *_privateQueue;
    NSArray *_apps;
}

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) NSArray *apps;
@property (retain, nonatomic) VSOptional *identityProvider;
@property (copy, nonatomic) VSAuditToken *auditToken;
@property (weak, nonatomic) id <VSSupportedAppsViewControllerDelegate> delegate;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)_didFinish;
- (void)_presentError:(id)arg1;
- (void)beginLoadingApps;
- (void)_doneButtonPresed:(id)arg1;
- (void)_finishLoadingApps:(id)arg1;

@end
