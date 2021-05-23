/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWPhotoManifest;

@interface BWStillImageProcessingSettings : NSObject

{
    BWPhotoManifest *_photoManifest;
}

@property (nonatomic, readonly) BWPhotoManifest *photoManifest;

- (void)dealloc;
- (id)initWithPhotoManifest:(id)arg1;

@end
