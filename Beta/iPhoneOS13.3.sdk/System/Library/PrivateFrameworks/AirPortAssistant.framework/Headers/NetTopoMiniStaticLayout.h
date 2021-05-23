/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <Foundation/NSObject.h>

@class CALayer, NSArray, NSMutableArray;

@interface NetTopoMiniStaticLayout : NSObject

{
    id _owningView;
    int _layoutOptions;
    CALayer *_containerLayer;
    NSMutableArray *_topoDeviceLayers;
    NSMutableArray *_connectionLayers;
    NSArray *_topoDevicesDescriptor;
}

@property (retain, nonatomic) NSArray *topoDevicesDescriptor;
@property (retain, nonatomic) CALayer *containerLayer;
@property (nonatomic, readonly) NSArray *topoDeviceLayers;
@property (nonatomic) int layoutOptions;
@property (retain, nonatomic) id owningView;

- (void)dealloc;
- (void)performLayout;
- (id)initWithContainerLayer:(id)arg1 andOptions:(int)arg2;
- (void)createLayoutForDevices:(id)arg1;
- (void)destroyDeviceLayers;
- (struct CGImage *)imageForDeviceSpec:(id)arg1 wantSmall:(_Bool)arg2 forContentsScale:(double)arg3;

@end
