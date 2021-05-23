/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CATOperationQueue, CATTaskClient, CRKShareTargetBrowserTransportFactory, CRKShareTargetCollector, NSString;

@protocol CRKShareTargetBrowserDelegate, OS_dispatch_queue;

@interface CRKShareTargetBrowser : NSObject

{
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    id <CRKShareTargetBrowserDelegate> mDelegate;
    CATOperationQueue *mOperationQueue;
    _Bool mBrowsing;
    _Bool mIsValid;
    CATTaskClient *_studentClient;
    CATTaskClient *_instructorClient;
    CRKShareTargetBrowserTransportFactory *_transportFactory;
    CRKShareTargetCollector *_shareTargetCollector;
}

@property (retain, nonatomic) CATTaskClient *studentClient;
@property (retain, nonatomic) CATTaskClient *instructorClient;
@property (nonatomic, readonly) CRKShareTargetBrowserTransportFactory *transportFactory;
@property (nonatomic, readonly) CRKShareTargetCollector *shareTargetCollector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (void)suspend;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidateClient:(id)arg1;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)clientDidConnect:(id)arg1;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)connectToStudentd;
- (void)tearDownStudentClient;
- (void)tearDownInstructorClient;
- (void)acquireStudentActivityAssertionOperationDidFail:(id)arg1;
- (_Bool)isClientInvalidationError:(id)arg1;
- (void)browseForStudentTargetsOperationDidFail:(id)arg1;
- (void)browseForInstructorTargetsOperationDidFail:(id)arg1;
- (void)acquireStudentActivityAssertion;
- (void)startBrowsingForStudentTargets;
- (void)connectToInstructord;
- (void)startBrowsingForInstructorTargets;
- (id)makeShareTargetsWithDictionaries:(id)arg1 taskClient:(id)arg2;
- (void)delegateDidFindTargets:(id)arg1;
- (void)delegateDidRemoveTargets:(id)arg1;
- (void)shareTargetCollector:(id)arg1 didFindTargets:(id)arg2;
- (void)shareTargetCollector:(id)arg1 didRemoveTargets:(id)arg2;

@end
