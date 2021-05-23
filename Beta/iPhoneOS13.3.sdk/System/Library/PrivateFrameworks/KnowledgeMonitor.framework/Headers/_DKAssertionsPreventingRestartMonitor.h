/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor

{
    _Bool _lastPreventingRestartAssertionsStatus;
    int _userspaceAssertionsToken;
    int _preventIdleSleepAssertionsToken;
    int _systemAssertionsToken;
    int _restartPreventerAssertionsToken;
}

@property (nonatomic) int userspaceAssertionsToken;
@property (nonatomic) int preventIdleSleepAssertionsToken;
@property (nonatomic) int systemAssertionsToken;
@property (nonatomic) int restartPreventerAssertionsToken;
@property (nonatomic) _Bool lastPreventingRestartAssertionsStatus;

+ (id)entitlements;
+ (id)eventStream;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (id)loadState;
- (void)saveState;
- (_Bool)areAssertionsPreventingRestart;

@end
