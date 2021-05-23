/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFSiriTaskService, NSString;

@protocol AFSiriTaskServiceDelegate, OS_dispatch_queue;

@interface AFSiriTaskDeliveryHandler : NSObject

{
    AFSiriTaskService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    id <AFSiriTaskServiceDelegate> _delegate;
}

@property (weak, nonatomic) AFSiriTaskService *service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <AFSiriTaskServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)deliverSiriTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
