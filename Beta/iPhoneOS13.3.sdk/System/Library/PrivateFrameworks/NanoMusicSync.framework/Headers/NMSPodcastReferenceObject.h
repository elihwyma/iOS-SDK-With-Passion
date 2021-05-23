/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NMSPodcastReferenceObject : NSObject

{
    NSString *_feedURL;
    unsigned long long _episodeLimit;
    unsigned long long _downloadOrder;
}

@property (nonatomic, readonly) NSString *feedURL;
@property (nonatomic) unsigned long long episodeLimit;
@property (nonatomic, readonly) unsigned long long downloadOrder;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)predicatesForFeedURL;
- (id)initWithFeedURL:(id)arg1 episodeLimit:(unsigned long long)arg2 downloadOrder:(unsigned long long)arg3;
- (id)initWithFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2;

@end
