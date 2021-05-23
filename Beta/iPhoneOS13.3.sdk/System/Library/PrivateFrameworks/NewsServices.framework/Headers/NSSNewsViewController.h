/*
 Image: /System/Library/PrivateFrameworks/NewsServices.framework/NewsServices
 */

#import <UIKit/UIViewController.h>

@class NSArray, _UIResilientRemoteViewContainerViewController;

@interface NSSNewsViewController : UIViewController

{
    _Bool _linkPreviewing;
    NSArray *_articleIDs;
    _UIResilientRemoteViewContainerViewController *_remoteViewContainerViewController;
}

@property (copy, nonatomic) NSArray *articleIDs;
@property (retain, nonatomic) _UIResilientRemoteViewContainerViewController *remoteViewContainerViewController;
@property (nonatomic, getter=isLinkPreviewing) _Bool linkPreviewing;

+ (_Bool)canOpenURL:(id)arg1;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)requestRemoteViewController;
- (id)initWithArticleID:(id)arg1;
- (id)initWithArticleIDs:(id)arg1;
- (void)setupRemoteViewController:(id)arg1;

@end
