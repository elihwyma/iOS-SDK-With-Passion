/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCPlayerCommandRequest;

@interface MPCMediaRemoteCommandOperation : MPAsyncOperation

{
    MPCPlayerCommandRequest *_request;
    unsigned long long _options;
}

@property (nonatomic, readonly) MPCPlayerCommandRequest *request;
@property (nonatomic, readonly) unsigned long long options;

- (void)execute;
- (id)initWithCommandRequest:(id)arg1 options:(unsigned long long)arg2;

@end
