/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSError, NSString, NWEndpoint, NWParameters, NWPath;

@protocol NWTCPConnectionAuthenticationDelegate, OS_nw_connection;

@interface NWTCPConnection : NSObject

{
    _Bool _viable;
    _Bool _hasBetterPath;
    long long _state;
    NWEndpoint *_endpoint;
    NSError *_internalError;
    NSObject<OS_nw_connection> *_internalConnection;
    id <NWTCPConnectionAuthenticationDelegate> _delegate;
    NWParameters *_parameters;
}

@property (retain, nonatomic) NWEndpoint *endpoint;
@property (retain) NSError *internalError;
@property (retain) NSObject<OS_nw_connection> *internalConnection;
@property (nonatomic) long long state;
@property (nonatomic, getter=isViable) _Bool viable;
@property (nonatomic) _Bool hasBetterPath;
@property (weak) id <NWTCPConnectionAuthenticationDelegate> delegate;
@property (nonatomic, readonly) NWParameters *parameters;
@property (copy, nonatomic, readonly) NSString *privateDescription;
@property (nonatomic, readonly) _Bool TFOSucceeded;
@property (nonatomic, readonly) _Bool isMultipath;
@property (nonatomic, readonly) unsigned long long multipathSubflowCount;
@property (nonatomic, readonly) unsigned long long multipathConnectedSubflowCount;
@property (nonatomic, readonly) int multipathPrimarySubflowInterfaceIndex;
@property (nonatomic, readonly) NSDictionary *multipathSubflowSwitchCounts;
@property (nonatomic, readonly) NSDictionary *TCPInfo;
@property (nonatomic, readonly) NSData *metadata;
@property (nonatomic, readonly) NWPath *connectedPath;
@property (nonatomic, readonly) NWEndpoint *localAddress;
@property (nonatomic, readonly) NWEndpoint *remoteAddress;
@property (nonatomic, readonly) NSData *txtRecord;
@property (nonatomic, readonly) NSError *error;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)stringFromNWTCPConnectionState:(long long)arg1;

- (void)dealloc;
- (id)description;
- (void)cancel;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)initWithAcceptedInternalConnection:(id)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithUpgradeForConnection:(id)arg1;
- (void)readLength:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)write:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeClose;
- (void)handlePeerCertificateTrustEvaluationWithMetadata:(id)arg1 trust:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleIdentityRequestWithMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setupEventHandler;
- (_Bool)startInternal;
- (_Bool)fillOutTCPConnectionInfo:(struct tcp_connection_info *)arg1;

@end
