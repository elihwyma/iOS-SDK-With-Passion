/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject

{
    NSMutableArray *_deletionInfos;
}

+ (id)filesystemDeletionQueue;
+ (void)waitForAllDelayedDeletionsToFinish;
+ (void)appendDescriptionForEvent:(id)arg1 toComponents:(id)arg2;
+ (id)deletionsFromChangeHubEvent:(id)arg1;

- (void)dealloc;
- (id)debugDescription;
- (void)addFilesystemDeletionInfo:(id)arg1;
- (void)appendToXPCMessage:(id)arg1 managedObjectContext:(id)arg2;
- (void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFilesystemDeletionInfos:(id)arg1;

@end
