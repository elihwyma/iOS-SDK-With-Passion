/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface NNMKSyncEndpoint : NSObject

{
    NSObject<OS_dispatch_queue> *_endpointQueue;
    NSObject<OS_dispatch_queue> *_resendingQueue;
    NSMutableDictionary *_datesForIDSIdentifiersScheduledToBeResent;
    NSMutableDictionary *_lastResendIntervalByIDSIdentifier;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *endpointQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resendingQueue;
@property (retain, nonatomic) NSMutableDictionary *datesForIDSIdentifiersScheduledToBeResent;
@property (retain, nonatomic) NSMutableDictionary *lastResendIntervalByIDSIdentifier;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)enqueueIDSIdentifierForResend:(id)arg1 atDate:(id)arg2 silent:(_Bool)arg3;
- (void)resendObjectsForIDSIdentifier:(id)arg1;
- (void)enqueueIDSIdentifiersForResend:(id)arg1;
- (void)resendReadyIDSIdentifiers;
- (void)resendAllIDSIdentifiers;
- (unsigned long long)newResendIntervalForPreviousResendInterval:(unsigned long long)arg1 errorCode:(long long)arg2;
- (void)dequeueIDSIdentifierForResend:(id)arg1;

@end
