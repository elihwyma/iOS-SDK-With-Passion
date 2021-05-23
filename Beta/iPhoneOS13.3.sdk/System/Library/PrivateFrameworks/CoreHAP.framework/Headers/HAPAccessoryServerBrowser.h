/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSObject;

@protocol HAPKeyStore, OS_dispatch_queue;

@interface HAPAccessoryServerBrowser : HMFObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    long long _linkType;
    id <HAPKeyStore> _keyStore;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) id <HAPKeyStore> keyStore;
@property (nonatomic, readonly) long long linkType;

- (id)initWithQueue:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;

@end
