/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPFetcherResponse.h>

@class LPAudio;

__attribute__((visibility("hidden")))
@interface LPFetcherAudioResponse : LPFetcherResponse

{
    LPAudio *_audio;
}

@property (retain, nonatomic, readonly) LPAudio *audio;

+ (id)audioPropertiesForFetcher:(id)arg1;

- (id)initWithAudio:(id)arg1 fetcher:(id)arg2;

@end
