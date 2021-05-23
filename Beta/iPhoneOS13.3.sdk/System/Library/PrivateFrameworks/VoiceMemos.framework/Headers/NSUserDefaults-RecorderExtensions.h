/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (RecorderExtensions)

- (_Bool)rc_useLocationBasedNaming;
- (long long)rc_audioQuality;
- (_Bool)_deletionMatchesWindow:(long long)arg1;
- (long long)rc_recentlyDeletedWindow;
- (_Bool)rc_deletionIsImmediate;
- (_Bool)rc_deletionIsNever;

@end
