/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class TCMessageContext, TCProgressContext;

@protocol OS_dispatch_group, OS_dispatch_queue, TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface TCBackgroundThreadManager : NSObject

{
    id <TCCancelDelegate> mCancelDelegate;
    _Bool mIsWaiting;
    unsigned long long mBlockCount;
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_group> *mGroup;
    NSObject<OS_dispatch_queue> *mProgressReportingQueue;
    TCMessageContext *mMessageContext;
    TCProgressContext *mProgressContext;
}

@property (readonly) _Bool isCancelled;
@property (retain) TCMessageContext *messageContext;
@property (retain) TCProgressContext *progressContext;

- (void)dealloc;
- (void)waitUntilComplete;
- (id)initWithCancelDelegate:(id)arg1;
- (void)addASyncBlock:(CDUnknownBlockType)arg1;

@end
