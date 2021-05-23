/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@class NMRNowPlayingState, NMROrigin, NMRPlaybackQueue;

@protocol NMROriginObserverDelegate;

@protocol NMROriginObserver

@property (nonatomic, readonly) NMROrigin *origin;
@property (nonatomic, readonly) NMRNowPlayingState *nowPlayingState;
@property (nonatomic, readonly) NMRPlaybackQueue *playbackQueue;
@property (weak, nonatomic) id <NMROriginObserverDelegate> delegate;
@property (nonatomic) _Bool shouldObservePlaybackQueue;
@property (nonatomic) _Bool shouldObserveArtwork;
@property (nonatomic) _Bool shouldObserveLibraryAddStatus;

- (unsigned short)beginObserving;
- (unsigned short)endObserving;
- (unsigned short)updateNowPlayingStateWithCompletion: /* Error: Ran out of types for this method. */;

@end
