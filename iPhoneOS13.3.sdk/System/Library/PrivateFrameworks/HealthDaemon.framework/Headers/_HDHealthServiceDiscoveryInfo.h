//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBUUID, NSMutableSet;
@protocol OS_dispatch_source;

@interface _HDHealthServiceDiscoveryInfo : NSObject
{
    NSMutableSet *_peripheralsUUIDs;
    BOOL _alwaysNotify;
    BOOL _requiresActiveScan;
    NSUInteger _discoveryIdentifier;
    id /* CDUnknownBlockType */ _discoveryHandler;
    CBUUID *_serviceUUID;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(readonly, nonatomic) BOOL requiresActiveScan; // @synthesize requiresActiveScan=_requiresActiveScan;
@property(readonly, nonatomic) BOOL alwaysNotify; // @synthesize alwaysNotify=_alwaysNotify;
@property(readonly, nonatomic) CBUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ discoveryHandler; // @synthesize discoveryHandler=_discoveryHandler;
@property(nonatomic) NSUInteger discoveryIdentifier; // @synthesize discoveryIdentifier=_discoveryIdentifier;
// - (void).cxx_destruct;
- (BOOL)_addPeripheralUUID:(id)arg1;
- (id)initWithHandler:(id /* CDUnknownBlockType */)arg1 serviceUUID:(id)arg2 alwaysNotify:(BOOL)arg3 requiresActiveScan:(BOOL)arg4;

@end

