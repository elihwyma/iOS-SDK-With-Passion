/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSData, NSDictionary, NSInputStream, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface SSURLRequestProperties : NSObject

{
    NSDictionary *_additionalMetrics;
    long long _allowedRetryCount;
    _Bool _allowsBootstrapCellularData;
    unsigned long long _cachePolicy;
    NSString *_clientAuditBundleIdentifier;
    NSData *_clientAuditTokenData;
    NSString *_clientIdentifier;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _expectedContentLength;
    NSData *_httpBody;
    NSInputStream *_httpBodyStream;
    NSDictionary *_httpHeaders;
    NSString *_httpMethod;
    _Bool _isITunesStoreRequest;
    long long _kbsyncType;
    _Bool _largeDownload;
    long long _machineDataStyle;
    unsigned long long _networkServiceType;
    NSDictionary *_requestParameters;
    _Bool _requiresCellularDataNetwork;
    BOOL _requiresExtendedValidationCertificates;
    _Bool _requiresExternal;
    _Bool _requiresHTTPS;
    _Bool _shouldDecodeResponse;
    _Bool _shouldDisableCellular;
    _Bool _shouldDisableCellularFallback;
    _Bool _shouldDisableReversePush;
    _Bool _shouldDisableReversePushSampling;
    _Bool _shouldProcessProtocol;
    _Bool _shouldSendSecureToken;
    _Bool _shouldSetCookies;
    double _timeoutInterval;
    NSString *_urlBagKey;
    long long _urlBagType;
    CDUnknownBlockType _urlBagURLBlock;
    NSArray *_urls;
    NSArray *_userAgentComponents;
}

@property (copy, readonly) NSDictionary *additionalMetrics;
@property (readonly) _Bool allowsBootstrapCellularData;
@property (readonly) _Bool canBeResolved;
@property (copy, readonly) NSString *clientAuditBundleIdentifier;
@property (copy, readonly) NSData *clientAuditTokenData;
@property (readonly) NSString *clientBundleIdentifier;
@property (retain, readonly) NSInputStream *HTTPBodyStream;
@property (readonly) long long KBSyncType;
@property (readonly, getter=isLargeDownload) _Bool largeDownload;
@property (readonly) _Bool requiresCellularDataNetwork;
@property (readonly) _Bool requiresExtendedValidationCertificates;
@property (readonly) _Bool requiresExternal;
@property (readonly) _Bool requiresHTTPS;
@property (readonly) _Bool shouldAddKBSyncData;
@property (readonly) _Bool shouldDecodeResponse;
@property (readonly) _Bool shouldDisableCellularFallback;
@property (readonly) _Bool shouldDisableCellular;
@property (readonly) _Bool shouldDisableReversePush;
@property (readonly) _Bool shouldDisableReversePushSampling;
@property (readonly) _Bool shouldProcessProtocol;
@property (readonly) _Bool shouldSendSecureToken;
@property (readonly) _Bool shouldSetCookies;
@property (readonly) long long URLBagType;
@property (copy, readonly) CDUnknownBlockType URLBagURLBlock;
@property (copy, readonly) NSArray *URLs;
@property (readonly) long long allowedRetryCount;
@property (copy, readonly) NSString *clientIdentifier;
@property (readonly) unsigned long long cachePolicy;
@property (readonly) long long expectedContentLength;
@property (copy, readonly) NSData *HTTPBody;
@property (copy, readonly) NSDictionary *HTTPHeaders;
@property (copy, readonly) NSString *HTTPMethod;
@property (readonly, getter=isITunesStoreRequest) _Bool ITunesStoreRequest;
@property (readonly) long long machineDataStyle;
@property (readonly) unsigned long long networkServiceType;
@property (copy, readonly) NSDictionary *requestParameters;
@property (readonly) double timeoutInterval;
@property (copy, readonly) NSString *URLBagKey;
@property (retain, readonly) NSURL *URL;
@property (copy, readonly) NSArray *userAgentComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)copyURLRequest;
- (id)_initCommon;

@end
