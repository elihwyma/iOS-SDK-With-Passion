/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSArray, NSMutableArray;

@interface MDLScene : NSObject

{
    struct mutex *_sceneMutex;
    struct vector<ModelIO::RTRenderable *, std::__1::allocator<ModelIO::RTRenderable *>> _sceneObjects;
    struct vector<MDLLight *, std::__1::allocator<MDLLight *>> _sceneLights;
    NSMutableArray *_objects;
    int _signature;
}

@property (retain, nonatomic, readonly) NSArray *objects;

- (id)init;
- (void)dealloc;
- (void)addObject:(id)arg1;
- (void)clear;
- (id).cxx_construct;
- (id)raytraceSceneWithCamera:(const struct RTCamera *)arg1 reflection:(id)arg2 irradiance:(id)arg3 size: /* Error: Ran out of types for this method. */;
- (int)acquireLockGuard;
- (void)releaseLockGuard:(int)arg1;
- (MISSING_TYPE *)hitTestRayFrom:(id)arg1 withDirection:usingCamera: /* Error: Ran out of types for this method. */;
- (_Bool)castRayFrom:(struct RTCamera *)arg1 withDirection:(struct RTIntersectionResult *)arg2 usingCamera:result: /* Error: Ran out of types for this method. */;

@end
