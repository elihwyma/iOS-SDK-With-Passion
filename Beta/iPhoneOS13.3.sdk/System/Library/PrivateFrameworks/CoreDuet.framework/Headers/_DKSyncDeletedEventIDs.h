/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _DKSyncDeletedEventIDs : NSObject

{
    NSMutableDictionary *_deletedEventIDsBySourceDeviceID;
}

- (id)init;
- (unsigned long long)count;
- (void)addDeletedEventID:(id)arg1 forSourceDeviceID:(id)arg2;
- (id)sourceDeviceIDs;
- (id)deletedEventIDsForSourceDeviceID:(id)arg1;

@end
