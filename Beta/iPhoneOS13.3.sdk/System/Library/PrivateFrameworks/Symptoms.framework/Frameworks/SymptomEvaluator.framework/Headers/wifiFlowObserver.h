/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class ManagedEventHandler, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface wifiFlowObserver : NSObject

{
    struct wifiPropertyCounts _foregroundCounts;
    struct wifiPropertyCounts _backgroundCounts;
    unsigned int _dampeningMsecs;
    NSDate *_lastReportTimestamp;
    _Bool _dampening;
    unsigned int _seqno;
    ManagedEventHandler *_managedEventHandler;
    _Bool _enabled;
    _Bool _foreground;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool foreground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)noteForegroundState:(_Bool)arg1 forApp:(id)arg2 hasForegroundApps:(_Bool)arg3;
- (_Bool)addClassification:(id)arg1 context:(struct wifiPropertyCounts *)arg2;
- (_Bool)removeClassification:(id)arg1 context:(struct wifiPropertyCounts *)arg2;
- (void)_noteNewUsage;
- (unsigned int)noteFlow:(id)arg1 snapshot:(id)arg2 present:(_Bool)arg3 trackedBy:(id)arg4;
- (void)configurePolicies:(id)arg1;
- (id)infoDir;

@end
