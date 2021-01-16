//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPTunnelTuscanyEndpoint, NSData, NSDictionary, NWEndpoint;

@interface NPFlowProperties : NSObject
{
    unsigned int _flowIdentifier;
    int _dataMode;
    unsigned int _flags;
    NSUInteger _serviceID;
    double _fallbackTimeout;
    NSData *_requestData;
    NPTunnelTuscanyEndpoint *_replacementEndpoint;
    NSDictionary *_replacementAddressMap;
    NWEndpoint *_directEndpoint;
    NSUInteger _timestamps;
}

@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) NSUInteger timestamps; // @synthesize timestamps=_timestamps;
@property(retain, nonatomic) NWEndpoint *directEndpoint; // @synthesize directEndpoint=_directEndpoint;
@property(nonatomic) int dataMode; // @synthesize dataMode=_dataMode;
@property(retain, nonatomic) NSDictionary *replacementAddressMap; // @synthesize replacementAddressMap=_replacementAddressMap;
@property(retain, nonatomic) NPTunnelTuscanyEndpoint *replacementEndpoint; // @synthesize replacementEndpoint=_replacementEndpoint;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(nonatomic) double fallbackTimeout; // @synthesize fallbackTimeout=_fallbackTimeout;
@property(nonatomic) unsigned int flowIdentifier; // @synthesize flowIdentifier=_flowIdentifier;
@property(nonatomic) NSUInteger serviceID; // @synthesize serviceID=_serviceID;
// - (void).cxx_destruct;
@property(nonatomic) BOOL disableIdleTimeout;
@property(nonatomic) BOOL isLoopback;
@property(nonatomic) BOOL enableNSP;
- (id)copyTLVData;
- (void)dealloc;
- (id)initWithTLVData:(id)arg1;

@end
