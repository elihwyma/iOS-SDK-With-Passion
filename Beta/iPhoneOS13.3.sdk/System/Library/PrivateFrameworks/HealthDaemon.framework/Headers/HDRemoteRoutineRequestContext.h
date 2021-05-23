/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDCodableRoutineRequestMessage;

@interface HDRemoteRoutineRequestContext : NSObject

{
    HDCodableRoutineRequestMessage *_request;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) HDCodableRoutineRequestMessage *request;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
