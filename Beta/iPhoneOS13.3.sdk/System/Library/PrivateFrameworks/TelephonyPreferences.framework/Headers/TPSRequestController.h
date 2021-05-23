/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, NSMapTable, NSMutableOrderedSet, TPSRequest;

@protocol OS_dispatch_queue;

@interface TPSRequestController : NSObject

{
    TPSRequest *_pendingRequest;
    NSMapTable *_delegateToQueue;
    NSMutableOrderedSet *_requests;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    CoreTelephonyClient *_telephonyClient;
}

@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (retain, nonatomic) TPSRequest *pendingRequest;
@property (retain, nonatomic) NSMutableOrderedSet *requests;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (nonatomic, readonly) CoreTelephonyClient *telephonyClient;

- (id)init;
- (void)execute;
- (void)addRequest:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)executeRequest:(id)arg1;
- (void)postResponse:(id)arg1;

@end
