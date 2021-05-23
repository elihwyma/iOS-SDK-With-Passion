/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

@class NSSet, NSURL;

@interface TVPURLMediaItem

{
    NSURL *_url;
    NSSet *_traits;
}

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSSet *traits;

- (id)init;
- (id)mediaItemURL;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (id)initWithURL:(id)arg1 traits:(id)arg2;
- (_Bool)hasTrait:(id)arg1;

@end
