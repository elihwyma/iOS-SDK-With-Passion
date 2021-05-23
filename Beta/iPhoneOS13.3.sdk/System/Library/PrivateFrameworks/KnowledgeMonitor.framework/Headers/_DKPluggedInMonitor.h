/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKPluggedInMonitor : _DKMonitor

{
    _Bool _enabled;
    int _pluggedInToken;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) int pluggedInToken;

+ (id)entitlements;
+ (id)eventStream;
+ (_Bool)shouldMergeUnchangedEvents;
+ (void)setIsPluggedIn:(_Bool)arg1;
+ (id)_eventWithState:(_Bool)arg1 adapterType:(long long)arg2;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (long long)currentAdapterType;
- (void)setCurrentState;

@end
