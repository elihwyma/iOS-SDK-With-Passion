/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, SVVolumeProvider;

@interface SXVideoPlayerViewControllerManager : NSObject

{
    _Bool _presentedAndAppeared;
    SVVolumeProvider *_volumeProvider;
    NSURL *_autoplayURL;
    NSMutableDictionary *_videoAnalyticsRouters;
    NSMutableDictionary *_visibilityMonitors;
    NSMutableDictionary *_videoPlayerViewControllers;
    NSMutableDictionary *_loseOwnershipBlocks;
    NSMutableDictionary *_pendingVideoPlayerViewControllers;
    NSMutableDictionary *_pendingLoseOwnershipBlocks;
    NSMutableDictionary *_pendingReceiveOwnershipBlocks;
}

@property (nonatomic, readonly) SVVolumeProvider *volumeProvider;
@property (copy, nonatomic) NSURL *autoplayURL;
@property (nonatomic, readonly) NSMutableDictionary *videoAnalyticsRouters;
@property (nonatomic, readonly) NSMutableDictionary *visibilityMonitors;
@property (nonatomic, readonly) NSMutableDictionary *videoPlayerViewControllers;
@property (nonatomic, readonly) NSMutableDictionary *loseOwnershipBlocks;
@property (nonatomic, readonly) NSMutableDictionary *pendingVideoPlayerViewControllers;
@property (nonatomic, readonly) NSMutableDictionary *pendingLoseOwnershipBlocks;
@property (nonatomic, readonly) NSMutableDictionary *pendingReceiveOwnershipBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool presentedAndAppeared;

- (void)configureAutoplayForVideoWithURL:(id)arg1 analyticsRouter:(id)arg2;
- (id)initWithVolumeProvider:(id)arg1;
- (id)videoPlayerViewControllerForURL:(id)arg1 receiveOwnershipBlock:(CDUnknownBlockType)arg2;
- (void)registerExistingVideoPlayerViewController:(id)arg1 URL:(id)arg2 analyticsRouter:(id)arg3 videoPlayerVisibilityMonitor:(id)arg4 loseOwnershipBlock:(CDUnknownBlockType)arg5;

@end
