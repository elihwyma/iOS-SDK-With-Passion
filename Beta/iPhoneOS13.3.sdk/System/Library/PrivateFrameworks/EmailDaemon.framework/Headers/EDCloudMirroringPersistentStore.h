/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDTaskScheduler, NSManagedObjectContext, NSPersistentContainer, NSString;

@interface EDCloudMirroringPersistentStore : NSObject

{
    NSPersistentContainer *_persistentContainer;
    EDTaskScheduler *_importScheduler;
    EDTaskScheduler *_exportScheduler;
    NSManagedObjectContext *_managedObjectContext;
}

@property (nonatomic, readonly) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) EDTaskScheduler *importScheduler;
@property (retain, nonatomic) EDTaskScheduler *exportScheduler;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)init;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)_setupCoreDataStack;
- (void)_requestWithKind:(int)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_schedulerForKind:(int)arg1;
- (void)_executeRequestWithKind:(int)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_wrapCompletion:(CDUnknownBlockType)arg1 forRequestKind:(int)arg2;
- (void)requestImportWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)requestExportWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
