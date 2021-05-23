/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface WFActionableNotificationManager : NSObject

{
    NSMutableDictionary *_handlersForIdentifiers;
    NSObject<OS_dispatch_queue> *_handlersQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *handlersForIdentifiers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *handlersQueue;

+ (id)sharedManager;

- (id)init;
- (void)addNotificationRequestWithContentBody:(id)arg1 actions:(id)arg2 identifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleNotificationResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
