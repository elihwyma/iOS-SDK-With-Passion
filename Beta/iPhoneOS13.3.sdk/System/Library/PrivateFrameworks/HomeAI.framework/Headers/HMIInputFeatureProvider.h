/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMIInputFeatureProvider : NSObject

{
    struct __CVBuffer *_pixelBuffer;
    NSString *_inputName;
}

@property (readonly) struct __CVBuffer *pixelBuffer;
@property (readonly) NSString *inputName;
@property (nonatomic, readonly) NSSet *featureNames;

- (void)dealloc;
- (id)featureValueForName:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 inputName:(id)arg2;

@end
