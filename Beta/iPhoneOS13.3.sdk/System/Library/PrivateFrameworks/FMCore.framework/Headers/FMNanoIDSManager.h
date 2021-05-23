/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class IDSService, NSArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface FMNanoIDSManager : NSObject

{
    unsigned int _minVersion;
    IDSService *_service;
    NSString *_serviceId;
    NSMutableDictionary *_outstandingRequests;
    NSMutableDictionary *_registeredRequestHandlers;
    NSObject<OS_dispatch_queue> *_outstandingRequestsModQueue;
}

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) NSString *serviceId;
@property (nonatomic) unsigned int minVersion;
@property (retain, nonatomic) NSMutableDictionary *outstandingRequests;
@property (retain, nonatomic) NSMutableDictionary *registeredRequestHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *outstandingRequestsModQueue;
@property (copy, nonatomic, readonly) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)start;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)sendMessageWithProtobuf:(id)arg1 inResponseToRequest:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 bypassingDuet:(_Bool)arg5 deviceID:(id)arg6 requestAcceptedHandler:(CDUnknownBlockType)arg7 responseHandler:(CDUnknownBlockType)arg8;
- (_Bool)_checkMinVersionDeviceID:(id)arg1;
- (id)_sendMessageWithProtobuf:(id)arg1 inResponseToRequest:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 bypassingDuet:(_Bool)arg5 deviceID:(id)arg6 responseHandler:(CDUnknownBlockType)arg7;
- (id)_sendProtobuf:(id)arg1 priority:(long long)arg2 responseIdentifier:(id)arg3 expectsResponse:(_Bool)arg4 bypassingDuet:(_Bool)arg5 deviceID:(id)arg6;
- (_Bool)cancelMessageWithId:(id)arg1;
- (id)initWithServiceId:(id)arg1 minimumVersion:(long long)arg2;
- (void)sendMessageWithProtobuf:(id)arg1 inResponseToRequest:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 bypassingDuet:(_Bool)arg5 requestAcceptedHandler:(CDUnknownBlockType)arg6 responseHandler:(CDUnknownBlockType)arg7;
- (void)handleRequestsOfType:(unsigned short)arg1 withHandler:(CDUnknownBlockType)arg2;

@end
