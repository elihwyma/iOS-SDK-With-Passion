/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, VCMomentsMessengerDelegate;

__attribute__((visibility("hidden")))
@interface VCMomentsManager : NSObject

{
    NSMutableDictionary *_streamTokenList;
    id _delegate;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

@property (nonatomic) id <VCMomentsMessengerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)registerBlocksForService;
- (void)notifyClientsWithStreamToken:(long long)arg1 service:(char *)arg2 arguments:(id)arg3;
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;
- (void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 stillImageURL:(id)arg3 movieURL:(id)arg4 error:(id)arg5;
- (void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(_Bool)arg3;
- (id)messengerFromClientContext:(id)arg1;
- (id)newRequestWithArguments:(id)arg1 state:(unsigned char)arg2;
- (void)registerMomentsMessenger:(id)arg1 withStreamToken:(long long)arg2;
- (void)unregisterMomentsMessengerWithStreamToken:(long long)arg1;

@end
