/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <NanoMusicSync/NMSMediaItemDownloadInfo.h>

@interface NMSPartialMediaItemDownloadInfo : NMSMediaItemDownloadInfo

{
    unsigned long long _offset;
    unsigned long long _minimumSize;
}

@property (nonatomic, readonly) unsigned long long minimumSize;
@property (nonatomic, readonly) unsigned long long offset;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 size:(unsigned long long)arg2 manuallyAdded:(_Bool)arg3 minimumSize:(unsigned long long)arg4 offset:(unsigned long long)arg5;

@end
