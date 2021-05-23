/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/Swift-Protocol.h>

@class MISSING_TYPE, NSURL;

@protocol SBFIrisWallpaperViewDelegate;

@protocol SBFIrisWallpaperView <Swift>

@property (weak, nonatomic) id <SBFIrisWallpaperViewDelegate> irisDelegate;
@property (nonatomic, readonly) long long irisPlaybackState;
@property (nonatomic, readonly) _Bool isIrisInteracting;
@property (copy, nonatomic, readonly) NSURL *videoFileURL;
@property (nonatomic, readonly) double stillTimeInVideo;

- (MISSING_TYPE *)irisGestureRecognizer;

@end
