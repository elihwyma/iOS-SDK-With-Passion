/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <ATSessionTask.h>

@class ATConcreteMessageLink, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ATDeviceSyncSessionTask : ATSessionTask

{
    NSString *_dataClass;
    ATConcreteMessageLink *_messageLink;
    NSString *_linkIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSString *dataClass;
@property (nonatomic, readonly) ATConcreteMessageLink *messageLink;
@property (nonatomic, readonly) NSString *linkIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)sendRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (id)initWithDataClass:(id)arg1 onMessageLink:(id)arg2;
- (void)updateProgressWithCount:(unsigned long long)arg1 totalItemCount:(unsigned long long)arg2;

@end
