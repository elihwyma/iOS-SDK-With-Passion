/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class ISDataProvider, NSData, NSDictionary, NSString, NSURL, SBKTransaction;

__attribute__((visibility("hidden")))
@interface SBKRequest : NSObject

{
    _Bool _shouldAuthenticate;
    NSURL *_requestURL;
    NSString *_action;
    NSData *_bodyData;
    long long _bodyContentType;
    NSDictionary *_headers;
    NSDictionary *_arguments;
    long long _method;
    ISDataProvider *_responseDataProvider;
    _Bool _concurrent;
    _Bool _includeDeviceGUID;
    SBKTransaction *_transaction;
}

@property (retain, nonatomic) SBKTransaction *transaction;
@property (nonatomic, readonly, getter=isConcurrent) _Bool concurrent;
@property (nonatomic) long long method;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic) _Bool shouldAuthenticate;
@property (nonatomic) _Bool includeDeviceGUID;
@property (retain, nonatomic) NSData *bodyData;
@property (retain, nonatomic) ISDataProvider *responseDataProvider;

+ (id)requestWithRequestURL:(id)arg1;
+ (id)_methodStringForMethod:(long long)arg1;
+ (long long)bodyContentEncodingType;
+ (long long)bodyContentType;
+ (id)_contentEncodingTypeStringForBodyContentEncodingType:(long long)arg1;
+ (id)_contentTypeStringForBodyContentType:(long long)arg1;

- (id)description;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forArgument:(id)arg2;
- (void)setBodyDataWithPropertyList:(id)arg1;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)newURLOperation;
- (id)copyRequestProperties;
- (id)initWithRequestURL:(id)arg1;
- (id)_defaultHeaderFields;
- (_Bool)acceptsGzipEncoding;
- (id)descriptionWithoutHeaderFields;

@end
