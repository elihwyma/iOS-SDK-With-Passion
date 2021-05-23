/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol IMFileCopierDelegate, OS_dispatch_queue;

@interface IMFileCopier : NSObject

{
    _Bool _shouldCancel;
    _Bool _didErrorOccur;
    _Bool _inProgress;
    id <IMFileCopierDelegate> _delegate;
    NSURL *_inputURL;
    NSURL *_outputURL;
    id _identifier;
    unsigned long long _operation;
    void *_BOMCopier;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _callback;
}

@property void *_BOMCopier;
@property _Bool inProgress;
@property unsigned long long operation;
@property (copy) CDUnknownBlockType _callback;
@property (retain) NSObject<OS_dispatch_queue> *_queue;
@property id <IMFileCopierDelegate> delegate;
@property (retain, readonly) NSURL *inputURL;
@property (retain, readonly) NSURL *outputURL;
@property (retain, readonly) id identifier;
@property (nonatomic, readonly) _Bool wasCancelled;
@property (nonatomic, readonly) _Bool didErrorOccur;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)cleanup;
- (void)_fillOutputURLFromInputURL;
- (id)_temporaryCopierPath;
- (void)_worker_doCopy;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 delegate:(id)arg5;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5 queue:(id)arg6;

@end
