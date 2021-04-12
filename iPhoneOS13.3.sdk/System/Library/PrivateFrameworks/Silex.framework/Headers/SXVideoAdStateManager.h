//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoAdStateProviding-Protocol.h>
#import <Silex/SXVideoAdStateReporting-Protocol.h>

@class NFStateMachine;

@interface SXVideoAdStateManager : NSObject <SXVideoAdStateProviding, SXVideoAdStateReporting>
{
    id /* CDUnknownBlockType */ onPlayBlock;
    id /* CDUnknownBlockType */ onPauseBlock;
    id /* CDUnknownBlockType */ onResumeBlock;
    id /* CDUnknownBlockType */ onFinishBlock;
    id /* CDUnknownBlockType */ onFailBlock;
    id /* CDUnknownBlockType */ onLearnMoreBlock;
    id /* CDUnknownBlockType */ onSkipBlock;
    NFStateMachine *_stateMachine;
}

@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic, setter=onSkip:) id /* CDUnknownBlockType */ onSkipBlock; // @synthesize onSkipBlock;
@property(copy, nonatomic, setter=onLearnMore:) id /* CDUnknownBlockType */ onLearnMoreBlock; // @synthesize onLearnMoreBlock;
@property(copy, nonatomic, setter=onFail:) id /* CDUnknownBlockType */ onFailBlock; // @synthesize onFailBlock;
@property(copy, nonatomic, setter=onFinish:) id /* CDUnknownBlockType */ onFinishBlock; // @synthesize onFinishBlock;
@property(copy, nonatomic, setter=onResume:) id /* CDUnknownBlockType */ onResumeBlock; // @synthesize onResumeBlock;
@property(copy, nonatomic, setter=onPause:) id /* CDUnknownBlockType */ onPauseBlock; // @synthesize onPauseBlock;
@property(copy, nonatomic, setter=onPlay:) id /* CDUnknownBlockType */ onPlayBlock; // @synthesize onPlayBlock;
// - (void).cxx_destruct;
- (void)skip;
- (void)learnMore;
- (void)failWithError:(id)arg1;
- (void)finish;
- (void)resume;
- (void)pause;
- (void)play;
- (id)init;

@end

