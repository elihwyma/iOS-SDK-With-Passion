/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MapEngineRenderQueueSource : NSObject

{
    struct MapEngine *_mapEngine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithEngine:(struct MapEngine *)arg1;
- (struct RenderQueue *)renderQueueForTimestamp:(double)arg1;
- (_Bool)isDelayedRenderQueueConsumptionSupported;

@end
