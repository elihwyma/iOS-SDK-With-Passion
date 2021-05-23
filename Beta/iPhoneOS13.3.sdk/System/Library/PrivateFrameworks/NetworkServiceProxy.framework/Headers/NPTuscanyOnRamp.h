/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NPTunnelTuscanyEndpoint, NPWaldo, NSData, NSDate, NSDictionary, NSPKeyNetworkAgent, NSString, NSURLSession, NSUUID, NWEndpoint, NWNetworkAgentRegistration;

@interface NPTuscanyOnRamp : NSObject

{
    _Bool _dayPassFailed;
    _Bool _dayPassPending;
    int _error;
    NPTunnelTuscanyEndpoint *_tuscanyEndpoint;
    NSData *_dayPass;
    NSUUID *_dayPassUUID;
    unsigned long long _maxFrameSize;
    long long _TFOStatus;
    unsigned long long _rtt;
    long long _currentEdgeType;
    NSDate *_dayPassCreationDate;
    NWEndpoint *_daypassEndpoint;
    NSDate *_retryDate;
    double _dayPassHardExpiry;
    NWNetworkAgentRegistration *_agentRegistration;
    NSPKeyNetworkAgent *_agent;
    NPWaldo *_parentWaldo;
    NSURLSession *_dayPassSession;
}

@property (readonly) _Bool isDayPassExpired;
@property (readonly) NWEndpoint *daypassEndpoint;
@property (retain) NPTunnelTuscanyEndpoint *tuscanyEndpoint;
@property (retain) NSDate *retryDate;
@property (retain) NSUUID *dayPassUUID;
@property (retain) NSData *dayPass;
@property (retain) NSDate *dayPassCreationDate;
@property unsigned int dayPassSessionCounter;
@property double dayPassHardExpiry;
@property (retain) NWNetworkAgentRegistration *agentRegistration;
@property (retain) NSPKeyNetworkAgent *agent;
@property (weak) NPWaldo *parentWaldo;
@property _Bool dayPassFailed;
@property (retain) NSURLSession *dayPassSession;
@property (readonly) _Bool dayPassRefreshAllowed;
@property _Bool dayPassPending;
@property long long TFOStatus;
@property (readonly) unsigned long long maxFrameSize;
@property (readonly) unsigned long long rtt;
@property (readonly) NSString *shortDescription;
@property (readonly) long long currentEdgeType;
@property int error;
@property (readonly) _Bool isTFOEnabled;
@property (readonly) NSDictionary *descriptionDictionary;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (unsigned int)getNextSessionCounter;
- (void)updateSessionCounterFromKernel;
- (unsigned int)copyValue:(void *)arg1 ofSize:(unsigned int)arg2 fromOffset:(unsigned int)arg3 base:(const char *)arg4 totalLength:(unsigned int)arg5;
- (_Bool)fillTestDaypass;
- (void)invalidateDayPass;
- (_Bool)isDayPassPastExpiry:(double)arg1;
- (void)unregisterAgent;
- (_Bool)registerAgentWithKey:(id)arg1;
- (id)getTuscanyEndpoint:(id)arg1;
- (void)resetParentWaldo:(id)arg1;
- (void)refreshDayPassWithWaldoDelegate:(id)arg1 softExpiry:(double)arg2 retryInterval:(double)arg3 edge:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
