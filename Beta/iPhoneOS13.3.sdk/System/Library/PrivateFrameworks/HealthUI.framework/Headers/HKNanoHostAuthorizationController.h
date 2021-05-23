/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol HKHealthPrivacyHostAuthorizationControllerDelegate;

@interface HKNanoHostAuthorizationController : NSObject

{
    id <HKHealthPrivacyHostAuthorizationControllerDelegate> _delegate;
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id <HKHealthPrivacyHostAuthorizationControllerDelegate> delegate;

- (id)init;
- (void)invalidate;
- (void)show;
- (void)didFinishWithError:(id)arg1;
- (void)connectionDidInterrupt;
- (void)connectionDidInvalidate;
- (void)setRequestRecord:(id)arg1 presentationRequests:(id)arg2;
- (void)_remoteObjectProxyWithCompletion:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;

@end
