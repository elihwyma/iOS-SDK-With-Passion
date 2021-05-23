/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPointerArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceManager : NSObject

{
    NSPointerArray *_devicesPointerArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic, readonly) NSArray *allDevices;

+ (id)sharedManager;

- (id)init;
- (id)deviceWithIdentifier:(id)arg1;
- (void)registerDevice:(id)arg1;
- (void)clearDevices;

@end
