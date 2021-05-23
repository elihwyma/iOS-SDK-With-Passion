/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSInputStream, NSLock, NSString, NSURL, SSMutableURLRequestProperties;

@interface ISURLRequest : NSObject

{
    NSLock *_lock;
    SSMutableURLRequestProperties *_properties;
}

@property (retain) NSString *appleClientApplication;
@property (retain) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property (retain) NSString *HTTPMethod;
@property (retain) NSDictionary *queryStringDictionary;
@property (readonly) NSURL *primaryURL;
@property (retain) NSArray *URLs;
@property long long allowedRetryCount;
@property double timeoutInterval;
@property unsigned long long cachePolicy;
@property (retain) NSDictionary *customHeaders;
@property long long URLBagType;
@property long long expectedContentLength;

+ (_Bool)supportsSecureCoding;
+ (id)requestWithURL:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (id)requestProperties;
- (id)initWithRequestProperties:(id)arg1;
- (id)_initCommon;
- (void)setValue:(id)arg1 forQueryStringParameter:(id)arg2;

@end
