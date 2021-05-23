/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class IDSService, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface NPKTargetDeviceAssertionManager : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    IDSService *_transportationService;
    NSMutableDictionary *_outstandingAssertionStatusUpdaters;
    NSMutableDictionary *_assertTypesUUIDsMap;
}

@property (retain, nonatomic) NSMutableDictionary *outstandingAssertionStatusUpdaters;
@property (retain, nonatomic) NSMutableDictionary *assertTypesUUIDsMap;
@property (nonatomic, readonly) IDSService *transportationService;

- (id)_sendAssertionRequest:(id)arg1;
- (id)_outstandingAssertionStatusUpdaterWithRequest:(id)arg1 assertionType:(unsigned long long)arg2 assertionUUID:(id)arg3;
- (void)_addOutstandingAssertionStatusUpdater:(id)arg1 withAssertType:(int)arg2;
- (id)_removeOutstandingAssertionStatusUpdaterWithUUID:(id)arg1;
- (id)_IDSSendOptions;
- (id)initWithTransportationService:(id)arg1;
- (id)acquireAssertionOfType:(unsigned long long)arg1;
- (void)invalidateAssertionWithUUID:(id)arg1;
- (id)assertionsUUIDsOfType:(unsigned long long)arg1;

@end
