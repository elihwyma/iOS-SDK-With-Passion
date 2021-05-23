/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/_UIRemoteViewController.h>

#import <GameCenterUI/Swift-Protocol.h>

@class NSMapTable, NSString, UIViewController;

@protocol GKExtensionHostViewControllerDelegate, GKSocialGamingHostInterface;

@interface GKExtensionHostViewController : _UIRemoteViewController <Swift>

{
    id <GKExtensionHostViewControllerDelegate> _delegate;
    UIViewController<GKSocialGamingHostInterface> *_hostViewController;
    NSMapTable *_targetForSelector;
}

@property (retain, nonatomic) NSMapTable *targetForSelector;
@property (weak, nonatomic) id <GKExtensionHostViewControllerDelegate> delegate;
@property (weak, nonatomic) UIViewController<GKSocialGamingHostInterface> *hostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (oneway void)finishExtension;
- (oneway void)extensionWillFinish;
- (void)addTarget:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3;
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;
- (void)buildLookupForHost:(id)arg1;

@end
