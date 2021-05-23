/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@protocol TVPMediaItem;

@interface TVPPlaylist : NSObject

{
    NSMutableArray *_trackList;
    NSMutableArray *_shuffledItems;
    unsigned long long _activeListIndex;
    NSArray *_activeList;
    NSArray *_upcomingItems;
    _Bool _windowed;
    _Bool _shuffleEnabled;
    _Bool _skipExplicit;
    NSObject<TVPMediaItem> *_currentMediaItem;
    NSObject<TVPMediaItem> *_nextMediaItem;
    NSObject<TVPMediaItem> *_previousMediaItem;
    long long _endAction;
    unsigned long long _currentIndex;
    unsigned long long _count;
    unsigned long long _numConsecutivePlaybackFailures;
    NSString *_name;
    long long _repeatMode;
    NSDictionary *_changeContext;
    unsigned long long _upcomingItemsLimit;
    unsigned long long _upNextIndex;
}

@property (retain, nonatomic) NSObject<TVPMediaItem> *currentMediaItem;
@property (retain, nonatomic) NSObject<TVPMediaItem> *nextMediaItem;
@property (retain, nonatomic) NSObject<TVPMediaItem> *previousMediaItem;
@property (retain, nonatomic) NSDictionary *changeContext;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) unsigned long long count;
@property (nonatomic, readonly) unsigned long long upNextIndex;
@property (nonatomic, readonly) NSArray *trackList;
@property (nonatomic, readonly) NSArray *activeList;
@property (nonatomic, readonly) unsigned long long activeListIndex;
@property (nonatomic) long long endAction;
@property (nonatomic) _Bool windowed;
@property (nonatomic) unsigned long long numConsecutivePlaybackFailures;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool shuffleEnabled;
@property (nonatomic, readonly) _Bool supportsShuffle;
@property (nonatomic) long long repeatMode;
@property (nonatomic, readonly) _Bool supportsRepeat;
@property (nonatomic) _Bool skipExplicit;
@property (nonatomic, readonly) NSArray *upcomingItems;
@property (nonatomic) unsigned long long upcomingItemsLimit;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (id)init;
- (void)addItem:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)addItems:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)insertItems:(id)arg1 atIndexes:(id)arg2;
- (id)initWithMediaItems:(id)arg1 index:(long long)arg2 isCollection:(_Bool)arg3;
- (void)_updateCurrent:(_Bool)arg1 andNextItems:(_Bool)arg2 withContext:(id)arg3;
- (void)changeMedia:(long long)arg1 withContext:(id)arg2;
- (unsigned long long)_nextActiveListIndex;
- (_Bool)moreItemsAvailable:(long long)arg1;
- (unsigned long long)_previousActiveListIndex;
- (_Bool)_isMediaItemExplicit:(id)arg1;
- (void)_shuffle:(_Bool)arg1;
- (_Bool)isEqualToPlaylist:(id)arg1;
- (void)changeMedia:(long long)arg1;
- (_Bool)changeToActiveListIndex:(unsigned long long)arg1 withContext:(id)arg2;
- (void)setShuffleEnabled:(_Bool)arg1 preserveCurrentItem:(_Bool)arg2;
- (void)addItemsToUpNext:(id)arg1;

@end
