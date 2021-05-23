/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol WBSCyclerTestSuite, WBSCyclerTestTarget;

@interface WBSCyclerTestRunner : NSObject

{
    _Bool _stopRequested;
    NSMutableArray *_pendingRequestQueue;
    NSMutableArray *_pendingRequestCompletionHandlerQueue;
    _Bool _running;
    id <WBSCyclerTestSuite> _testSuite;
    id <WBSCyclerTestTarget> _target;
}

@property (nonatomic, readonly) id <WBSCyclerTestSuite> testSuite;
@property (nonatomic, readonly) id <WBSCyclerTestTarget> target;
@property (nonatomic, readonly, getter=isRunning) _Bool running;

- (id)init;
- (void)dealloc;
- (void)_stop;
- (void)runWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)requestStop;
- (void)handleRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithTestSuite:(id)arg1 target:(id)arg2;
- (void)_performNextIterationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleNextPendingRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
