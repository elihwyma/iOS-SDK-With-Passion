/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MTLDevice;

@interface _MTLRasterizationRateMap : NSObject

{
    id <MTLDevice> _device;
    NSString *_label;
    CDStruct_da2e99ad _dim;
}

@property (readonly) id <MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) CDStruct_da2e99ad screenSize;
@property (readonly) unsigned long long layerCount;
@property (readonly) CDStruct_da2e99ad physicalGranularity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) CDStruct_4bcfbbae parameterBufferSizeAndAlign;

- (id)init;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)copyParameterDataToBuffer:(id)arg1 atOffset:(unsigned long long)arg2;
- (void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (CDStruct_6e3f967a)physicalCoordinate:(CDStruct_6e3f967a)arg1 forLayer:(unsigned long long)arg2;
- (CDStruct_6e3f967a)screenCoordinate:(CDStruct_6e3f967a)arg1 forLayer:(unsigned long long)arg2;
- (CDStruct_da2e99ad)physicalSizeForLayer:(unsigned long long)arg1;
- (CDStruct_6e3f967a)mapScreenToPhysicalCoordinates:(CDStruct_6e3f967a)arg1 forLayer:(unsigned long long)arg2;
- (CDStruct_6e3f967a)mapPhysicalToScreenCoordinates:(CDStruct_6e3f967a)arg1 forLayer:(unsigned long long)arg2;

@end
