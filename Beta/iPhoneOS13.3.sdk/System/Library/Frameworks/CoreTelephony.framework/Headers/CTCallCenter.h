/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CXCallObserver, NSSet, NSString;

@interface CTCallCenter : NSObject

{
    struct queue _queue;
    struct queue clientQueue;
    NSSet *_currentCalls;
    CDUnknownBlockType _callEventHandler;
    CXCallObserver *_callKitObserver;
}

@property (retain) CXCallObserver *callKitObserver;
@property (retain) NSSet *currentCalls;
@property (copy, nonatomic) CDUnknownBlockType callEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)initialize;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1;
- (id).cxx_construct;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (_Bool)calculateCallStateChanges_sync:(id)arg1;
- (_Bool)getCurrentCallSetFromServer_sync:(id)arg1;
- (void)handleCallStatusChange_sync:(id)arg1;
- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1;

@end
