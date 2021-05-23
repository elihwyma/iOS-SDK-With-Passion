/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKNavigationMonitor : _DKMonitor

{
    _Bool _enabled;
    _Bool _navigating;
    int _startedToken;
    int _stoppedToken;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool navigating;
@property (nonatomic) int startedToken;
@property (nonatomic) int stoppedToken;

+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsNavigating:(_Bool)arg1;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (id)loadState;
- (void)saveState;
- (void)setNavigationStatus:(_Bool)arg1;

@end
