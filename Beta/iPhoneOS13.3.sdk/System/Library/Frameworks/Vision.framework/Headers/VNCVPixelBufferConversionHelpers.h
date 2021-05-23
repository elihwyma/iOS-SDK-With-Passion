/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNCVPixelBufferConversionHelpers : NSObject

+ (id)createDictionaryRepresentationOfCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (struct __CVBuffer *)createCVPixelBufferRefFromDictionaryRepresentation:(id)arg1;
+ (_Bool)isCVPixelBuffer:(struct __CVBuffer *)arg1 equalToCVPixelBuffer:(struct __CVBuffer *)arg2;
+ (unsigned long long)computeHashForCVPixelBuffer:(struct __CVBuffer *)arg1;

@end
