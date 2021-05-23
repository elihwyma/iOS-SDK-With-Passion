/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class BKSApplicationStateMonitor, FBSDisplayLayoutMonitor, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface _DKApplicationMonitor : _DKMonitor

{
    FBSDisplayLayoutMonitor *_monitor;
    NSMutableArray *_previouslyForegroundServices;
    BKSApplicationStateMonitor *_bksMonitor;
    NSMutableDictionary *_activeExtensions;
    NSSet *_servicesOfInterestForWatchCommunication;
    NSString *_lastIdentifierSet;
}

@property (retain, nonatomic) FBSDisplayLayoutMonitor *monitor;
@property (retain, nonatomic) NSMutableArray *previouslyForegroundServices;
@property (retain, nonatomic) BKSApplicationStateMonitor *bksMonitor;
@property (retain) NSMutableDictionary *activeExtensions;
@property (retain, nonatomic) NSSet *servicesOfInterestForWatchCommunication;
@property (retain, nonatomic) NSString *lastIdentifierSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)entitlements;
+ (id)eventStream;
+ (CDUnknownBlockType)_eventFilterBlock;
+ (id)_defaultEvent;
+ (void)setFocalApplication:(id)arg1 launchReason:(id)arg2;
+ (id)_eventWithBundleIdentifier:(id)arg1 launchReason:(id)arg2;
+ (void)addServicesForeground:(id)arg1 andRemoveServices:(id)arg2;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)obtainCurrentValue;
- (void)platformSpecificStart;
- (void)platformSpecificStop;
- (id)currentActiveComplications;
- (void)setCurrentActiveComplications;
- (void)registerForActiveComplicationChangeNotifications;
- (_Bool)ignoreAppExtension:(id)arg1;

@end
