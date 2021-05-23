/*
 Image: /System/Library/PrivateFrameworks/HID.framework/HID
 */

#import <Foundation/NSObject.h>

@class HIDEventSystemClient, HIDServiceClient;

@protocol HIDVirtualEventServiceDelegate, OS_dispatch_queue;

@interface HIDVirtualEventService : NSObject

{
    id <HIDVirtualEventServiceDelegate> _delegate;
    HIDEventSystemClient *_client;
    HIDServiceClient *_serviceClient;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) HIDEventSystemClient *client;
@property (retain) HIDServiceClient *serviceClient;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long serviceID;
@property (weak) id <HIDVirtualEventServiceDelegate> delegate;

- (id)init;
- (id)description;
- (void)cancel;
- (void)setDispatchQueue:(id)arg1;
- (void)setCancelHandler:(CDUnknownBlockType)arg1;
- (void)activate;
- (_Bool)dispatchEvent:(id)arg1;

@end
