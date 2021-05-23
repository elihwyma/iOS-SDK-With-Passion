/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDCodableStartWorkoutAppRequest;

@interface HDRemoteStartWorkoutAppRequestContext : NSObject

{
    HDCodableStartWorkoutAppRequest *_request;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) HDCodableStartWorkoutAppRequest *request;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
