/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TROperation.h>

@interface TRNetworkOperation : TROperation

{
    CDUnknownBlockType _sendingWiFiInfoHandler;
}

@property (copy, nonatomic) CDUnknownBlockType sendingWiFiInfoHandler;

- (void)execute;
- (void)_handleResponse:(id)arg1;
- (void)_sendRequestWithSSID:(id)arg1 password:(id)arg2;

@end
