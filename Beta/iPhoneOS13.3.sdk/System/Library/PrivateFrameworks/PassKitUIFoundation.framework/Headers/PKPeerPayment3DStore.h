/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSCache, NSMutableArray, NSString, PKMotionManager, SCNMaterial;

@protocol OS_dispatch_queue;

@interface PKPeerPayment3DStore : NSObject

{
    NSCache *_cache;
    SCNMaterial *_textMaterial;
    NSObject<OS_dispatch_queue> *_scenesQueue;
    NSObject<OS_dispatch_queue> *_sceneLoadingQueue;
    NSMutableArray *_activeScenes;
    CDStruct_14d5dc5e _rotationMatrix;
    MISSING_TYPE *_skew;
    MISSING_TYPE *_lastRollPitch;
    CDStruct_14d5dc5e _staticRotationMatrix;
    MISSING_TYPE *_staticSkew;
    PKMotionManager *_motionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)sceneDidBecomeActive:(id)arg1;
- (id)material;
- (void)newSceneWithCompletion:(CDUnknownBlockType)arg1 synchronously:(_Bool)arg2;
- (void)relinquishScene:(id)arg1;
- (void)charactersForText:(id)arg1 completion:(CDUnknownBlockType)arg2 synchronously:(_Bool)arg3;
- (void)sceneDidBecomeInactive:(id)arg1;
- (void)setRollPitch: /* Error: Ran out of types for this method. */;
- (id)nodeForCharacter:(id)arg1;
- (void)motionManager:(id)arg1 didReceiveMotion:(id)arg2;

@end
