/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class RMSDAAPRequestManager, RMSFairPlaySession;

__attribute__((visibility("hidden")))
@interface RMSDAAPLoginManager : NSObject

{
    RMSDAAPRequestManager *_requestManager;
    RMSFairPlaySession *_fairPlaySession;
    _Bool _isFairPlayRequired;
}

- (void)_requestControlInterfaceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_requestFairPlayHandshake:(CDUnknownBlockType)arg1;
- (void)_requestLoginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_requestServerInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_isFairplayRequiredForServerInfo:(id)arg1;
- (void)_continueFairPlayHandshakeWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRequestManager:(id)arg1;
- (void)loginWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
