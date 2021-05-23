/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUExportJob.h>

@class NSData;

@interface NUImageExportJob : NUExportJob

{
    NSData *_destinationData;
}

- (id)result;
- (_Bool)render:(out id *)arg1;
- (void)cleanUp;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (id)initWithExportRequest:(id)arg1;
- (id)initWithImageExportRequest:(id)arg1;
- (id)imageExportRequest;
- (id)_filterProperties:(id)arg1;
- (id)imageDestinationOptions;

@end
