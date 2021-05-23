/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface FPThreadedCopier : NSObject

{
    long long _numberOfInflightCopies;
    NSObject<OS_dispatch_semaphore> *_bufferLimitSemaphore;
    NSMutableArray *_buffers;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

@property (nonatomic) long long numberOfInflightCopies;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *bufferLimitSemaphore;
@property (retain, nonatomic) NSMutableArray *buffers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;

+ (id)sharedCopier;

- (id)init;
- (void)endOperation;
- (int)beginReading:(id)arg1 error:(id *)arg2;
- (int)beginWriting:(id)arg1 overwriteDestination:(_Bool)arg2 error:(id *)arg3;
- (void)beginOperation;
- (_Bool)finishReading:(int)arg1 writing:(int)arg2 error:(id *)arg3;
- (_Bool)copy:(id)arg1 to:(id)arg2 overwriteDestination:(_Bool)arg3 progress:(id)arg4 error:(id *)arg5;

@end
