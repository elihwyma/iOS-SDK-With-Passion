/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelPlaylistEntriesShareEligibilityRequest;

@interface MPModelPlaylistEntriesShareEligibilityRequestOperation : MPAsyncOperation

{
    MPModelPlaylistEntriesShareEligibilityRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) MPModelPlaylistEntriesShareEligibilityRequest *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;

@end
