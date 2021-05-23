/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@interface MCDNowPlayingObserver : NSObject

{
    NSHashTable *_observers;
    unsigned int _playbackState;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned int playbackState;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_notifyObservers;
- (unsigned int)queryPlaybackState;
- (void)playbackStateChanged:(id)arg1;

@end
