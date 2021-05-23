/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKInCarMonitor : _DKMonitor

{
    _Bool _enabled;
    _Bool _connected;
    int _connectedToken;
    int _disconnectedToken;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool connected;
@property (nonatomic) int connectedToken;
@property (nonatomic) int disconnectedToken;

+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsConnected:(_Bool)arg1;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (id)loadState;
- (void)saveState;
- (void)setConnectedStatus:(_Bool)arg1;

@end
