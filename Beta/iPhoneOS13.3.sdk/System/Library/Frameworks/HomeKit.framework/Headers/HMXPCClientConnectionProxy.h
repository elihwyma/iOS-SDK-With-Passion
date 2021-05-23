/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKit/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMXPCClientConnectionProxy : HMFMessageTransport <Swift>

{
    CDUnknownBlockType _refreshHandler;
}

@property (copy, nonatomic) CDUnknownBlockType refreshHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)messageWithName:(id)arg1 identifier:(id)arg2 target:(id)arg3 payload:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;

- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1;
- (void)handleMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)initWithRefreshHandler:(CDUnknownBlockType)arg1;

@end
