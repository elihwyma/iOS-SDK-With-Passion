/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, NSMutableDictionary, NSOperationQueue, NSString, NSURL, brc_task_tracker;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCFileProvider : NSObject

{
    BRCAccountSession *_session;
    NSURL *_url;
    NSOperationQueue *_queue;
    NSMutableDictionary *_presentersIDsByKey;
    NSObject<OS_dispatch_queue> *_privQueue;
    brc_task_tracker *_tracker;
}

@property (retain, nonatomic) BRCAccountSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *_providedItemsURL;
@property (readonly) NSOperationQueue *_providedItemsOperationQueue;
@property (copy, readonly) NSString *_fileReactorID;

+ (id)prettyNameForFilePresenterID:(id)arg1;

- (void)resume;
- (void)suspend;
- (void)_provideItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;
- (id)_pathForKey:(id)arg1;
- (id)initWithURL:(id)arg1 name:(id)arg2;
- (void)dumpToContext:(id)arg1;
- (id)_keyForURL:(id)arg1;
- (void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 name:(id)arg3 session:(id)arg4;
- (void)_unregisterPresenterForKey:(id)arg1;
- (id)_keyForURL:(id)arg1 andID:(id)arg2;

@end
