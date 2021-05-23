/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface VUISportsScoreboardManager : NSObject

{
    _Bool _updateInProgress;
    NSMutableDictionary *_sportsEventsById;
    NSTimer *_scoreboardUpdateTimer;
    long long _scoreboardUpdateInterval;
}

@property (retain, nonatomic) NSMutableDictionary *sportsEventsById;
@property (retain, nonatomic) NSTimer *scoreboardUpdateTimer;
@property (nonatomic) long long scoreboardUpdateInterval;
@property (nonatomic) _Bool updateInProgress;

+ (id)sharedInstance;
+ (void)registerDelegate:(id)arg1 canonicalId:(id)arg2;
+ (void)unregisterDelegate:(id)arg1 canonicalId:(id)arg2;

- (id)init;
- (void)_invalidateTimer;
- (void)_updateTimer;
- (void)_resetTimer;
- (id)_prepareJSContextDictionaryArgument;
- (void)_updateScores:(id)arg1;
- (void)_getScoreboardUpdates;

@end
