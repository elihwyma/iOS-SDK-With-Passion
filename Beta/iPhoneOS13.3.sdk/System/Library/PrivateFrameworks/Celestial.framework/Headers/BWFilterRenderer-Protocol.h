/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@class NSString;

@protocol BWFilterRenderer <Swift>

@property (copy, nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) _Bool supportsAnimation;
@property (nonatomic, readonly) _Bool adjustsMetadata;

- (unsigned short)prepareForRenderingWithParameters:inputVideoFormat:inputDepthFormat: /* Error: Ran out of types for this method. */;
- (unsigned short)renderUsingParameters:inputPixelBuffer:inputSampleBuffer:originalPixelBuffer:processedPixelBuffer:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)adjustMetadataOfSampleBuffer: /* Error: Ran out of types for this method. */;

@end
