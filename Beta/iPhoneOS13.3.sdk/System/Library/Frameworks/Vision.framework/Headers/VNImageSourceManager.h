/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSData, NSURL;

__attribute__((visibility("hidden")))
@interface VNImageSourceManager : NSObject

{
    struct os_unfair_lock_s _getOrientationLock;
    struct os_unfair_lock_s _loadSubSample1Lock;
    struct os_unfair_lock_s _loadSubSample2Lock;
    struct os_unfair_lock_s _loadSubSample4Lock;
    struct os_unfair_lock_s _loadSubSample8Lock;
    struct CGImageSource *_imageSourceSubsample1;
    struct CGImageSource *_imageSourceSubsample2;
    struct CGImageSource *_imageSourceSubsample4;
    struct CGImageSource *_imageSourceSubsample8;
    NSURL *_imageURL;
    NSData *_imageData;
    int _orientation;
}

- (void)dealloc;
- (int)exifOrientation;
- (id)initWithImageURL:(id)arg1;
- (id)initWithImageData:(id)arg1;
- (struct CGImageSource *)_obtainCreatedCGImageSourceRefAtAddress:(struct CGImageSource **)arg1 forSubSampleFactor:(unsigned int)arg2 protectedWithUnfairLock:(struct os_unfair_lock_s *)arg3 operatingInLowPriority:(_Bool)arg4;
- (struct CGImageSource *)obtainImageSourceRef;
- (struct CGImageSource *)obtainImageSourceRefWithSubSampleFactor:(unsigned int)arg1 andLowPriorityHint:(_Bool)arg2;
- (id)imageURL;
- (id)imageData;

@end
