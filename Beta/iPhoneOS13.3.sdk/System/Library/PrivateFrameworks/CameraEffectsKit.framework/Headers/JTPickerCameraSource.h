/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, PVLivePlayerCameraSource;

@protocol OS_dispatch_queue;

@interface JTPickerCameraSource : NSObject

{
    NSMutableSet *_registeredPickers;
    NSObject<OS_dispatch_queue> *_registeredPickersQueue;
    PVLivePlayerCameraSource *_registeredPickersSource;
}

@property (retain, nonatomic) NSMutableSet *registeredPickers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *registeredPickersQueue;
@property (retain, nonatomic) PVLivePlayerCameraSource *registeredPickersSource;
@property (nonatomic, readonly) PVLivePlayerCameraSource *pickerSource;
@property (nonatomic, readonly) _Bool isPickerPreviewing;

+ (id)sharedInstance;

- (id)init;
- (void)registerPickerAsPreviewingWithObject:(id)arg1;
- (void)unregisterPickerAsPreviewingWithObject:(id)arg1;

@end
