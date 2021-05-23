/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface WLKURLRequestProperties : NSObject

{
    NSString *_endpoint;
    NSString *_httpMethod;
    NSDictionary *_queryParameters;
    NSDictionary *_headers;
    NSString *_caller;
    NSNumber *_timeout;
    long long _options;
}

@property (copy, nonatomic) NSString *endpoint;
@property (copy, nonatomic) NSString *httpMethod;
@property (copy, nonatomic) NSDictionary *queryParameters;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSString *caller;
@property (copy, nonatomic) NSNumber *timeout;
@property (nonatomic) long long options;

+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 options:(long long)arg7;
+ (id)requestPropertiesWithEndpoint:(id)arg1;
+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 caller:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)shortDescription;
- (id)URLRequestWithConfiguration:(id)arg1;

@end
