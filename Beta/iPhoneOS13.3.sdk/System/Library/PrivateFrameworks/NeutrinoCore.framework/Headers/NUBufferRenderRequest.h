/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUImageRenderRequest.h>

@protocol NUMutableBufferImage;

@interface NUBufferRenderRequest : NUImageRenderRequest

@property id <NUMutableBufferImage> targetBufferImage;

- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;

@end
