/*
 Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
 */

#import <Foundation/NSObject.h>

@class IAMWebMessagePresentationCoordinator, ICInAppMessageManager, NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString;

@protocol IAMApplicationContextProvider, IAMMessageMetricsDelegate, IAMMessageReceiver, OS_dispatch_queue;

@interface IAMMessageCoordinator : NSObject

{
    ICInAppMessageManager *_iTunesCloudIAMManager;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_registeredMessageEntries;
    NSMutableDictionary *_registeredMetadataEntries;
    id <IAMApplicationContextProvider> _applicationContext;
    NSDictionary *_messageEntriesByMonitoredKeys;
    IAMWebMessagePresentationCoordinator *_webMessagePresentationCoordinator;
    NSMutableOrderedSet *_visibleViewControllers;
    id <IAMMessageReceiver> _targetFallback;
    _Bool _registeredAsObserverForICNotifications;
    _Bool _modalIsPresented;
    id <IAMMessageMetricsDelegate> _metricsDelegate;
}

@property (retain, nonatomic) NSArray *registeredMessageEntries;
@property (retain, nonatomic) NSDictionary *messageEntriesByMonitoredKeys;
@property (weak, nonatomic) id <IAMMessageMetricsDelegate> metricsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void)addVisibleViewController:(id)arg1;
+ (void)removeVisibleViewController:(id)arg1;
+ (_Bool)isModalPresentedByAnyCoordinator;

- (id)init;
- (void)dealloc;
- (void)start;
- (id)viewControllerForModalPresentationUsingCoordinator:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidFail:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidLoad:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidFinishPresentation:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidReportEvent:(id)arg1 event:(id)arg2;
- (void)webMessagePresentationCoordinatorWebMessageDidRequestAction:(id)arg1 actionConfiguration:(id)arg2;
- (id)registeredMetadataEntryForKey:(id)arg1;
- (void)setRegisteredMetadataEntry:(id)arg1 forKey:(id)arg2;
- (void)_updateMessagesByMonitoredKeys;
- (void)fetchMessagesFromiTunesCloud;
- (void)startWithApplicationContext:(id)arg1 andTargetFallback:(id)arg2;
- (void)addVisibleViewController:(id)arg1;
- (void)removeVisibleViewController:(id)arg1;
- (void)_reportMetricsEvent:(id)arg1;
- (void)reportDisplayForMessageEntry:(id)arg1;
- (void)_updateLastDisplayTime;
- (id)registeredMetadataEntries;
- (void)displayMessageFromMessageEntry:(id)arg1;
- (id)messageEntriesByRealKeyCorrespondingToEvent:(id)arg1;
- (id)allMessageEntriesWithoutDuplicates:(id)arg1;
- (id)messagesToReevaluate:(id)arg1 forEvent:(id)arg2;
- (void)updateMetadataOfMessageEntriesByRealKey:(id)arg1 forReceivedEvent:(id)arg2;
- (void)_calculateMessagesProximityAndDownloadResourcesIfNeeded:(id)arg1;
- (void)_reevaluateMessages:(id)arg1;
- (void)_incrementNumberOfDisplayForMessageEntry:(id)arg1;
- (void)_reportDisplayToITunesCloudManagerWithEventIdentifier:(id)arg1;
- (void)receiveEvent:(id)arg1;
- (void)startWithApplicationContext:(id)arg1;
- (void)setRegisteredMetadataEntries:(id)arg1;

@end
