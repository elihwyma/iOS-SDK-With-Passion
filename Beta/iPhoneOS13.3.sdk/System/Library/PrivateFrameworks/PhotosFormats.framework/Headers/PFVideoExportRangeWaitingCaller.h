/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface PFVideoExportRangeWaitingCaller : NSObject

{
    _Bool _requestedRangeIsAvailable;
    _Bool _cancelled;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    struct _NSRange _requestedRange;
}

@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property struct _NSRange requestedRange;
@property _Bool requestedRangeIsAvailable;
@property _Bool cancelled;

+ (id)waitingCallerWithRequestedRange:(struct _NSRange)arg1;

- (id)init;
- (void)resume;
- (void)waitWithTimeout:(unsigned long long)arg1;
- (_Bool)canResumeForRange:(struct _NSRange)arg1;

@end
