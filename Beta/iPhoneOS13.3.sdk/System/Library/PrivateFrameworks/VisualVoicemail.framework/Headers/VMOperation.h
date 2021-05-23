/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSOperation.h>

@class NSObject, NSProgress;

@protocol OS_dispatch_queue;

@interface VMOperation : NSOperation

{
    NSObject<OS_dispatch_queue> *_queue;
    NSProgress *_progress;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSProgress *progress;

- (id)init;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)configureProgressWithUnitCount:(long long)arg1;

@end
