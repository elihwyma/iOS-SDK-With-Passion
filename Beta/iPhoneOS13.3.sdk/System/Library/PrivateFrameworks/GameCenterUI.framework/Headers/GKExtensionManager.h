/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKExtensionHostViewController, NSString;

@protocol OS_dispatch_queue;

@interface GKExtensionManager : NSObject

{
    long long _extensionLoadState;
    GKExtensionHostViewController *_extensionHostViewController;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSString *_extensionIdentifier;
}

@property (retain, nonatomic) GKExtensionHostViewController *extensionHostViewController;
@property (nonatomic) long long extensionLoadState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (copy, nonatomic) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)extensionDidTerminateWithError:(id)arg1;
- (id)initWithExtensionBundleIdentifer:(id)arg1 host:(id)arg2;
- (void)instantiateViewControllerWithHost:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)tournamentExtensionViewController;
- (_Bool)needToLoadExtension;

@end
