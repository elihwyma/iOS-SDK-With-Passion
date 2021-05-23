/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDTimeNode.h>

@class PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDMediaNode : PDTimeNode

{
    PDAnimationTarget *mTarget;
    _Bool mIsMuted;
    _Bool mIsShowWhenStopped;
    long long mNumberOfSlides;
    long long mVolume;
}

- (id)init;
- (void)setTarget:(id)arg1;
- (id)target;
- (long long)volume;
- (void)setVolume:(long long)arg1;
- (void)setIsMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (void)setIsShowWhenStopped:(_Bool)arg1;
- (void)setNumberOfSlides:(long long)arg1;
- (_Bool)isShowWhenStopped;
- (long long)numberOfSlides;

@end
