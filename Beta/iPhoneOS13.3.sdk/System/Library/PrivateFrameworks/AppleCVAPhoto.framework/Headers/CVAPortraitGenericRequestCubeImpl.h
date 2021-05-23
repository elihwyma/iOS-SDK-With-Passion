/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class NSData, NSString;

@protocol CVAPortraitVideoPipeline;

@interface CVAPortraitGenericRequestCubeImpl : NSObject

{
    id <CVAPortraitVideoPipeline> _portraitVideoPipeline;
    struct __CVBuffer *_sourceColorPixelBuffer;
    NSData *_cubeData;
}

@property (retain) id <CVAPortraitVideoPipeline> portraitVideoPipeline;
@property struct __CVBuffer *sourceColorPixelBuffer;
@property (retain) NSData *cubeData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;

@end
