/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/Swift-Protocol.h>

@protocol ISBasePlayerOutput <Swift>

@property (nonatomic, readonly) _Bool isVideoReadyForDisplay;
@property (copy, nonatomic) CDUnknownBlockType videoLayerReadyForDisplayChangeHandler;

- (unsigned short)setContent: /* Error: Ran out of types for this method. */;
- (unsigned short)applyScale:withTransitionOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)applyOutputInfo:withTransitionOptions:completion: /* Error: Ran out of types for this method. */;

@end
