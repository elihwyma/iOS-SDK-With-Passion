/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface CKLTrafficLogMessage : NSObject

{
    NSString *_uuid;
    NSDate *_requestTime;
    NSString *_requestMethod;
    NSURL *_requestURL;
    NSDictionary *_requestHeaders;
    long long _bodyStreamResetCount;
    NSArray *_requestObjects;
    long long _responseStatus;
    NSDate *_responseTime;
    NSDictionary *_responseHeaders;
    NSArray *_responseObjects;
}

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSDate *requestTime;
@property (retain, nonatomic) NSString *requestMethod;
@property (retain, nonatomic) NSURL *requestURL;
@property (retain, nonatomic) NSDictionary *requestHeaders;
@property (nonatomic) long long bodyStreamResetCount;
@property (retain, nonatomic) NSArray *requestObjects;
@property (nonatomic) long long responseStatus;
@property (retain, nonatomic) NSDictionary *responseHeaders;
@property (retain, nonatomic) NSArray *responseObjects;
@property (nonatomic, readonly) NSDate *responseTime;

- (id)description;
- (id)_initWithUUID:(id)arg1 requestMetadata:(id)arg2 requestObjects:(id)arg3 bodyStreamResetCount:(long long)arg4 responseMetadata:(id)arg5 responseObjects:(id)arg6;

@end
