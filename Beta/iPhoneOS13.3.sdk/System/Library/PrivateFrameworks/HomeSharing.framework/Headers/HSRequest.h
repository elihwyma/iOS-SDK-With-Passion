/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface HSRequest : NSObject

{
    NSDictionary *_arguments;
    _Bool _concurrent;
    _Bool _acceptsGzipEncoding;
    NSString *_action;
    long long _method;
    NSData *_bodyData;
}

@property (nonatomic, readonly) NSString *action;
@property (nonatomic, readonly, getter=isConcurrent) _Bool concurrent;
@property (nonatomic) long long method;
@property (nonatomic, readonly) double timeoutInterval;
@property (copy, nonatomic) NSData *bodyData;
@property (nonatomic) _Bool acceptsGzipEncoding;

+ (id)request;

- (id)description;
- (id)initWithAction:(id)arg1;
- (void)setValue:(id)arg1 forArgument:(id)arg2;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (id)URLRequestForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;

@end
