/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@interface MLPInferenceResult : NSObject

{
    struct map<unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>>>>> confusionMatrix;
    float logLikelihood;
    float totalLoss;
}

- (id).cxx_construct;

@end
