/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, PHImportTimerCollection;

@protocol OS_dispatch_semaphore;

@interface PHImportBatch : NSObject

{
    NSDate *_start;
    NSMutableArray *_records;
    PHImportTimerCollection *_timers;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (nonatomic, readonly) NSMutableArray *records;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) PHImportTimerCollection *timers;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;

- (id)init;

@end
