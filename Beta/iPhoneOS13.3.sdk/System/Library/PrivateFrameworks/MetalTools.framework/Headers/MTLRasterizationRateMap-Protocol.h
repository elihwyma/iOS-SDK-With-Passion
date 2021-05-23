/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@protocol MTLRasterizationRateMap <Swift>

@property (readonly) id <MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) CDStruct_14f26992 screenSize;
@property (readonly) CDStruct_14f26992 physicalGranularity;
@property (readonly) unsigned long long layerCount;
@property (readonly) CDStruct_4bcfbbae parameterBufferSizeAndAlign;

- (unsigned short)copyParameterDataToBuffer:offset: /* Error: Ran out of types for this method. */;
- (unsigned short)physicalSizeForLayer: /* Error: Ran out of types for this method. */;
- (unsigned short)mapScreenToPhysicalCoordinates:forLayer: /* Error: Ran out of types for this method. */;
- (unsigned short)mapPhysicalToScreenCoordinates:forLayer: /* Error: Ran out of types for this method. */;

@end
