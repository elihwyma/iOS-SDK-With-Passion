/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class CIContext, NSString, PFAVReaderWriter;

@interface PFColorConverter : NSObject

{
    PFAVReaderWriter *_readerWriter;
    CIContext *_conversionContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)adjustPixelBuffer:(struct __CVBuffer *)arg1 toOutputBuffer:(struct __CVBuffer *)arg2;
- (void)convertWithVideoURL:(id)arg1 outURL:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end
