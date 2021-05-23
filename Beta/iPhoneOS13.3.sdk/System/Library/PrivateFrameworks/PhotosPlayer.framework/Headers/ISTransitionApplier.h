/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ISTransitionApplier : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultApplier;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 toPhotoLayer:(id)arg3 videoLayer:(id)arg4 containerLayer:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 toPhotoLayer:(id)arg3 videoLayer:(id)arg4 containerLayer:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_applyAlpha:(double)arg1 blurRadius:(double)arg2 toLayer:(id)arg3 withTransitionOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_applyScale:(double)arg1 toLayer:(id)arg2 withTransitionOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofLayer:(id)arg3 withTransitionOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end
