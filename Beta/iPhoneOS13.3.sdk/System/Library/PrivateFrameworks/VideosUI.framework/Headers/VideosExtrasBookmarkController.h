/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SBCPlaybackPositionDomain, SBCPlaybackPositionValueService;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VideosExtrasBookmarkController : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    SBCPlaybackPositionDomain *_domain;
    SBCPlaybackPositionValueService *_extrasService;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_updateTimeForEntities;
    double _minimumBookmarkUpdateInterval;
}

@property (nonatomic) double minimumBookmarkUpdateInterval;

+ (id)sharedInstance;

- (id)init;
- (void)pullBookmarksForIdentifiers:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_loadAllBookmarksWithRemainingIdentifiers:(id)arg1 bookmarkTimes:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)pushBookmarkForIdentifier:(id)arg1 bookmarkTime:(double)arg2 playedToNominalLength:(_Bool)arg3;
- (void)pullBookmarksForAssets:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)pushBookmarkForAsset:(id)arg1 bookmarkTime:(double)arg2 playedToNominalLength:(_Bool)arg3;

@end
