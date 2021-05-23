/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

@class NSString;

@protocol MTLDevice;

@interface MTLToolsRasterizationRateMap : MTLToolsObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) CDStruct_14f26992 screenSize;
@property (readonly) CDStruct_14f26992 physicalGranularity;
@property (readonly) unsigned long long layerCount;
@property (readonly) CDStruct_4bcfbbae parameterBufferSizeAndAlign;

- (id)formattedDescription:(unsigned long long)arg1;
- (void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (CDStruct_14f26992)physicalSizeForLayer:(unsigned long long)arg1;
- (CDStruct_b2fbf00d)mapScreenToPhysicalCoordinates:(CDStruct_b2fbf00d)arg1 forLayer:(unsigned long long)arg2;
- (CDStruct_b2fbf00d)mapPhysicalToScreenCoordinates:(CDStruct_b2fbf00d)arg1 forLayer:(unsigned long long)arg2;
- (void)acceptVisitor:(id)arg1;

@end
