/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <Foundation/NSObject.h>

@interface PreProcessorFactory : NSObject

+ (id)defaultFactory;

- (id)preProcessorForFormat:(struct opaqueCMFormatDescription *)arg1 encoderType:(int)arg2;

@end
