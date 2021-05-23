/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface DAUserNotificationInfo : NSObject

{
    NSString *_groupIdentifier;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (copy, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

@end
