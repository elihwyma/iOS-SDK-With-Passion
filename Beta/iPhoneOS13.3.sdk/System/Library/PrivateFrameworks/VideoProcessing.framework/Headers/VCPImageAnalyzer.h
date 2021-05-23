/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPImageAnalyzer : NSObject

- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (int)processTile:(struct __CVBuffer *)arg1 results:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)aggregateTileResults:(id)arg1 tileRect:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 landscape:(_Bool)arg4 results:(id)arg5;
- (int)analyzePixelBufferInTiles:(struct __CVBuffer *)arg1 results:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)calculateTextureness:(float *)arg1 height:(int)arg2 width:(int)arg3 sdof:(_Bool)arg4 result:(char *)arg5;

@end
