/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderJob.h>

@class NSDictionary;

@interface NUImageDataJob : NURenderJob

{
    NSDictionary *_data;
}

- (id)result;
- (id)cacheKey;
- (_Bool)render:(out id *)arg1;
- (void)cleanUp;
- (id)requestOptions;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (id)scalePolicy;
- (id)extractDataToDictionary:(id)arg1 bounds:(CDStruct_996ac03c)arg2 dataExtractor:(id)arg3 options:(id)arg4 colorSpace:(struct CGColorSpace *)arg5 error:(id *)arg6;

@end
