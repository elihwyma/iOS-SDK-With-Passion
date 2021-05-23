/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/Swift-Protocol.h>

@class NSURL;

@protocol SBFIrisWallpaperViewDelegate;

@protocol SBFIrisWallpaperView <Swift>

@property (weak, nonatomic) id <SBFIrisWallpaperViewDelegate> irisDelegate;
@property (nonatomic, readonly) long long irisPlaybackState;
@property (nonatomic, readonly) _Bool isIrisInteracting;
@property (copy, nonatomic, readonly) NSURL *videoFileURL;
@property (nonatomic, readonly) double stillTimeInVideo;

- (unsigned short)irisGestureRecognizer;

@end
