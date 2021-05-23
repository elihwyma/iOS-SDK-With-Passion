/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CKDTrafficLogger : NSObject

{
    long long _sequenceNumber;
    NSString *_requestID;
}

@property (nonatomic) long long sequenceNumber;
@property (retain, nonatomic) NSString *requestID;

- (_Bool)shouldLog;
- (id)initWithRequestID:(id)arg1;
- (void)logResponseConfiguration:(unsigned long long)arg1 withMessageClassString:(id)arg2;
- (void)logPartialRequestObjectData:(id)arg1;
- (void)logRequest:(id)arg1 toURL:(id)arg2 withMethod:(id)arg3 withMessageClassString:(id)arg4 parsingStandaloneMessage:(_Bool)arg5;
- (void)finishRequestLog;
- (void)logResponse:(id)arg1;
- (void)logPartialResponseObjectData:(id)arg1;
- (void)logRequestBodyStreamReset;
- (void)_logObject:(id)arg1 ofType:(unsigned long long)arg2;

@end
