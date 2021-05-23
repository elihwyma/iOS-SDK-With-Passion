/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKSnapshotUtilities : NSObject

+ (id)snapshotForGUID:(id)arg1;
+ (void)_saveSnapshot:(id)arg1 url:(id)arg2;
+ (id)_snapshotAtURL:(id)arg1;
+ (void)cacheSnapshot:(id)arg1 guid:(id)arg2 postChangeNotification:(_Bool)arg3;
+ (void)_cacheSnapshotView:(id)arg1 forGUID:(id)arg2;
+ (id)_snapshotViewForGUID:(id)arg1;

@end
