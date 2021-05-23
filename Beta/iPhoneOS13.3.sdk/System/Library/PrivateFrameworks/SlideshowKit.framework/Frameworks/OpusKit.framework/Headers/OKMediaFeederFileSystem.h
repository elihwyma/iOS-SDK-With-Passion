/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaFeeder.h>

@class NSArray, NSURL;

@interface OKMediaFeederFileSystem : OKMediaFeeder

{
    NSURL *_directoryURL;
    NSArray *_mediaURLs;
}

@property (retain) NSArray *mediaURLs;

+ (_Bool)isRemote;
+ (id)supportedSettings;
+ (_Bool)supportLiveUpdates;
+ (id)mediaFeederWithDirectoryURL:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)initWithDirectoryURL:(id)arg1;
- (id)feederSettings;
- (_Bool)canBePersisted;
- (id)reloadMediaObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfMediaObjects;
- (id)mediaObjectsAtIndexes:(id)arg1;
- (id)mediaObjectURLsAtIndexes:(id)arg1;
- (id)indexesForMediaObjects:(id)arg1;

@end
