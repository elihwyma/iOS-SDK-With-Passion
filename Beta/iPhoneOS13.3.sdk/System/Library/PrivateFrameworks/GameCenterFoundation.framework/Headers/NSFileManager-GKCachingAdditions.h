/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (GKCachingAdditions)

- (long long)_gkReadXattrBytes:(void *)arg1 count:(unsigned long long)arg2 withName:(id)arg3 path:(id)arg4;
- (void)_gkWriteXattrBytes:(void *)arg1 count:(unsigned long long)arg2 withName:(id)arg3 path:(id)arg4;
- (void)_gkRemoveXattrNamed:(id)arg1 path:(id)arg2;
- (double)_gkExpirationIntervalOfFileAtPath:(id)arg1;
- (void)_gkSetExpirationInterval:(double)arg1 ofFileAtPath:(id)arg2;

@end
