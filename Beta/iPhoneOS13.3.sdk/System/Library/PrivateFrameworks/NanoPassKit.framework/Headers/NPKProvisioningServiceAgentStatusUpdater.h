/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class IDSProtobuf, IDSService, NSDictionary, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKProvisioningServiceAgentStatusUpdater : NSObject

{
    IDSService *_service;
    IDSProtobuf *_pendingStatusProtobuf;
    long long _messagePriority;
    NSString *_responseIdentifier;
    NSObject<OS_dispatch_source> *_statusTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_sendOptions;
    unsigned long long _updatesSent;
    unsigned long long _maxUpdates;
}

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) IDSProtobuf *pendingStatusProtobuf;
@property (nonatomic) long long messagePriority;
@property (copy, nonatomic) NSString *responseIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *statusTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *sendOptions;
@property (nonatomic) unsigned long long updatesSent;
@property (nonatomic) unsigned long long maxUpdates;

- (void)dealloc;
- (void)invalidate;
- (void)_sendStatusUpdate;
- (id)initWithPendingStatusProtobuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 maxUpdates:(unsigned long long)arg4 responseIdentifier:(id)arg5 sendOptions:(id)arg6 queue:(id)arg7 updateInterval:(double)arg8;
- (id)initWithPendingStatusProtobuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 maxUpdates:(unsigned long long)arg4 responseIdentifier:(id)arg5 sendOptions:(id)arg6 queue:(id)arg7;

@end
