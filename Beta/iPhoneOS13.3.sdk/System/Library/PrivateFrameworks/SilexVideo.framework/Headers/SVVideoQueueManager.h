/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol SVVideo, SVVideoQueue;

@interface SVVideoQueueManager : NSObject

{
    _Bool _locked;
    id <SVVideoQueue> _queue;
    id <SVVideoQueue> _pendingQueue;
    NSMutableArray *_updateBlocks;
    NSMutableArray *_modifiers;
    id <SVVideo> _video;
}

@property (copy, nonatomic) id <SVVideoQueue> queue;
@property (copy, nonatomic) id <SVVideoQueue> pendingQueue;
@property (nonatomic, readonly) NSMutableArray *updateBlocks;
@property (nonatomic, readonly) NSMutableArray *modifiers;
@property (retain, nonatomic) id <SVVideo> video;
@property (nonatomic) _Bool locked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1;
- (void)onUpdate:(CDUnknownBlockType)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)videoViewControllerDidAppear:(id)arg1;
- (void)videoViewControllerWillDisappear:(id)arg1;
- (void)replaceCurrentQueueWithQueue:(id)arg1;
- (void)addModifier:(id)arg1;
- (void)removeModifier:(id)arg1;

@end
