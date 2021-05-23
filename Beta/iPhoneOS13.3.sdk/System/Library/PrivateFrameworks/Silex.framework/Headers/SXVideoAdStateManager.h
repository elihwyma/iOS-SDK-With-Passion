/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NFStateMachine, NSString;

@interface SXVideoAdStateManager : NSObject

{
    CDUnknownBlockType onPlayBlock;
    CDUnknownBlockType onPauseBlock;
    CDUnknownBlockType onResumeBlock;
    CDUnknownBlockType onFinishBlock;
    CDUnknownBlockType onFailBlock;
    CDUnknownBlockType onLearnMoreBlock;
    CDUnknownBlockType onSkipBlock;
    NFStateMachine *_stateMachine;
}

@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onPlay:) CDUnknownBlockType onPlayBlock;
@property (copy, nonatomic, setter=onPause:) CDUnknownBlockType onPauseBlock;
@property (copy, nonatomic, setter=onResume:) CDUnknownBlockType onResumeBlock;
@property (copy, nonatomic, setter=onFail:) CDUnknownBlockType onFailBlock;
@property (copy, nonatomic, setter=onFinish:) CDUnknownBlockType onFinishBlock;
@property (copy, nonatomic, setter=onLearnMore:) CDUnknownBlockType onLearnMoreBlock;
@property (copy, nonatomic, setter=onSkip:) CDUnknownBlockType onSkipBlock;

- (id)init;
- (void)failWithError:(id)arg1;
- (void)pause;
- (void)resume;
- (void)finish;
- (void)play;
- (void)learnMore;
- (void)skip;

@end
