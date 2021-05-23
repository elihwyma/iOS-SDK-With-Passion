/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWFigCaptureDeviceClient : NSObject

{
    int _clientID;
    int _pid;
    int _stealingBehavior;
    int _releaseBehavior;
    _Bool _deviceSharingWithOtherClientsAllowed;
    CDUnknownBlockType _deviceAvailabilityChangedHandler;
}

@property (nonatomic, readonly) int clientID;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) int stealingBehavior;
@property (nonatomic) int releaseBehavior;
@property (nonatomic, readonly) _Bool deviceSharingWithOtherClientsAllowed;
@property (copy, nonatomic) CDUnknownBlockType deviceAvailabilityChangedHandler;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)initWithPID:(int)arg1 stealingBehavior:(int)arg2 deviceSharingWithOtherClientsAllowed:(_Bool)arg3 deviceAvailabilityChangedHandler:(CDUnknownBlockType)arg4;
- (_Bool)canShareDeviceWithClientPID:(int)arg1 deviceAvailabilityChangedHandler:(CDUnknownBlockType)arg2;

@end
