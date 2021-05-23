/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaFeeder.h>

@class NSArray;

@interface OKMediaFeederURLs : OKMediaFeeder

{
    NSArray *_mediaURLs;
}

+ (_Bool)isRemote;
+ (id)supportedSettings;
+ (id)mediaFeederWithMediaObjects:(id)arg1;
+ (id)mediaFeederWithMediaURLs:(id)arg1;
+ (_Bool)supportLiveUpdates;

- (id)init;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)initWithMediaObjects:(id)arg1;
- (id)initWithMediaURLs:(id)arg1;
- (id)feederSettings;
- (_Bool)canBePersisted;
- (id)reloadMediaObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfMediaObjects;
- (id)mediaObjectsAtIndexes:(id)arg1;
- (id)mediaObjectURLsAtIndexes:(id)arg1;
- (id)indexesForMediaObjects:(id)arg1;

@end
