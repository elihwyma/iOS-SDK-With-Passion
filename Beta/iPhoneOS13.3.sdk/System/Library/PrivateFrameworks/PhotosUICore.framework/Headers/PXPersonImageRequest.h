/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol PXPerson;

@interface PXPersonImageRequest : NSObject

{
    id <PXPerson> _person;
    NSTimer *_imageLoadInvalidationTimer;
    unsigned long long _imageRequestTag;
}

@property (retain, nonatomic) NSTimer *imageLoadInvalidationTimer;
@property (nonatomic) unsigned long long imageRequestTag;
@property (nonatomic, readonly) id <PXPerson> person;

- (void)dealloc;
- (void)cancel;
- (id)initWithPerson:(id)arg1;
- (void)requestImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 cacheResult:(_Bool)arg3 boundFaceRect:(_Bool)arg4 timeout:(double)arg5 withCompletion:(CDUnknownBlockType)arg6;

@end
