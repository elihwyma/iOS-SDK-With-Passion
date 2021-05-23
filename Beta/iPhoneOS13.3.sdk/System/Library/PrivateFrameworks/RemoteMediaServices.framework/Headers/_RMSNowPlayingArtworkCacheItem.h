/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _RMSNowPlayingArtworkCacheItem : NSObject

{
    _Bool _keepAlive;
    NSString *_artworkIdentifier;
    NSData *_artworkData;
}

@property (retain, nonatomic) NSString *artworkIdentifier;
@property (retain, nonatomic) NSData *artworkData;

- (_Bool)beginContentAccess;
- (void)endContentAccess;
- (void)discardContentIfPossible;
- (_Bool)isContentDiscarded;

@end
