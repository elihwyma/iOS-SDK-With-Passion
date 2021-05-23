/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@protocol ICCloudKitSyncerDelegate;

@interface ICCloudKitSyncer : NSObject

{
    id <ICCloudKitSyncerDelegate> _delegate;
}

@property (weak, nonatomic) id <ICCloudKitSyncerDelegate> delegate;

- (void)saveUnsyncedObjectsWithRetryCount:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveUnsyncedObjects;

@end
