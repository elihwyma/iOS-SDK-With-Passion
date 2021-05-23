/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NPTunnelTuscanyEndpoint, NSData, NSDictionary, NWEndpoint;

@interface NPFlowProperties : NSObject

{
    unsigned int _flowIdentifier;
    int _dataMode;
    unsigned int _flags;
    unsigned long long _serviceID;
    double _fallbackTimeout;
    NSData *_requestData;
    NPTunnelTuscanyEndpoint *_replacementEndpoint;
    NSDictionary *_replacementAddressMap;
    NWEndpoint *_directEndpoint;
    unsigned long long *_timestamps;
}

@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned long long serviceID;
@property (nonatomic) unsigned int flowIdentifier;
@property (nonatomic) double fallbackTimeout;
@property (nonatomic) _Bool enableNSP;
@property (retain, nonatomic) NSData *requestData;
@property (retain, nonatomic) NPTunnelTuscanyEndpoint *replacementEndpoint;
@property (retain, nonatomic) NSDictionary *replacementAddressMap;
@property (nonatomic) int dataMode;
@property (retain, nonatomic) NWEndpoint *directEndpoint;
@property (nonatomic) _Bool isLoopback;
@property (nonatomic) unsigned long long *timestamps;
@property (nonatomic) _Bool disableIdleTimeout;

- (void)dealloc;
- (id)initWithTLVData:(id)arg1;
- (id)copyTLVData;

@end
