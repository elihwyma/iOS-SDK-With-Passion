/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HKAuthorizationRequestRecord;

@interface HDRemoteAuthorizationRequestContext : NSObject

{
    HKAuthorizationRequestRecord *_requestRecord;
    CDUnknownBlockType _requestSentHandler;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) HKAuthorizationRequestRecord *requestRecord;
@property (copy, nonatomic) CDUnknownBlockType requestSentHandler;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
