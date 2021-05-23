/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class HMCameraClip;

@protocol HFCameraClipQueuableItem <Swift>

@property (nonatomic, readonly) HMCameraClip *clip;
@property (nonatomic, readonly, getter=isPlayable) _Bool playable;

@end
