/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, NSOperationQueue;

@interface ML3DatabaseImportManager : NSObject

{
    NSOperationQueue *_importOperationQueue;
    NSMutableArray *_suspendedImportOperations;
    NSError *_lastImportError;
}

@property (retain, nonatomic) NSError *lastImportError;
@property (nonatomic, readonly) unsigned long long operationsCount;
@property (nonatomic, readonly) unsigned long long suspendedOperationsCount;
@property (nonatomic, readonly, getter=isSuspended) _Bool suspended;

- (id)init;
- (id)_importOperations;
- (void)_handleImportOperationCancelled:(id)arg1;
- (void)_handleImportOperationCompleted:(id)arg1;
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 progressBlock:(CDUnknownBlockType)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (float)currentOperationProgressWithError:(id *)arg1;
- (void)cancelAllImportOperations;
- (void)cancelImportOperationsOriginatingFromClient:(id)arg1;
- (void)cancelImportOperationsForSource:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)suspendImportOperations;
- (void)resumeSuspendedImportOperations;
- (id)_suspendedImportOperations;

@end
