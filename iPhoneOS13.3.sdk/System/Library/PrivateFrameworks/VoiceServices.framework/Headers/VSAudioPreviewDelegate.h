//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceServices/AVAudioPlayerDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface VSAudioPreviewDelegate : NSObject <AVAudioPlayerDelegate>
{
    id /* CDUnknownBlockType */ _completion;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
// - (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;

@end

