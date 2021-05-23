/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface SSVPlaybackLeaseRequest : NSObject

{
    long long _actionType;
    NSData *_certificateData;
    NSURL *_certificateURL;
    NSMutableDictionary *_httpHeaderFields;
    unsigned long long _kdChannelIdentifier;
    unsigned long long _kdMovieIdentifier;
    long long _leaseType;
    NSMutableDictionary *_parameters;
    _Bool _startsLeaseSession;
    NSURL *_url;
}

@property (copy, nonatomic, readonly, getter=_actionParameterValue) NSString *_actionParameterValue;
@property (copy, nonatomic, readonly, getter=_URLBagKey) NSString *_URLBagKey;
@property (nonatomic, getter=_actionType, setter=_setActionType:) long long _actionType;
@property (nonatomic, readonly, getter=_leaseType) long long _leaseType;
@property (nonatomic, getter=_KDMovieIdentifier, setter=_setKDMovieIdentifier:) unsigned long long _KDMovieIdentifier;
@property (copy, nonatomic, getter=_certificateData, setter=_setCertificateData:) NSData *_certificateData;
@property (copy, nonatomic, getter=_URL, setter=_setURL:) NSURL *_URL;
@property (nonatomic) unsigned long long KDChannelIdentifier;
@property (copy, nonatomic) NSDictionary *parameterValues;
@property (copy, nonatomic) NSDictionary *HTTPHeaderFields;
@property (nonatomic) _Bool startsLeaseSession;

+ (id)_requestWithType:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)valueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (id)valueForParameter:(id)arg1;
- (void)_applyValuesToCopy:(id)arg1;
- (id)_copyWithLeaseType:(long long)arg1;
- (id)_copyBodyDictionaryWithFairPlaySession:(void **)arg1;

@end
