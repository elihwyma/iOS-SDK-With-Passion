/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDCodableCompanionUserNotificationRequest;

@interface HDRemoteCompanionUserNotificationRequestContext : NSObject

{
    HDCodableCompanionUserNotificationRequest *_request;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) HDCodableCompanionUserNotificationRequest *request;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
