/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVPlayerLooperInternal, NSArray, NSError;

@interface AVPlayerLooper : NSObject

{
    AVPlayerLooperInternal *_looper;
}

@property (readonly) long long status;
@property (readonly) NSError *error;
@property (readonly) long long loopCount;
@property (nonatomic, readonly) NSArray *loopingPlayerItems;

+ (void)initialize;
+ (id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2;
+ (id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(CDStruct_e83c9415)arg3;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (_Bool)_setupLoopingReturningError:(id *)arg1;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (void)_turnOffLooping;
- (int)_calculateNumberOfCopiesNeeded;
- (void)_configureLoopingItem:(id)arg1;
- (_Bool)_isWaitingForLastCopyToFinishSet;
- (void)_cleanupAfterPlayingLastLoopingCopy;
- (void)disableLooping;

@end
