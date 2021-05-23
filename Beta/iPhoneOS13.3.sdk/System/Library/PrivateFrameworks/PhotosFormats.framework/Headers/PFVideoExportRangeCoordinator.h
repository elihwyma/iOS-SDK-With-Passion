/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface PFVideoExportRangeCoordinator : NSObject

{
    _Bool _cancelled;
    NSMutableArray *_waitingCallers;
    NSObject<OS_dispatch_queue> *_stateQueue;
    struct _NSRange _availableRange;
}

@property struct _NSRange availableRange;
@property (retain) NSMutableArray *waitingCallers;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;
@property _Bool cancelled;

- (id)init;
- (void)cancel;
- (_Bool)waitForAvailabilityOfRange:(struct _NSRange)arg1 timeout:(unsigned long long)arg2 error:(id *)arg3;
- (void)updateAvailableRange:(struct _NSRange)arg1;

@end
