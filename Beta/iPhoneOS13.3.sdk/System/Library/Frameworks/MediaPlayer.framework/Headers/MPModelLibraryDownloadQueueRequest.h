/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelRequest.h>

@interface MPModelLibraryDownloadQueueRequest : MPModelRequest

+ (_Bool)requiresNetwork;

- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
