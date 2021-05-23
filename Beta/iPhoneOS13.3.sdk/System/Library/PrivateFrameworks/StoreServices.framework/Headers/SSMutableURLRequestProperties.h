/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSURLRequestProperties.h>

@class NSArray, NSData, NSDictionary, NSInputStream, NSString, NSURL;

@interface SSMutableURLRequestProperties : SSURLRequestProperties

@property (copy) NSDictionary *additionalMetrics;
@property _Bool allowsBootstrapCellularData;
@property (copy) NSString *clientAuditBundleIdentifier;
@property (copy) NSData *clientAuditTokenData;
@property (retain) NSInputStream *HTTPBodyStream;
@property long long KBSyncType;
@property (getter=isLargeDownload) _Bool largeDownload;
@property _Bool requiresCellularDataNetwork;
@property _Bool requiresExtendedValidationCertificates;
@property _Bool requiresExternal;
@property _Bool requiresHTTPS;
@property _Bool shouldAddKBSyncData;
@property _Bool shouldDecodeResponse;
@property _Bool shouldDisableCellular;
@property _Bool shouldDisableCellularFallback;
@property _Bool shouldDisableReversePush;
@property _Bool shouldDisableReversePushSampling;
@property _Bool shouldProcessProtocol;
@property _Bool shouldSendSecureToken;
@property _Bool shouldSetCookies;
@property long long URLBagType;
@property (copy) CDUnknownBlockType URLBagURLBlock;
@property (copy) NSArray *URLs;
@property long long allowedRetryCount;
@property unsigned long long cachePolicy;
@property (copy) NSString *clientIdentifier;
@property long long expectedContentLength;
@property (copy) NSData *HTTPBody;
@property (copy) NSString *HTTPMethod;
@property (getter=isITunesStoreRequest) _Bool ITunesStoreRequest;
@property long long machineDataStyle;
@property unsigned long long networkServiceType;
@property double timeoutInterval;
@property (copy) NSString *URLBagKey;
@property (retain) NSURL *URL;
@property (copy) NSArray *userAgentComponents;
@property (copy) NSDictionary *HTTPHeaders;
@property (copy) NSDictionary *requestParameters;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (void)setMultiPartFormDataWithDictionary:(id)arg1;

@end
