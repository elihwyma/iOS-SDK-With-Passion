/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue, TUMomentsControllerDataSourceDelegate;

@interface TUMomentsControllerXPCClient : NSObject

{
    int _token;
    id <TUMomentsControllerDataSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic, readonly) int token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <TUMomentsControllerDataSourceDelegate> delegate;

+ (id)asynchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (void)setSynchronousServer:(id)arg1;
+ (id)momentsControllerServerXPCInterface;
+ (id)momentsControllerClientXPCInterface;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 requesteeID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)endRequestWithTransactionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerStreamToken:(long long)arg1 requesterID:(id)arg2 remoteIDSDestinations:(id)arg3 remoteMomentsAvailable:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)unregisterStreamToken:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serverWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_registerConnection;
- (oneway void)didUpdateCapabilities:(id)arg1 forVideoStreamToken:(long long)arg2;
- (oneway void)willCaptureRemoteRequestFromRequesterID:(id)arg1;
- (oneway void)didReceiveLocallyRequestedMomentDescriptor:(id)arg1;

@end
