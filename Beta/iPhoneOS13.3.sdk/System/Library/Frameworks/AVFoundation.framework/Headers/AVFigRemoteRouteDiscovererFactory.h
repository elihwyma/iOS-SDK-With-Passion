/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVFigRemoteRouteDiscovererFactory : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct OpaqueFigRouteDiscoverer *)createRouteDiscovererWithAllocator:(const struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2;

@end
