/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICURLRequest.h>

@class ICJSSignConfiguration, ICStoreRequestContext, NSDictionary, NSString;

@interface ICStoreURLRequest : ICURLRequest

{
    _Bool _shouldUseMescalSigning;
    _Bool _shouldParseBodyData;
    _Bool _shouldRequireURLBag;
    long long _anisetteVersion;
    NSString *_machineDataSyncState;
    NSDictionary *_additionalHTTPCookies;
    ICJSSignConfiguration *_JSSignConfiguration;
}

@property (copy, nonatomic, readonly) ICStoreRequestContext *storeRequestContext;
@property (nonatomic) long long anisetteVersion;
@property (nonatomic) _Bool shouldUseMescalSigning;
@property (nonatomic) _Bool shouldParseBodyData;
@property (nonatomic) _Bool shouldRequireURLBag;
@property (copy, nonatomic) NSString *machineDataSyncState;
@property (copy, nonatomic) NSDictionary *additionalHTTPCookies;
@property (copy, nonatomic) ICJSSignConfiguration *JSSignConfiguration;

+ (unsigned long long)_defaultMaxRetryCountForReason:(id)arg1;
+ (id)currentConnectionTypeHeader;

- (id)description;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;
- (void)buildURLRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_shouldPersonalizeRequest;
- (id)_stringForCachePolicy:(unsigned long long)arg1;
- (void)_getSignatureDataForRequest:(id)arg1 urlBag:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
