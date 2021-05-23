/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNBlurSignature : NSObject

{
    void *_signatureData;
}

+ (id)computeBlurSignatureForGrayscaleImage:(struct __CVBuffer *)arg1 error:(id *)arg2;

- (void)dealloc;
- (id)initWithSignatureData:(void *)arg1;
- (void)setSignatureData:(void *)arg1;
- (void *)getSignatureData;

@end
