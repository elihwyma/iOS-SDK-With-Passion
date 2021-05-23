/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, RPMessageable;

@interface RPMediaControlSession : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _registeredMediaControlInterest;
    unsigned long long _mediaControlFlags;
    CDUnknownBlockType _mediaControlFlagsChangedHandler;
    id <RPMessageable> _messenger;
}

@property (nonatomic, readonly) unsigned long long mediaControlFlags;
@property (copy, nonatomic) CDUnknownBlockType mediaControlFlagsChangedHandler;
@property (retain, nonatomic) id <RPMessageable> messenger;

- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleMediaControlEvent:(id)arg1;
- (void)mediaCaptionSettingGetFromDestinationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mediaCaptionSettingSet:(int)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mediaCommand:(int)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mediaSkipBySeconds:(double)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mediaGetVolumeFromDestinationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mediaSetVolume:(double)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
