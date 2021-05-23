/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class GCController, MRGameControllerDaemonProxy;

@protocol MREmulatedGameControllerDelegate;

@interface MREmulatedGameController : NSObject

{
    MRGameControllerDaemonProxy *_remote;
    int _profile;
    double _buttonAUpDelay;
    id <MREmulatedGameControllerDelegate> _delegate;
    GCController *_controller;
}

@property (retain, nonatomic) GCController *controller;
@property (nonatomic, readonly) int profile;
@property (nonatomic) double buttonAUpDelay;
@property (weak, nonatomic) id <MREmulatedGameControllerDelegate> delegate;

- (void)dealloc;
- (id)initWithProperties:(id)arg1;
- (void)_handleGameControllerDidChange:(id)arg1;
- (void)sendGameControllerEvent:(id)arg1;

@end
