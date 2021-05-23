/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRConnection.h>

@class SFService;

@interface TRServerConnection : TRConnection

{
    SFService *_service;
}

@property (weak, nonatomic) SFService *service;

- (void)invalidate;
- (void)sendResponse:(id)arg1;
- (void)sendEvent:(id)arg1;
- (id)initWithService:(id)arg1;
- (void)sendRequest:(id)arg1;

@end
