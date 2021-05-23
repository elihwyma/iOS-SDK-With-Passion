/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AVFigRouteDiscovererFactory;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory : NSObject

{
    id <AVFigRouteDiscovererFactory> _routeDiscovererFactory;
}

@property (nonatomic, readonly) id <AVFigRouteDiscovererFactory> routeDiscovererFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)outputDeviceDiscoverySessionOfClass:(Class)arg1 withDeviceFeatures:(unsigned long long)arg2;
- (id)initWithRouteDiscovererFactory:(id)arg1;

@end
