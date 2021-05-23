/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsynchronousCIImageFilteringRequestInternal, CIImage;

@interface AVAsynchronousCIImageFilteringRequest : NSObject

{
    AVAsynchronousCIImageFilteringRequestInternal *_internal;
}

@property (nonatomic, readonly) struct CGSize renderSize;
@property (nonatomic, readonly) CDStruct_1b6d18a9 compositionTime;
@property (nonatomic, readonly) CIImage *sourceImage;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finishWithError:(id)arg1;
- (void)_willDeallocOrFinalize;
- (id)initUsingCompositingRequest:(id)arg1 sourceFrame:(struct __CVBuffer *)arg2 cancellationTest:(CDUnknownBlockType)arg3 defaultCIContextProvider:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)finishWithImage:(id)arg1 context:(id)arg2;

@end
