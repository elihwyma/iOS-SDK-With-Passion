/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
 */

#import <NSObject.h>

@interface TTSTimerObject : NSObject

{
    double _endTime;
    long long _intId;
    double _remainingTime;
    CDUnknownBlockType _block;
}

@property (nonatomic) double endTime;
@property (nonatomic) long long intId;
@property (nonatomic) double remainingTime;
@property (copy, nonatomic) CDUnknownBlockType block;

- (void)dealloc;
- (id)description;

@end
