/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface AVResult : NSObject

{
    struct OpaqueFigSimpleMutex *_ivarAccessLock;
    long long _status;
    NSError *_error;
}

@property (readonly, getter=isFailed) _Bool failed;

- (id)init;
- (void)dealloc;
- (void)markAsFailedWithError:(id)arg1;
- (void)markAsCompleted;
- (void)getStatus:(long long *)arg1 error:(id *)arg2;

@end
