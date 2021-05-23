/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSReportiMessageSpamDaemonResponseListener : NSObject

{
    IDSDaemonRequestTimer *_requestTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)iMessageReportSpamCheckUnknownResponseForRequestID:(id)arg1 status:(long long)arg2 abusive:(_Bool)arg3 delay:(double)arg4 withError:(id)arg5;
- (id)initWithRequestTimer:(id)arg1;

@end
