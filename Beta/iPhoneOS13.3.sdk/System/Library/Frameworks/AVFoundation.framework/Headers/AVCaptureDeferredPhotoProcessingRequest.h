/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureDeferredPhotoProxy, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVCaptureDeferredPhotoProcessingRequest : NSObject

{
    AVCaptureDeferredPhotoProxy *_photoProxy;
    unsigned int _firedCallbackFlags;
    NSMutableArray *_delegatesStorage;
}

@property (readonly) NSArray *delegatesStorage;
@property (readonly) AVCaptureDeferredPhotoProxy *photoProxy;
@property (nonatomic) unsigned int firedCallbackFlags;

- (void)dealloc;
- (void)addDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 photoProxy:(id)arg2;

@end
