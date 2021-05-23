/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface HUDeviceController : NSObject

{
    NSObject<OS_dispatch_queue> *_deviceUpdatesQueue;
    NSMutableDictionary *_deviceUpdatesDescription;
    NSMutableArray *_updateDeviceBlocks;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deviceUpdatesQueue;
@property (retain, nonatomic) NSMutableDictionary *deviceUpdatesDescription;
@property (retain, nonatomic) NSMutableArray *updateDeviceBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)hearingAidForDeviceID:(id)arg1;
- (_Bool)representsLocalDevices;
- (void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3;
- (void)registerForPropertyUpdates:(CDUnknownBlockType)arg1;
- (void)stopPropertyUpdates;

@end
