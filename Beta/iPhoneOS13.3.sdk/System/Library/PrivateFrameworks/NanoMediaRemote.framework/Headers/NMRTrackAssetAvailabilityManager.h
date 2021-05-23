/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSCache;

@interface NMRTrackAssetAvailabilityManager : NSObject

{
    NSCache *_assetAvailabilityCache;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (long long)availabilityForTrackPID:(id)arg1;

@end
