/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, TVPExternalImageConfig;

__attribute__((visibility("hidden")))
@interface TVPExternalImageLoader : NSObject

{
    TVPExternalImageConfig *_config;
    NSMutableSet *_imageProxies;
    NSMutableDictionary *_imageProxyMappings;
    NSMutableSet *_loadedImageActualTimes;
}

@property (retain, nonatomic) TVPExternalImageConfig *config;
@property (retain, nonatomic) NSMutableSet *imageProxies;
@property (retain, nonatomic) NSMutableDictionary *imageProxyMappings;
@property (retain, nonatomic) NSMutableSet *loadedImageActualTimes;
@property (nonatomic, readonly) double firstImageTime;
@property (nonatomic, readonly) double lastImageTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithConfig:(id)arg1;
- (double)closestImageTimeForTime:(double)arg1 imageInterval:(double)arg2;
- (_Bool)imageIsLoadedForTime:(double)arg1;
- (id)loadedImageForTime:(double)arg1;
- (id)loadImagesForTimes:(id)arg1 maxSize:(struct CGSize)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)cancelImageLoadingForIdentifiers:(id)arg1;
- (double)closestImageTimeForTime:(double)arg1;
- (unsigned long long)_closestImageIndexForTime:(double)arg1 actualTime:(double *)arg2 imageInterval:(double)arg3;
- (id)_closestURLForImageTime:(double)arg1 actualTime:(double *)arg2;

@end
