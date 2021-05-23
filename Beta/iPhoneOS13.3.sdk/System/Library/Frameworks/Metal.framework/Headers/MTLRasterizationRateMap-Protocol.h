/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@protocol MTLRasterizationRateMap <Swift>

@property (readonly) id <MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) CDStruct_da2e99ad screenSize;
@property (readonly) CDStruct_da2e99ad physicalGranularity;
@property (readonly) unsigned long long layerCount;
@property (readonly) CDStruct_4bcfbbae parameterBufferSizeAndAlign;

- (unsigned short)copyParameterDataToBuffer:offset: /* Error: Ran out of types for this method. */;
- (unsigned short)physicalSizeForLayer: /* Error: Ran out of types for this method. */;
- (unsigned short)mapScreenToPhysicalCoordinates:forLayer: /* Error: Ran out of types for this method. */;
- (unsigned short)mapPhysicalToScreenCoordinates:forLayer: /* Error: Ran out of types for this method. */;

@end
