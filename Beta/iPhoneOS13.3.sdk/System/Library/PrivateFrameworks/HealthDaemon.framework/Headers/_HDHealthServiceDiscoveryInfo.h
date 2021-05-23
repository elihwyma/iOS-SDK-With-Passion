/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class CBUUID, NSMutableSet;

@protocol OS_dispatch_source;

@interface _HDHealthServiceDiscoveryInfo : NSObject

{
    NSMutableSet *_peripheralsUUIDs;
    _Bool _alwaysNotify;
    _Bool _requiresActiveScan;
    unsigned long long _discoveryIdentifier;
    CDUnknownBlockType _discoveryHandler;
    CBUUID *_serviceUUID;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property (nonatomic) unsigned long long discoveryIdentifier;
@property (nonatomic, readonly) CDUnknownBlockType discoveryHandler;
@property (nonatomic, readonly) CBUUID *serviceUUID;
@property (nonatomic, readonly) _Bool alwaysNotify;
@property (nonatomic, readonly) _Bool requiresActiveScan;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;

- (id)initWithHandler:(CDUnknownBlockType)arg1 serviceUUID:(id)arg2 alwaysNotify:(_Bool)arg3 requiresActiveScan:(_Bool)arg4;
- (_Bool)_addPeripheralUUID:(id)arg1;

@end
