/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPResponse.h>

@class MPModelResponse;

@interface MPModelShimResponse : MPResponse

{
    MPModelResponse *_modelResponse;
}

@property (retain, nonatomic) MPModelResponse *modelResponse;

+ (id)builderProtocol;

- (id)initWithRequest:(id)arg1 middleware:(id)arg2;

@end
