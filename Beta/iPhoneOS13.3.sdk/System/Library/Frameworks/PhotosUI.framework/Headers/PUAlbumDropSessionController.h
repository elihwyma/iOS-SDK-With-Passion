/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, PUPhotoStreamComposeServiceViewController, PUVideoTrimQueueController;

@interface PUAlbumDropSessionController : NSObject

{
    PUVideoTrimQueueController *_trimController;
    PUPhotoStreamComposeServiceViewController *_composeServiceController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;
- (void)photoStreamComposeServiceDidCancel:(id)arg1;
- (void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;
- (void)handleAddToCloudSharedAlbum:(id)arg1 pickedAssets:(id)arg2 context:(id)arg3;
- (void)performDrop:(id)arg1 context:(id)arg2;

@end
