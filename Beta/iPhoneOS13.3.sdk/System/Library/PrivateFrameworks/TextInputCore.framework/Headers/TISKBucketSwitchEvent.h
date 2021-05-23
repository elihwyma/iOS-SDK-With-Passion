/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TISKEvent.h>

@class TISKSessionSamples;

@interface TISKBucketSwitchEvent : TISKEvent

{
    TISKSessionSamples *_sessionSamples;
}

@property (retain, nonatomic) TISKSessionSamples *sessionSamples;

- (id)description;
- (id)init:(id)arg1 order:(long long)arg2;

@end
