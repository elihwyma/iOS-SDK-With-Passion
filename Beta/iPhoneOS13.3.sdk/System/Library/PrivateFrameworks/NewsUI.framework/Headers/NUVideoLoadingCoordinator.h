/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString;

@protocol SVVideoPlaybackController;

@interface NUVideoLoadingCoordinator : NSObject <Swift>

{
    _Bool _loadStarted;
    id <SVVideoPlaybackController> _playbackController;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic, readonly) id <SVVideoPlaybackController> playbackController;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (nonatomic, getter=hasLoadStarted) _Bool loadStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedForVideoAdWithMetadata:(id)arg1;
- (void)_invokeAndClearCompletionBlockWithError:(id)arg1;
- (id)loadContentWithTimeoutTime:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithPlaybackController:(id)arg1;

@end
