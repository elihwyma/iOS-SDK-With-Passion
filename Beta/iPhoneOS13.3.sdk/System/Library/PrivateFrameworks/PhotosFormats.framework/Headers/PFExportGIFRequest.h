/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface PFExportGIFRequest : NSObject

{
    _Bool _shouldDither;
    _Bool _synchronous;
    double _ditherDepth;
    double _maximumFrameRate;
    unsigned long long _maximumFrameSize;
    NSURL *_videoURL;
}

@property (copy, nonatomic) NSURL *videoURL;
@property (nonatomic) _Bool shouldDither;
@property (nonatomic) double ditherDepth;
@property (nonatomic) double maximumFrameRate;
@property (nonatomic) unsigned long long maximumFrameSize;
@property (nonatomic, getter=isSynchronous) _Bool synchronous;

+ (id)_exportQueue;
+ (id)runExport:(id)arg1 toURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)runExport:(id)arg1 toURL:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (struct opaqueCMSampleBuffer *)_copyNextSampleBuffer:(id)arg1 reader:(id)arg2 time:(CDStruct_1b6d18a9 *)arg3 didReachEnd:(_Bool *)arg4 error:(id *)arg5;
+ (struct CGImage *)_createProcessedGIFImage:(struct opaqueCMSampleBuffer *)arg1 options:(id)arg2 error:(id *)arg3;
+ (_Bool)_exportGIFToURL:(id)arg1 request:(id)arg2 progress:(CDUnknownBlockType)arg3 error:(id *)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideoURL:(id)arg1;
- (void)_ensureValidInputs;

@end
