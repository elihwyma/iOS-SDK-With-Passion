/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@protocol SXVideoAdStateProviding <Swift>

@property (copy, nonatomic, setter=onPlay:) CDUnknownBlockType onPlayBlock;
@property (copy, nonatomic, setter=onPause:) CDUnknownBlockType onPauseBlock;
@property (copy, nonatomic, setter=onResume:) CDUnknownBlockType onResumeBlock;
@property (copy, nonatomic, setter=onFail:) CDUnknownBlockType onFailBlock;
@property (copy, nonatomic, setter=onFinish:) CDUnknownBlockType onFinishBlock;
@property (copy, nonatomic, setter=onLearnMore:) CDUnknownBlockType onLearnMoreBlock;
@property (copy, nonatomic, setter=onSkip:) CDUnknownBlockType onSkipBlock;

@end
