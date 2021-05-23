/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSDate, NSObject, NSString;

@protocol OS_dispatch_source;

@interface _DKWakeRequestMonitor : _DKMonitor

{
    _Bool _updateTimerResumed;
    int _wakeRequestToken;
    NSDate *_nextUserVisibleWakeRequestDate;
    NSString *_nextUserVisibleWakeRequestor;
    NSObject<OS_dispatch_source> *_updateTimer;
}

@property (retain, nonatomic) NSDate *nextUserVisibleWakeRequestDate;
@property (retain, nonatomic) NSString *nextUserVisibleWakeRequestor;
@property (nonatomic) int wakeRequestToken;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *updateTimer;

+ (id)entitlements;
+ (id)eventStream;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (id)loadState;
- (void)saveState;
- (void)obtainNextUserVisibleWakeRequest;

@end
