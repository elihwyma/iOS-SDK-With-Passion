/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@interface WFPodcastUtilities : NSObject

+ (void *)createPlayerPath;
+ (void)getPodcastsFromLibraryFetchingDetailsFromServer:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)generatePlaybackQueueURL:(id)arg1 withQueryDictionary:(id)arg2;
+ (struct _MRSystemAppPlaybackQueue *)createPlaybackQueueWithURLs:(id)arg1 setImmediatePlayback:(_Bool)arg2;

@end
