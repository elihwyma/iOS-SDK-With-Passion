/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSDictionary, NSString, NSUUID, __CFN_SessionMetrics;

@protocol OS_nw_connection, OS_nw_endpoint, OS_nw_establishment_report;

@interface __CFN_ConnectionMetrics : NSObject

{
    struct os_unfair_lock_s connectionLock;
    _Bool _TLSConfigured;
    _Bool _proxyConfigured;
    _Bool _cellular;
    _Bool _expensive;
    _Bool _constrained;
    _Bool _multipath;
    _Bool _usedTFO;
    _Bool _usedByTransaction;
    _Bool _coalesced;
    _Bool _needsCachedTCPInfoAtEnd;
    _Bool _needsCachedSubflowCounts;
    unsigned short _negotiatedTLSProtocolVersion;
    unsigned short _negotiatedTLSCipherSuite;
    NSUUID *_UUID;
    unsigned long long _identifier;
    NSUUID *_initiatingTransactionID;
    double _beginTime;
    double _establishTime;
    double _endTime;
    NSObject<OS_nw_endpoint> *_endpoint;
    NSObject<OS_nw_endpoint> *_localEndpoint;
    NSObject<OS_nw_endpoint> *_remoteEndpoint;
    NSString *_interfaceName;
    NSString *_networkProtocolName;
    NSObject<OS_nw_establishment_report> *_establishmentReport;
    NSObject<OS_nw_connection> *_connection;
    __CFN_SessionMetrics *_sessionMetrics;
    NSDictionary *_cachedTCPInfoAtEnd;
    NSDictionary *_cachedSubflowCounts;
    weak_ptr_905febf0 _transportConnection;
}

@property (nonatomic) weak_ptr_905febf0 transportConnection;
@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (retain, nonatomic) __CFN_SessionMetrics *sessionMetrics;
@property (nonatomic) _Bool needsCachedTCPInfoAtEnd;
@property (retain, nonatomic) NSDictionary *cachedTCPInfoAtEnd;
@property (nonatomic) _Bool needsCachedSubflowCounts;
@property (retain, nonatomic) NSDictionary *cachedSubflowCounts;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) NSUUID *initiatingTransactionID;
@property (nonatomic) double beginTime;
@property (nonatomic) double establishTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *endpoint;
@property (nonatomic, getter=isTLSConfigured) _Bool TLSConfigured;
@property (nonatomic, getter=isProxyConfigured) _Bool proxyConfigured;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *localEndpoint;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *remoteEndpoint;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic, getter=isCellular) _Bool cellular;
@property (nonatomic, getter=isExpensive) _Bool expensive;
@property (nonatomic, getter=isConstrained) _Bool constrained;
@property (nonatomic, getter=isMultipath) _Bool multipath;
@property (nonatomic) _Bool usedTFO;
@property (copy, nonatomic) NSString *networkProtocolName;
@property (nonatomic) unsigned short negotiatedTLSProtocolVersion;
@property (nonatomic) unsigned short negotiatedTLSCipherSuite;
@property (retain, nonatomic) NSObject<OS_nw_establishment_report> *establishmentReport;
@property (nonatomic) _Bool usedByTransaction;
@property (nonatomic, getter=isCoalesced) _Bool coalesced;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)wait;
- (id).cxx_construct;
- (id)initWithConnection:(shared_ptr_8da4e70b)arg1;
- (void)end;
- (void)begin;
- (id)subflowCounts;
- (id)tcpInfo;
- (void)linkWithTransaction:(id)arg1 sessionMetrics:(id)arg2;
- (void)establish;
- (id)_tcpInfo;
- (id)_subflowCounts;

@end
