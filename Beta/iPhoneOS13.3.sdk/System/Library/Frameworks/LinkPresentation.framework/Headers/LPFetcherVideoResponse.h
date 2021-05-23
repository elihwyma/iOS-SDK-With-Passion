/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPFetcherResponse.h>

@class LPVideo;

__attribute__((visibility("hidden")))
@interface LPFetcherVideoResponse : LPFetcherResponse

{
    LPVideo *_video;
}

@property (retain, nonatomic, readonly) LPVideo *video;

+ (id)videoPropertiesForFetcher:(id)arg1;

- (id)initWithVideo:(id)arg1 fetcher:(id)arg2;

@end
