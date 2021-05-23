/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class APSOutgoingMessageCheckpointTrace, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString, NSURL;

@protocol IDSBaseMessageSigningSession;

@interface IDSBaseMessage : NSObject <Swift>

{
    NSDictionary *_cachedBody;
    NSString *_topic;
    NSDictionary *_userInfo;
    NSData *_serviceData;
    NSDictionary *_clientInfo;
    NSDate *_creationDate;
    NSDictionary *_responseAlert;
    NSString *_dsAuthID;
    NSString *_dataUsageBundleIdentifier;
    id _context;
    int _timeoutRetries;
    _Bool _usingOutgoingPush;
    _Bool _wantsResponse;
    _Bool _wantsMultipleResponses;
    _Bool _wantsIntegerUniqueIDs;
    _Bool _wantsBinaryPush;
    _Bool _forceCellular;
    _Bool _highPriority;
    _Bool _hasReceivedPushAck;
    _Bool _hasAttemptedAPSDelivery;
    _Bool _httpDoNotDecodeData;
    _Bool _ignoreMaxRetryCount;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _deliveryAcknowledgementBlock;
    double _timeout;
    double _timeSent;
    unsigned long long _uniqueID;
    NSNumber *_retryCount;
    long long _importanceLevel;
    long long _deliveryMechanism;
    id <IDSBaseMessageSigningSession> _signingSession;
    NSString *_service;
    NSString *_subService;
    NSString *_underlyingService;
    NSURL *_URLOverride;
    unsigned long long _sentByteCount;
    unsigned long long _receivedByteCount;
    NSNumber *_pushAckTimestamp;
    _Bool _isMultipleAuthCertCapable;
    APSOutgoingMessageCheckpointTrace *_apsdCheckpointTrace;
    NSDictionary *_responseAlertInfo;
    NSNumber *_originalTimestamp;
    NSDate *_requestStart;
    NSDate *_requestEnd;
    NSDate *_responseReceived;
}

@property (retain) NSDate *creationDate;
@property (setter=_setUsingOutgoingPush:) _Bool _usingOutgoingPush;
@property (retain, setter=_setCachedBody:) NSDictionary *_cachedBody;
@property (readonly) _Bool wantsIDSServer;
@property (readonly) _Bool isValidMessage;
@property (readonly) _Bool payloadCanBeLogged;
@property unsigned long long uniqueID;
@property (readonly) NSString *uniqueIDString;
@property (readonly) NSString *dataUsageBundleIdentifier;
@property double timeout;
@property double timeSent;
@property (copy) CDUnknownBlockType completionBlock;
@property (copy) CDUnknownBlockType deliveryAcknowledgementBlock;
@property (readonly) NSString *bagKey;
@property (retain) NSString *topic;
@property (readonly) long long command;
@property (readonly) long long responseCommand;
@property _Bool hasReceivedPushAck;
@property _Bool hasAttemptedAPSDelivery;
@property (retain) APSOutgoingMessageCheckpointTrace *apsdCheckpointTrace;
@property (retain) NSNumber *pushAckTimestamp;
@property long long importanceLevel;
@property long long deliveryMechanism;
@property (copy) NSString *service;
@property (copy) NSString *subService;
@property (copy) NSString *underlyingService;
@property _Bool forceCellular;
@property _Bool highPriority;
@property (readonly) _Bool wantsSignature;
@property (readonly) _Bool wantsBodySignature;
@property (readonly) _Bool wantsCFNetworkTimeout;
@property (readonly) _Bool wantsManagedRetries;
@property (readonly) _Bool wantsExtraTimeoutRetry;
@property (readonly) int maxTimeoutRetries;
@property (readonly) _Bool wantsHTTPHeaders;
@property (readonly) _Bool wantsCompressedBody;
@property _Bool wantsBinaryPush;
@property _Bool wantsIntegerUniqueIDs;
@property (readonly) _Bool wantsJSONBody;
@property (readonly) _Bool wantsBagKey;
@property (readonly) _Bool wantsUserAgentInHeaders;
@property (readonly) _Bool wantsHTTPGet;
@property (readonly) _Bool wantsAPSRetries;
@property (readonly) double anisetteHeadersTimeout;
@property (readonly) _Bool allowsServerProvidedLenientAnisetteTimeout;
@property _Bool wantsResponse;
@property _Bool wantsMultipleResponses;
@property (readonly) _Bool isWebTunnelMessage;
@property (readonly) _Bool wantsIDSSignatures;
@property _Bool httpDoNotDecodeData;
@property (readonly) _Bool requiresPushTokenKeys;
@property int timeoutRetries;
@property (readonly) _Bool ignoresNetworkConnectivity;
@property (readonly) _Bool wantsCustomRetryInterval;
@property (readonly) double customRetryInterval;
@property (readonly) NSArray *requiredKeys;
@property (copy) NSDictionary *responseAlertInfo;
@property (readonly) NSDictionary *messageBody;
@property (readonly) NSDictionary *messageBodyUsingCache;
@property (readonly) NSDictionary *additionalMessageHeaders;
@property (readonly) NSDictionary *additionalQueryStringParameters;
@property (readonly) NSDictionary *additionalInternalHeaders;
@property (readonly) NSDictionary *additionalMessageHeadersForOutgoingPush;
@property (readonly) NSDictionary *nonStandardMessageHeadersForOutgoingPush;
@property _Bool ignoreMaxRetryCount;
@property (nonatomic) struct __SecKey *pushPrivateKey;
@property (nonatomic) struct __SecKey *pushPublicKey;
@property (copy, nonatomic) NSData *pushCertificate;
@property (copy, nonatomic) NSData *pushToken;
@property (nonatomic) _Bool isMultipleAuthCertCapable;
@property (copy, nonatomic) NSMutableArray *certDataArray;
@property (copy, nonatomic) NSMutableArray *publicKeyArray;
@property (copy, nonatomic) NSMutableArray *privateKeyArray;
@property (copy, nonatomic) NSMutableArray *userIDArray;
@property (copy, nonatomic) NSNumber *serverTimestamp;
@property (copy, nonatomic) NSNumber *serverTimestampReceivedDate;
@property (nonatomic, readonly) struct __SecKey *identityPrivateKey;
@property (nonatomic, readonly) struct __SecKey *identityPublicKey;
@property (copy, nonatomic, readonly) NSData *IDCertificate;
@property (retain, nonatomic) id <IDSBaseMessageSigningSession> signingSession;
@property (copy, nonatomic, setter=setDSAuthID:) NSString *dsAuthID;
@property (copy) NSData *serviceData;
@property (copy) NSDictionary *clientInfo;
@property (readonly) NSString *userAgentHeaderString;
@property (copy, nonatomic) NSNumber *retryCount;
@property (readonly) NSString *retryCountKey;
@property (copy) NSURL *URLOverride;
@property (copy, nonatomic) NSNumber *originalTimestamp;
@property (readonly) _Bool allowDualDelivery;
@property (copy) NSDictionary *userInfo;
@property (retain) id context;
@property (nonatomic) unsigned long long sentByteCount;
@property (nonatomic) unsigned long long receivedByteCount;
@property (retain, nonatomic) NSDate *requestStart;
@property (retain, nonatomic) NSDate *requestEnd;
@property (retain, nonatomic) NSDate *responseReceived;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_clearCache;
- (void)_cacheBody;
- (id)messageBodyDataOverride;
- (_Bool)isIDSMessage;
- (_Bool)hasRequiredKeys:(id *)arg1;
- (void)handleResponseHeaders:(id)arg1;
- (void)handleResponseBody:(id)arg1;
- (void)handleResponseStatus:(unsigned long long)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (void)logFailureInfo;

@end
