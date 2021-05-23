/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMCameraClipManager.h>

@class NSArray;

@interface HMCameraClipManager (HFAdditions)

@property (copy, nonatomic, readonly) NSArray *hf_clips;

+ (id)hf_findClipPositionForDate:(id)arg1 inClips:(id)arg2 options:(unsigned long long)arg3;
+ (unsigned long long)hf_indexOfClipForDate:(id)arg1 inClips:(id)arg2 enumerationOptions:(unsigned long long)arg3 searchOptions:(unsigned long long)arg4;

- (void)hf_prepareForDismissal;
- (void)hf_shouldBypassResourceLoading:(_Bool)arg1;
- (void)hf_reloadForUpdatedClips:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hf_reloadForRemovedClips:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_internalClips;
- (id)_playableClipsFromArray:(id)arg1;
- (void)_prepareInternalClipCache:(id)arg1;
- (void)updateFirstOfTheDayClips:(id)arg1 withClip:(id)arg2 previousClip:(id)arg3;
- (void)_prepareDatesContainingClips;
- (id)_firstOfTheDayClips;
- (_Bool)_isClipDisplayable:(id)arg1;
- (void)hmf_setClips:(id)arg1;
- (id)hf_findClipPositionForDate:(id)arg1;
- (id)hf_findClipPositionForDate:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)hf_shouldBypassResourceLoading;
- (void)hf_setDemoClipsForCameraProfile:(id)arg1;
- (void)hf_deleteAllClipsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)hf_datesContainingClips;
- (id)hf_findClipForDate:(id)arg1;
- (_Bool)hf_isFirstClipOfTheDay:(id)arg1;

@end
