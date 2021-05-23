/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUVideoExportJob.h>

@interface PIAutoLoopExportJob : NUVideoExportJob

+ (id)metalRenderer;
+ (_Bool)shouldUseMetalRenderer;

- (id)renderer:(out id *)arg1;
- (id)initWithVideoExportRequest:(id)arg1;
- (_Bool)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(CDStruct_1b6d18a9)arg3 createCustomMetadata:(_Bool)arg4 geometryTransform:(id)arg5 inputSize:(struct CGSize)arg6 outputSize:(struct CGSize)arg7 error:(out id *)arg8;
- (id)initWithAutoLoopExportRequest:(id)arg1;
- (id)autoLoopExportRequest;

@end
