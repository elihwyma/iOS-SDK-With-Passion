/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _DKSyncMetadataStorage : NSObject

+ (id)windowStreamNameWithSourceDeviceID:(id)arg1;
+ (id)bookmarkStreamNameWithSourceDeviceID:(id)arg1;
+ (id)eventFromFetchedWindow:(id)arg1 windowStreamName:(id)arg2 transportName:(id)arg3;
+ (id)eventFromStartDate:(id)arg1 endDate:(id)arg2 bookmarkStreamName:(id)arg3 transportName:(id)arg4;

@end
