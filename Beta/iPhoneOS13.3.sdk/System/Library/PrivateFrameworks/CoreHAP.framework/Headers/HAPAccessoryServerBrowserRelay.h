/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@class NSMutableArray, NSObject;

@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;

@interface HAPAccessoryServerBrowserRelay : HAPAccessoryServerBrowser

{
    NSMutableArray *_discoveredAccessoryServers;
    id <HAPAccessoryServerBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (nonatomic, readonly) NSMutableArray *discoveredAccessoryServers;
@property (weak, nonatomic) id <HAPAccessoryServerBrowserDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

- (id)initWithQueue:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (long long)linkType;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)_setDelegate:(id)arg1 queue:(id)arg2;
- (void)addAccessoryServerWithStream:(id)arg1 name:(id)arg2 identifier:(id)arg3;
- (void)removeAccessoryServerWithStream:(id)arg1;

@end
