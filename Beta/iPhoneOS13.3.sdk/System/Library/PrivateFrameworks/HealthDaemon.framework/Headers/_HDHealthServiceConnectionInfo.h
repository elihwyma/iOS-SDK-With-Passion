/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSData, NSUUID;

@protocol OS_dispatch_source;

@interface _HDHealthServiceConnectionInfo : NSObject

{
    _Bool _pairingAttempted;
    unsigned long long _sessionIdentifier;
    CDUnknownBlockType _sessionHandler;
    CDUnknownBlockType _dataHandler;
    CDUnknownBlockType _characteristicsHandler;
    CDUnknownBlockType _mfaSuccessHandler;
    unsigned long long _connectionOptions;
    long long _mfaStatus;
    NSData *_autoPairData;
    NSUUID *_peripheralUUID;
    long long _connectionState;
    long long _pairingState;
    double _timeoutInterval;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property (nonatomic) unsigned long long sessionIdentifier;
@property (nonatomic, readonly) CDUnknownBlockType sessionHandler;
@property (nonatomic, readonly) CDUnknownBlockType dataHandler;
@property (nonatomic, readonly) CDUnknownBlockType characteristicsHandler;
@property (nonatomic, readonly) CDUnknownBlockType mfaSuccessHandler;
@property (nonatomic, readonly) unsigned long long connectionOptions;
@property (nonatomic, readonly) long long mfaStatus;
@property (nonatomic, readonly) NSData *autoPairData;
@property (nonatomic, readonly) NSUUID *peripheralUUID;
@property (nonatomic) long long connectionState;
@property (nonatomic) long long pairingState;
@property (nonatomic, readonly) double timeoutInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (nonatomic) _Bool pairingAttempted;

- (id)initWithSessionHandler:(CDUnknownBlockType)arg1 dataHandler:(CDUnknownBlockType)arg2 characteristicsHandler:(CDUnknownBlockType)arg3 mfaSuccessHandler:(CDUnknownBlockType)arg4 autoPairData:(id)arg5 connectionOptions:(unsigned long long)arg6 timeoutInterval:(double)arg7 peripheralUUID:(id)arg8;
- (void)markMFAStatusComplete;

@end
