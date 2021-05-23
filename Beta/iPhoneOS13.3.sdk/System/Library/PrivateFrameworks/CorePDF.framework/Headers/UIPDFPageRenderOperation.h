/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSOperation.h>

@class UIPDFPageRenderJob;

__attribute__((visibility("hidden")))
@interface UIPDFPageRenderOperation : NSOperation

{
    UIPDFPageRenderJob *_job;
    _Bool executing;
    _Bool finished;
}

@property (retain) UIPDFPageRenderJob *job;

- (void)dealloc;
- (void)start;
- (void)main;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)completeOperation;
- (id)initWithJob:(id)arg1;

@end
