/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SXVideoPlaybackQueue : NSObject

{
    NSMutableArray *_queue;
}

@property (nonatomic, readonly) NSMutableArray *queue;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)advance;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (void)appendItem:(id)arg1;
- (void)prefetchItemAfterCoordinatorIfPossible:(id)arg1;
- (void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)playbackCoordinator:(id)arg1 loadingProgressed:(double)arg2;
- (void)prependItem:(id)arg1;

@end
