/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKAirplaneModeMonitor : _DKMonitor

{
    _Bool _airplaneModeStatus;
    struct __SCPreferences *_radioPrefs;
}

@property (nonatomic) _Bool airplaneModeStatus;
@property struct __SCPreferences *radioPrefs;

+ (id)eventStream;
+ (id)_eventWithState:(_Bool)arg1;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)deactivate;
- (void)updateAirplaneModeStatus;

@end
