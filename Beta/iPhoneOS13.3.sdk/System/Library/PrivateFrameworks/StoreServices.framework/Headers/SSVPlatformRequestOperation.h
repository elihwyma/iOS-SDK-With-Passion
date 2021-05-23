/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <ProtocolBuffer/NSOperation.h>

@class NSArray, NSMutableDictionary, NSNumber, NSObject, NSString, SSBag, SSVPlatformContext;

@protocol OS_dispatch_queue;

@interface SSVPlatformRequestOperation : NSOperation

{
    NSMutableDictionary *_additionalHeaderFields;
    NSMutableDictionary *_additionalParameters;
    NSString *_caller;
    SSVPlatformContext *_context;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemIdentifiers;
    NSArray *_bundleIdentifiers;
    NSString *_imageProfile;
    NSString *_keyProfile;
    long long _personalizationStyle;
    CDUnknownBlockType _responseBlock;
    NSString *_storeFrontSuffix;
    NSNumber *_timeoutInterval;
    NSString *_userAgent;
    _Bool _shouldSuppressCookies;
    _Bool _shouldSuppressUserInfo;
    SSBag *_bag;
}

@property (copy) NSArray *itemIdentifiers;
@property (copy) NSArray *bundleIdentifiers;
@property (copy) NSString *imageProfile;
@property (copy) NSString *keyProfile;
@property long long personalizationStyle;
@property (copy) NSString *storeFrontSuffix;
@property (copy) NSNumber *timeoutInterval;
@property _Bool shouldSuppressCookies;
@property _Bool shouldSuppressUserInfo;
@property (copy) CDUnknownBlockType responseBlock;
@property (retain, nonatomic) SSBag *bag;

- (id)init;
- (void)main;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)valueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (id)_lookupWithRequest:(id)arg1 error:(id *)arg2;
- (id)valueForRequestParameter:(id)arg1;
- (id)initWithPlatformContext:(id)arg1;
- (void)_makeLocalMescalRequest;
- (void)_makeLocalJSSignRequest;
- (void)_makeLookupRequestWithPersonalizationStyle:(long long)arg1;
- (id)_callerValue;
- (id)_URLBagContext;
- (void)_enumerateQueryParametersUsingBlock:(CDUnknownBlockType)arg1;
- (void)_setCaller:(id)arg1;
- (void)_setUserAgent:(id)arg1;

@end
