/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreRequestContext, NSArray, NSDictionary, NSString;

@interface ICStorePlatformRequest : NSObject <Swift>

{
    _Bool _returnsLocalEquivalencies;
    _Bool _shouldIgnoreCache;
    NSString *_clientIdentifier;
    NSString *_clientBundleIdentifier;
    NSString *_clientBundleVersion;
    NSArray *_itemIdentifiers;
    long long _batchSize;
    CDUnknownBlockType _batchResultsHandler;
    NSString *_imageProfile;
    NSString *_keyProfile;
    long long _personalizationStyle;
    NSString *_platformIdentifier;
    NSString *_protocolVersion;
    double _retryDelay;
    double _timeoutInterval;
    long long _qualityOfService;
    ICStoreRequestContext *_requestContext;
}

@property (copy, nonatomic, readonly) NSDictionary *HTTPHeaders;
@property (copy, nonatomic, readonly) NSArray *queryItems;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *clientBundleIdentifier;
@property (copy, nonatomic) NSString *clientBundleVersion;
@property (copy, nonatomic) NSArray *itemIdentifiers;
@property (nonatomic) long long batchSize;
@property (copy, nonatomic) CDUnknownBlockType batchResultsHandler;
@property (copy, nonatomic) NSString *imageProfile;
@property (copy, nonatomic) NSString *keyProfile;
@property (nonatomic) long long personalizationStyle;
@property (copy, nonatomic) NSString *platformIdentifier;
@property (copy, nonatomic) NSString *protocolVersion;
@property (nonatomic) double retryDelay;
@property (nonatomic) _Bool returnsLocalEquivalencies;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) _Bool shouldIgnoreCache;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithItemIdentifiersInRange:(struct _NSRange)arg1;

@end
