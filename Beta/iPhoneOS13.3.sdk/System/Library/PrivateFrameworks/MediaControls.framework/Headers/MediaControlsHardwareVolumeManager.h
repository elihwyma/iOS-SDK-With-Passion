/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MediaControlsHardwareVolumeManager : NSObject

{
    NSObject<OS_dispatch_queue> *_avSystemControllerQueue;
    NSMapTable *_assertions;
    NSArray *_volumeButtonConsumerInvalidators;
}

@property (retain, nonatomic) NSMapTable *assertions;
@property (retain, nonatomic) NSArray *volumeButtonConsumerInvalidators;

+ (id)sharedInstance;

- (id)init;
- (void)unregisterClient:(id)arg1;
- (void)registerClient:(id)arg1 forRoute:(id)arg2;
- (void)_updateVolumeControlsForRoute:(id)arg1;
- (void)_relinquishHardwareVolumeButtons;
- (void)_requestHardwareVolumeButtons;
- (id)requestVolumeControlsForRoute:(id)arg1;

@end
