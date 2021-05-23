/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICDelegationNetServiceTXTRecord, NSArray, NSMutableArray, NSNetService, NSString;

@protocol OS_dispatch_queue;

@interface ICDelegationProviderNetService : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_netServiceStreamResolutionQueue;
    NSMutableArray *_resolutionCompletionHandlers;
    long long _state;
    ICDelegationNetServiceTXTRecord *_txtRecord;
    NSNetService *_netService;
}

@property (nonatomic, readonly) NSNetService *netService;
@property (copy, nonatomic, readonly) NSArray *delegationAccountUUIDs;
@property (copy, nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) long long securityMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_setState:(long long)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (id)initWithNetService:(id)arg1;
- (void)getResolvedStreamsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateTXTRecordProperties;
- (void)_resolveWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
