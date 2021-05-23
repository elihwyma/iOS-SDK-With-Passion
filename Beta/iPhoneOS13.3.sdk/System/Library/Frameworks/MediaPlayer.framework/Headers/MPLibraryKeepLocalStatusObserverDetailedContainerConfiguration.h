/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPLibraryKeepLocalStatusObserverConfiguration.h>

@class NSArray;

@interface MPLibraryKeepLocalStatusObserverDetailedContainerConfiguration : MPLibraryKeepLocalStatusObserverConfiguration

{
    NSArray *_pendingItemIdentifiers;
    long long _downloadEnabledItemCount;
    long long _nonPurgeableItemCount;
    long long _redownloadableItemCount;
}

@property (copy, nonatomic) NSArray *pendingItemIdentifiers;
@property (nonatomic) long long downloadEnabledItemCount;
@property (nonatomic) long long nonPurgeableItemCount;
@property (nonatomic) long long redownloadableItemCount;

@end
