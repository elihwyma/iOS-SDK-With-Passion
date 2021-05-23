/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <FileProviderUI/FPUIAuthenticationTableViewController.h>

@protocol FPUIAuthenticationServerInfoDelegate, FPUIAuthenticationServerRepresentation;

@interface FPUIAuthenticationServerInfoViewController : FPUIAuthenticationTableViewController

{
    id <FPUIAuthenticationServerRepresentation> _serverRepresentation;
    id <FPUIAuthenticationServerInfoDelegate> _serverInfoDelegate;
}

@property (weak, nonatomic) id <FPUIAuthenticationServerInfoDelegate> serverInfoDelegate;

- (void)viewDidLoad;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)removeButtonTapped:(id)arg1;
- (void)setupTableViewSections;
- (id)initWithServerRepresentation:(id)arg1;
- (id)defaultLeftBarButtonItem;

@end
