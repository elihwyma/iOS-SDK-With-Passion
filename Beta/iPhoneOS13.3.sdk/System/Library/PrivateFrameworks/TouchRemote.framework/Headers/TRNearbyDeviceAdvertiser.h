/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSMapTable, SFService;

@protocol OS_dispatch_queue, TRNearbyDeviceAdvertiserDelegate;

@interface TRNearbyDeviceAdvertiser : NSObject

{
    id <TRNearbyDeviceAdvertiserDelegate> _delegate;
    unsigned long long _state;
    SFService *_service;
    NSObject<OS_dispatch_queue> *_advertiserQ;
    unsigned long long _requestedService;
    NSMapTable *_sessionsTable;
    NSObject<OS_dispatch_queue> *_sessionsTableQ;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) SFService *service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *advertiserQ;
@property unsigned long long requestedService;
@property (retain, nonatomic) NSMapTable *sessionsTable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionsTableQ;
@property (weak) id <TRNearbyDeviceAdvertiserDelegate> delegate;

+ (void)initialize;

- (id)init;
- (void)stopAdvertising;
- (void)_handleInvalidation;
- (void)_handleInterruption;
- (void)_handleEventMessage:(id)arg1;
- (void)_handleRequestMessage:(id)arg1;
- (void)_handleActivationWithError:(id)arg1;
- (void)_requestSessionForMessage:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)_respondToRequest:(id)arg1 withError:(id)arg2;
- (void)_handleNewConnectionFromPeerDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)startAdvertisingWithService:(unsigned long long)arg1;
- (void)pauseAdvertising;
- (void)resumeAdvertising;

@end
