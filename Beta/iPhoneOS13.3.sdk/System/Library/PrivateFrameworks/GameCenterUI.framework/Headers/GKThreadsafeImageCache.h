/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterFoundation/GKThreadsafeCache.h>

@class NSString;

@interface GKThreadsafeImageCache : GKThreadsafeCache

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)applicationDidEnterBackground:(id)arg1;
- (id)initWithName:(id)arg1 maxCount:(unsigned long long)arg2;
- (void)greatestScreenScaleDidChange:(double)arg1;

@end
