/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <Foundation/NSObject.h>

@interface PostProcessorFactory : NSObject

+ (id)defaultFactory;

- (id)postProcessorForOriginalPixelFormat:(unsigned int)arg1 encodedFormat:(unsigned int)arg2 encoderType:(id)arg3 streamId:(id)arg4;

@end
