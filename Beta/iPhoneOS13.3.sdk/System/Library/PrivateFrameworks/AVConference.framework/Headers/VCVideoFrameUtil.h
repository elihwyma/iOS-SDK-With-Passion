/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoFrameUtil : NSObject

+ (struct __CVBuffer *)CVPixelBufferFromXPCDictionary:(id)arg1 isDepth:(_Bool)arg2;
+ (CDStruct_1b6d18a9)CMTimeFromXPCDictionary:(id)arg1;
+ (id)newXPCDictionaryWithCVPixelBuffer:(struct __CVBuffer *)arg1 depthPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3;

@end
