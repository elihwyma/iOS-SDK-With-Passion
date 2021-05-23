/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDictionary, NSError, NSString, NSURL;

@interface FCNetworkEvent : NSObject <Swift>

{
    long long _type;
    NSURL *_URL;
    NSString *_requestUUID;
    NSString *_operationID;
    double _startTime;
    NSDictionary *_w3cNavigationTiming;
    unsigned long long _requestSize;
    unsigned long long _responseSize;
    NSString *_responseMIMEType;
    unsigned long long _HTTPStatusCode;
    NSString *_HTTPMethod;
    NSDictionary *_HTTPResponseHeaders;
    NSString *_containerName;
    NSError *_error;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *requestUUID;
@property (copy, nonatomic) NSString *operationID;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSDictionary *w3cNavigationTiming;
@property (nonatomic) unsigned long long requestSize;
@property (nonatomic) unsigned long long responseSize;
@property (copy, nonatomic) NSString *responseMIMEType;
@property (nonatomic) unsigned long long HTTPStatusCode;
@property (copy, nonatomic) NSString *HTTPMethod;
@property (copy, nonatomic) NSDictionary *HTTPResponseHeaders;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSError *error;
@property (nonatomic, readonly) double totalDuration;
@property (nonatomic, readonly) double fetchStartTime;
@property (nonatomic, readonly) double dnsDuration;
@property (nonatomic, readonly) double connectDuration;
@property (nonatomic, readonly) double requestDuration;
@property (nonatomic, readonly) double responseDuration;
@property (nonatomic, readonly) double responseEndTime;

- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
