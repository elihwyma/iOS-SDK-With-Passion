/*
 Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import <Foundation/NSObject.h>

@class AXElement, AXElementGroup, AXElementGroupPruner, AXVisualElementGrouper, NSArray, NSMapTable, NSMutableDictionary;

@protocol AXElementFetcherDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AXElementFetcher : NSObject

{
    NSObject<OS_dispatch_queue> *_elementFetchQueue;
    NSObject<OS_dispatch_queue> *_elementAccessQueue;
    NSObject<OS_dispatch_queue> *_filterAccessQueue;
    struct __AXObserver *_axRuntimeNotificationObserver;
    unsigned long long _scheduledFetchEvent;
    NSObject<OS_dispatch_source> *_eventCoalesceTimer;
    AXElementGroupPruner *_elementGroupPruner;
    _Bool _enabled;
    _Bool _fetchingElements;
    _Bool _eventManagementEnabled;
    _Bool _shouldIncludeNonScannerElements;
    _Bool _groupingEnabled;
    _Bool _didSendFakeScreenChangeOnLastFetch;
    long long _elementGroupingHeuristics;
    id <AXElementFetcherDelegate> _delegate;
    NSMapTable *_fetchObservers;
    unsigned long long _activeFetchEvents;
    NSArray *_currentApps;
    NSArray *_elementCache;
    AXElementGroup *_rootGroupCache;
    AXElementGroup *_keyboardGroupCache;
    NSMutableDictionary *_postFetchFilters;
    AXVisualElementGrouper *_visualElementGrouper;
    NSArray *_customCurrentApps;
}

@property (weak, nonatomic) id <AXElementFetcherDelegate> delegate;
@property (retain, nonatomic) NSMapTable *fetchObservers;
@property (nonatomic) unsigned long long activeFetchEvents;
@property (nonatomic, getter=isFetchingElements) _Bool fetchingElements;
@property (retain, nonatomic) NSArray *currentApps;
@property (nonatomic, getter=isEventManagementEnabled) _Bool eventManagementEnabled;
@property (retain, nonatomic) NSArray *elementCache;
@property (retain, nonatomic) AXElementGroup *rootGroupCache;
@property (retain, nonatomic) AXElementGroup *keyboardGroupCache;
@property (retain, nonatomic) NSMutableDictionary *postFetchFilters;
@property (retain, nonatomic) AXVisualElementGrouper *visualElementGrouper;
@property (nonatomic, readonly) AXElementGroupPruner *elementGroupPruner;
@property (nonatomic) _Bool didSendFakeScreenChangeOnLastFetch;
@property (retain, nonatomic) NSArray *customCurrentApps;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) _Bool willFetchElements;
@property (nonatomic, readonly) NSArray *availableElements;
@property (nonatomic, readonly) AXElement *nativeFocusElement;
@property (nonatomic) _Bool shouldIncludeNonScannerElements;
@property (nonatomic, getter=isGroupingEnabled) _Bool groupingEnabled;
@property (nonatomic) long long elementGroupingHeuristics;
@property (nonatomic, readonly) AXElementGroup *rootGroup;
@property (nonatomic, readonly) AXElementGroup *keyboardGroup;
@property (nonatomic, readonly) AXElementGroup *firstKeyboardRow;
@property (nonatomic, readonly) AXElementGroup *lastKeyboardRow;

+ (id)systemWideElement;
+ (id)springBoardElement;

- (void)dealloc;
- (id)description;
- (void)clearCache;
- (void)refresh;
- (void)addFetchEvents:(unsigned long long)arg1;
- (void)enableEventManagement;
- (void)_tearDownEventCoalesceTimer;
- (void)disableEventManagement;
- (void)unregisterAllFetchObservers;
- (id)_debugStringForFetchEvents:(unsigned long long)arg1;
- (_Bool)_updateCurrentApps;
- (void)_fetchEventOccurred:(unsigned long long)arg1;
- (_Bool)_fetchEventCanBeManaged:(unsigned long long)arg1;
- (long long)_priorityForFetchEvent:(unsigned long long)arg1;
- (void)_scheduleFetchEvent:(unsigned long long)arg1;
- (void)_notifyObserversNativeFocusElementDidChange:(id)arg1;
- (void)_notifyObserversUpdateElementVisuals:(id)arg1;
- (void)_notifyObserversApplicationWasActivated:(id)arg1;
- (void)_notifyObserversScreenWillChange:(struct __CFData *)arg1;
- (void)_notifyObserversMediaDidBegin:(struct __CFData *)arg1;
- (void)_notifyObserversDidScheduleFetchEvent:(unsigned long long)arg1;
- (double)_delayForFetchEvent:(unsigned long long)arg1;
- (void)_notifyObserversWillFetchElementsForEvent:(unsigned long long)arg1;
- (_Bool)_fetchGroups:(_Bool)arg1;
- (_Bool)_fetchElements:(_Bool)arg1;
- (void)_notifyObserversDidFetchElementsForEvent:(unsigned long long)arg1 foundNewElements:(_Bool)arg2;
- (id)_axNotificationsForManagedEvents;
- (id)_fetchUnprocessedElements;
- (void)_sendFakeScreenChangeIfNecessaryForGroups:(id)arg1 orElements:(id)arg2 appsDidChange:(_Bool)arg3;
- (id)_filterElements:(id)arg1 withFilter:(CDUnknownBlockType)arg2;
- (_Bool)_shouldConsiderCacheAsInvalid;
- (id)_findElementsMatchingBlock:(CDUnknownBlockType)arg1 internalRequest:(_Bool)arg2;
- (id)findElementMatchingElement:(id)arg1;
- (id)closestElementToPoint:(struct CGPoint)arg1;
- (id)findGroupableMatchingGroupable:(id)arg1;
- (id)_siblingOfGroupable:(id)arg1 forDirection:(_Bool)arg2 didWrap:(_Bool *)arg3;
- (id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2;
- (id)_findGroupableMatchingBlock:(CDUnknownBlockType)arg1 inElementGroup:(id)arg2;
- (id)_groupWithItems:(id)arg1 groupTraits:(unsigned long long)arg2 scanningBehaviorTraits:(unsigned long long)arg3 label:(id)arg4 identifier:(id)arg5 currentPid:(int)arg6;
- (id)_groupWithDictionary:(id)arg1 currentPid:(int)arg2;
- (id)_filterGroup:(id)arg1 withFilter:(CDUnknownBlockType)arg2;
- (id)_fetchUnprocessedAppGroups;
- (id)_processAppGroup:(id)arg1 keyboardGroup:(id *)arg2;
- (id)initWithDelegate:(id)arg1 fetchEvents:(unsigned long long)arg2 enableEventManagement:(_Bool)arg3 enableGrouping:(_Bool)arg4 shouldIncludeNonScannerElements:(_Bool)arg5 beginEnabled:(_Bool)arg6;
- (void)_setCurrentApplications:(id)arg1;
- (void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2;
- (void)unregisterFetchObserver:(id)arg1;
- (void)removeFetchEvents:(unsigned long long)arg1;
- (void)fetchEventOccurred:(unsigned long long)arg1;
- (void)_handleNativeFocusItemDidChange:(struct __CFData *)arg1;
- (void)_handleUpdateElementVisuals:(struct __CFData *)arg1;
- (void)_handleApplicationWasActivated:(id)arg1;
- (void)_handleScreenWillChange:(struct __CFData *)arg1;
- (void)_handleMediaDidBegin:(struct __CFData *)arg1;
- (void)addPostFetchFilter:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (void)removePostFetchFilterWithIdentifier:(id)arg1;
- (void)removeAllPostFetchFilters;
- (id)findElementMatchingBlock:(CDUnknownBlockType)arg1;
- (id)findElementsMatchingBlock:(CDUnknownBlockType)arg1;
- (id)closestElementToElement:(id)arg1;
- (id)firstElement;
- (id)lastElement;
- (id)nextSiblingOfElement:(id)arg1 didWrap:(_Bool *)arg2;
- (id)previousSiblingOfElement:(id)arg1 didWrap:(_Bool *)arg2;
- (id)nextSiblingOfGroupable:(id)arg1 didWrap:(_Bool *)arg2;
- (id)previousSiblingOfGroupable:(id)arg1 didWrap:(_Bool *)arg2;
- (id)findGroupableMatchingBlock:(CDUnknownBlockType)arg1;
- (void)_debugLogElementCache;

@end
