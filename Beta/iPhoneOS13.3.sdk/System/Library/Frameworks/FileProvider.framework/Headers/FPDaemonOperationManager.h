/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDaemonOperationManager : NSObject

{
    _Bool _started;
    NSMutableSet *_localOperationIDs;
    NSObject<OS_dispatch_queue> *_queue;
    int _notifToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)generateLocalOperationID;
- (void)wakeUp;
- (void)_updateDaemonOperations;
- (void)_receiveLongLivedOperation:(id)arg1 info:(id)arg2;
- (void)_enumerateNewDaemonOperationsWithHandler:(CDUnknownBlockType)arg1;

@end
