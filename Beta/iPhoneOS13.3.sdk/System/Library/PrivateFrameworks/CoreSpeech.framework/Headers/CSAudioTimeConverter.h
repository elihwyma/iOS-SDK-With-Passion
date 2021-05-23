/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CSAudioTimeConverter : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _anchorSampleCount;
    unsigned long long _anchorHostTime;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long anchorSampleCount;
@property (nonatomic) unsigned long long anchorHostTime;

+ (id)sharedInstance;

- (id)init;
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;
- (void)processSampleCount:(unsigned long long)arg1 hostTime:(unsigned long long)arg2;
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1;

@end
