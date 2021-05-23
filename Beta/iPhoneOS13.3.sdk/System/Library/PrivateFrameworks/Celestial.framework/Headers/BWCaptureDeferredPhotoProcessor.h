/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@interface BWCaptureDeferredPhotoProcessor : NSObject

{
    struct OpaqueFigCaptureDeferredPhotoProcessor *_deferredPhotoProcessor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)request:(id)arg1 failedWithError:(int)arg2;
- (void)job:(id)arg1 completedWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)job:(id)arg1 failedWithError:(int)arg2;
- (id)initWithFigCaptureDeferredPhotoProcessor:(struct OpaqueFigCaptureDeferredPhotoProcessor *)arg1;

@end
