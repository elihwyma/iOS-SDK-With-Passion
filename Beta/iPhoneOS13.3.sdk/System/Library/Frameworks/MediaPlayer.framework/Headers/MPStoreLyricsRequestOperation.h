/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPStoreLyricsRequest, NSOperationQueue;

@interface MPStoreLyricsRequestOperation : MPAsyncOperation

{
    NSOperationQueue *_operationQueue;
    MPStoreLyricsRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) MPStoreLyricsRequest *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

+ (_Bool)supportsLyricsForURLBagDictionary:(id)arg1;
+ (id)_lyricsURLForURLBagDictionary:(id)arg1;

- (void)execute;
- (void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2 allowingAuthentication:(_Bool)arg3;

@end
