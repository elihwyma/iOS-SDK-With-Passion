/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUVideoExportRequest.h>

@class NSString, NSURL, NUColorSpace;

@interface PIAutoLoopExportRequest : NUVideoExportRequest

{
    NSString *_destinationUTI;
    NSURL *_destinationLongExposureURL;
    NSURL *_destinationMaskURL;
}

@property (readonly) NSString *destinationUTI;
@property (readonly) NSURL *destinationLongExposureURL;
@property (readonly) NSURL *destinationMaskURL;
@property (readonly) NUColorSpace *outputColorSpace;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (long long)mediaComponentType;
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;
- (id)initWithComposition:(id)arg1 stabilizedVideoURL:(id)arg2 longExposureDestinationURL:(id)arg3 maskDestinationURL:(id)arg4 destinationUTI:(id)arg5;

@end
