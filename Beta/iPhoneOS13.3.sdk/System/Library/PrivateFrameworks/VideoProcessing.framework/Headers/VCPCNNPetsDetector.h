/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNPetsDetector : NSObject

+ (id)detector:(int)arg1;

- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChannels:(int)arg3;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)createModel:(int)arg1 srcWidth:(int)arg2;
- (int)postProcBoxes:(id)arg1 maxNumRegions:(int)arg2;
- (int)petsDetection:(struct __CVBuffer *)arg1 petsRegions:(id)arg2 petsFaceRegions:(id)arg3 cancel:(CDUnknownBlockType)arg4;
- (int)generatePetsRegions:(float *)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 faceBoxes:(id)arg5 maxNumRegions:(int)arg6;
- (int)generatePetsBoxes:(id)arg1 faceBoxes:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (void)nonMaxSuppression:(id)arg1;

@end
