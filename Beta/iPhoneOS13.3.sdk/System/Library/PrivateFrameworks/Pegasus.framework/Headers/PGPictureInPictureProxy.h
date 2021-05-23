/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <NSObject.h>

@interface PGPictureInPictureProxy : NSObject

+ (_Bool)isPictureInPictureActive;
+ (_Bool)isPictureInPictureSupported;
+ (void)_updatePictureInPictureActive:(_Bool)arg1;
+ (id)pictureInPictureProxyWithControlsStyle:(long long)arg1 viewController:(id)arg2;

@end
