/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface NMSMediaSyncInfoUpdaterOperation : MPAsyncOperation

{
    NSDictionary *_syncInfo;
}

@property (nonatomic, readonly) NSDictionary *syncInfo;

+ (id)sharedLibraryRequestQueue;

- (void)execute;

@end
