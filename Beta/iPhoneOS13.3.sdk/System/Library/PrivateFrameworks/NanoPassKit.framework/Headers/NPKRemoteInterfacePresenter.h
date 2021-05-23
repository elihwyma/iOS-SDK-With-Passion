/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol NPKRemoteInterfacePresenterDelegate;

@interface NPKRemoteInterfacePresenter : NSObject

{
    id <NPKRemoteInterfacePresenterDelegate> _delegate;
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id <NPKRemoteInterfacePresenterDelegate> delegate;

- (id)init;
- (void)clearInAppInterfaceForSkeletonPeerPaymentQuote:(id)arg1 withError:(id)arg2;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostApplicationName:(id)arg2 hostBundleIdentifier:(id)arg3 hostProcessIdentifier:(int)arg4 hostIdentifier:(id)arg5 orientation:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)presentContinuityPaymentInterfaceWithRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showInAppInterfaceWithSkeletonPeerPaymentQuote:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentSetupApplePayAlert:(id)arg1;

@end
