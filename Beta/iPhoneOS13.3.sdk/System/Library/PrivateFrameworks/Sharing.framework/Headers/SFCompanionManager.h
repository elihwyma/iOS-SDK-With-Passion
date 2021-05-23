/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, SFCompanionServiceManagerProtocol;

@interface SFCompanionManager : NSObject

{
    NSString *_identifier;
    id <SFCompanionServiceManagerProtocol> _managerProxy;
    NSString *_deviceID;
    NSString *_deviceIP;
    NSString *_deviceName;
    NSMutableDictionary *_services;
    NSMutableDictionary *_streamHandlers;
    NSObject<OS_dispatch_queue> *_serviceIdentifierQueue;
    NSObject<OS_dispatch_semaphore> *_managerSemaphore;
}

@property (copy) NSString *identifier;
@property (retain) id <SFCompanionServiceManagerProtocol> managerProxy;
@property (copy) NSString *deviceID;
@property (copy) NSString *deviceIP;
@property (copy) NSString *deviceName;
@property (retain) NSMutableDictionary *services;
@property (retain) NSMutableDictionary *streamHandlers;
@property (retain) NSObject<OS_dispatch_queue> *serviceIdentifierQueue;
@property (retain) NSObject<OS_dispatch_semaphore> *managerSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serviceManager;

- (id)init;
- (void)dealloc;
- (id)serviceForIdentifier:(id)arg1;
- (void)xpcManagerConnectionInterrupted;
- (void)xpcManagerDidInvalidate:(id)arg1;
- (id)streamDataForIdentifier:(id)arg1;
- (void)getStreamsForData:(id)arg1 withStreamHandler:(CDUnknownBlockType)arg2;
- (void)supportStreamsWithIdentifier:(id)arg1 withStreamHandler:(CDUnknownBlockType)arg2;
- (void)disableStreamSupportForIdentifier:(id)arg1;
- (void)streamToService:(id)arg1 withFileHandle:(id)arg2 acceptReply:(CDUnknownBlockType)arg3;
- (void)retrieveManagerProxy;
- (void)signalSemaphore;
- (void)streamsFromFileHandle:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
