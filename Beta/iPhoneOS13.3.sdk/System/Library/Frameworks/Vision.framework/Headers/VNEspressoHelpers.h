/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNEspressoHelpers : NSObject

+ (id)pathForEspressoResource:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
+ (id)pathForEspressoResourceWithFilename:(id)arg1 error:(id *)arg2;
+ (id)pathForEspressoNetworkModelFileWithName:(id)arg1 error:(id *)arg2;
+ (int)espressoDeviceIDForMetalDevice:(id)arg1;
+ (_Bool)createSingleNetworkPlanFromResourceName:(id)arg1 usingProcessingDevice:(id)arg2 lowPriorityMode:(_Bool)arg3 inputBlobNames:(id)arg4 outputBlobNames:(id)arg5 espressoContext:(void **)arg6 espressoPlan:(void **)arg7 espressoNetwork:(CDStruct_2bc666a5 *)arg8 error:(id *)arg9;
+ (_Bool)createSingleNetworkPlanFromResourceName:(id)arg1 usingProcessingDevice:(id)arg2 lowPriorityMode:(_Bool)arg3 inputBlobNames:(id)arg4 outputBlobNames:(id)arg5 explicitNetworkLayersStorageType:(int)arg6 espressoContext:(void **)arg7 espressoPlan:(void **)arg8 espressoNetwork:(CDStruct_2bc666a5 *)arg9 error:(id *)arg10;
+ (void)tearDownEspressoContext:(void *)arg1 andPlan:(void *)arg2;
+ (struct __CVBuffer *)createCVPixelBufferWithPixelFormat:(unsigned int)arg1 fromImageInEspressoBuffer:(const CDStruct_cf098810 *)arg2 error:(id *)arg3;
+ (_Bool)renderEspressoBufferImage:(const CDStruct_cf098810 *)arg1 intoCVPixelBuffer:(struct __CVBuffer *)arg2 error:(id *)arg3;
+ (unsigned long long)pixelValueSizeInBytesForBuffer:(const CDStruct_cf098810 *)arg1 error:(id *)arg2;
+ (_Bool)enableMontrealAndReturnError:(id *)arg1;
+ (_Bool)feedForwardEspressoBufferForNetwork:(CDStruct_2bc666a5 *)arg1 fromBufferWithName:(id)arg2 toBufferWithName:(id)arg3 firstFrame:(_Bool)arg4 error:(id *)arg5;

@end
