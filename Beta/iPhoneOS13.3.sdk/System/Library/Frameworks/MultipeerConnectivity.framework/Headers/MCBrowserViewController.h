/*
 Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import <UIKit/UIViewController.h>

@class MCNearbyServiceBrowser, MCPeerID, MCSession, NSBundle, NSMutableArray, NSMutableDictionary, NSObject, NSString, UIBarButtonItem, UINavigationBar, UITableView;

@protocol MCBrowserViewControllerDelegate, OS_dispatch_queue;

@interface MCBrowserViewController : UIViewController

{
    id <MCBrowserViewControllerDelegate> _delegate;
    MCNearbyServiceBrowser *_browser;
    MCSession *_session;
    unsigned long long _minimumNumberOfPeers;
    unsigned long long _maximumNumberOfPeers;
    MCPeerID *_myPeerID;
    UITableView *_tableView;
    NSMutableArray *_nearbyPeersSection;
    NSMutableArray *_invitedPeersSection;
    NSMutableDictionary *_invitedPeersState;
    NSMutableArray *_foundPeers;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    UINavigationBar *_navigationBar;
    NSBundle *_frameworkBundle;
    unsigned long long _declinedPeersCount;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (copy, nonatomic) MCPeerID *myPeerID;
@property (retain, nonatomic) MCNearbyServiceBrowser *browser;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *nearbyPeersSection;
@property (retain, nonatomic) NSMutableArray *invitedPeersSection;
@property (retain, nonatomic) NSMutableDictionary *invitedPeersState;
@property (retain, nonatomic) NSMutableArray *foundPeers;
@property (retain, nonatomic) MCSession *session;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UINavigationBar *navigationBar;
@property (retain, nonatomic) NSBundle *frameworkBundle;
@property (nonatomic) unsigned long long declinedPeersCount;
@property (nonatomic, readonly) _Bool maximumNumberOfPeersReached;
@property (nonatomic, readonly) _Bool minimumNumberOfPeersReached;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (weak, nonatomic) id <MCBrowserViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long minimumNumberOfPeers;
@property (nonatomic) unsigned long long maximumNumberOfPeers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (_Bool)isVisible;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)positionForBar:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)cancelTapped:(id)arg1;
- (void)doneTapped:(id)arg1;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 propagate:(_Bool *)arg4;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(_Bool *)arg5;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(_Bool *)arg6;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(_Bool *)arg5;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(_Bool *)arg4;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (id)initWithBrowser:(id)arg1 session:(id)arg2;
- (void)peer:(id)arg1 changedStateTo:(int)arg2;
- (void)handleViewWillAppear;
- (void)handleViewDidDisappear;
- (void)peerJoinedSession;
- (id)nearbySectionTitle;
- (id)detailStringForPeerState:(int)arg1;
- (void)verifyPeerIsAccountedFor:(id)arg1;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (id)initWithServiceType:(id)arg1 session:(id)arg2;

@end
