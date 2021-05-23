/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSOperation.h>

@class CKDClientContext, CKDClientProxy, CKDOperation, NSDate, NSObject, NSOperationQueue, NSString;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDPlaceholderOperation : NSOperation

{
    NSObject<OS_dispatch_group> *_group;
    _Bool _isFinished;
    _Bool _isExecuting;
    NSDate *_startDate;
    CKDOperation *_realOperation;
    NSOperationQueue *_targetOperationQueue;
}

@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic, readonly) CKDOperation *realOperation;
@property (nonatomic, readonly) NSOperationQueue *targetOperationQueue;
@property (nonatomic) _Bool isExecuting;
@property (nonatomic) _Bool isFinished;
@property (nonatomic, readonly) NSString *operationID;
@property (weak, nonatomic, readonly) CKDClientProxy *proxy;
@property (nonatomic, readonly) CKDClientContext *context;

- (id)description;
- (void)cancel;
- (void)start;
- (void)main;
- (_Bool)isConcurrent;
- (id)ckShortDescription;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (void)_setIsExecuting:(_Bool)arg1;
- (void)_setIsFinished:(_Bool)arg1;
- (id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2;
- (id)statusReportWithIndent:(unsigned long long)arg1;
- (id)_runDurationString;
- (id)_startDateString;

@end
