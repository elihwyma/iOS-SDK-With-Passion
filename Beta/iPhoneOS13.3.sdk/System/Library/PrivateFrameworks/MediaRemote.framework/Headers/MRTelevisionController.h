/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRExternalDeviceController.h>

@class NSString, _MRTelevisionControllerBlockCallback;

__attribute__((visibility("hidden")))
@interface MRTelevisionController : MRExternalDeviceController

{
    _MRTelevisionControllerBlockCallback *_discoveryCallback;
    _MRTelevisionControllerBlockCallback *_removalCallback;
}

@property (retain, nonatomic) _MRTelevisionControllerBlockCallback *discoveryCallback;
@property (retain, nonatomic) _MRTelevisionControllerBlockCallback *removalCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)externalDeviceClass;

- (id)init;
- (void)externalDeviceController:(id)arg1 didRemoveDevice:(id)arg2;
- (void)externalDeviceController:(id)arg1 didDiscoverDevice:(id)arg2;

@end
