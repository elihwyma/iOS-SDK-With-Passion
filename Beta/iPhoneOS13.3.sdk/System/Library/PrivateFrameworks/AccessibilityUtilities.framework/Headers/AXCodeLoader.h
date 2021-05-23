/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@protocol AXImageMonitor, OS_dispatch_queue, OS_dispatch_source;

@interface AXCodeLoader : NSObject

{
    id <AXImageMonitor> _imageMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_loadAccessibilityCodeItemsSource;
    NSObject<OS_dispatch_source> *_dyldImageActivityCoalesceTimer;
    long long _monitoredLoadTriggeringImageCountSinceLastLoad;
    NSMutableSet *_trackedCodeItems;
    NSMutableSet *_accessibilityCodeItems;
    CDUnknownBlockType _beginTrackingCompletion;
    NSObject<OS_dispatch_queue> *_beginTrackingCompletionQueue;
    _Bool _initialLoadHasOccurred;
    _Bool _initialLoadHasFinished;
    NSString *_currentPlatformKey;
    _Bool _shouldAutoloadAccessibilityCodeItems;
    long long _trackingMode;
    CDUnknownBlockType _shouldLoadAccessibilityCodeItemBlock;
    CDUnknownBlockType _didLoadAccessibilityCodeItemBlock;
    CDUnknownBlockType _loadEventWillOccurBlock;
    CDUnknownBlockType _loadEventDidOccurBlock;
}

@property (nonatomic) long long trackingMode;
@property (nonatomic, readonly) _Bool isTrackingLoadedCodeItems;
@property (nonatomic, readonly) _Bool isInitialLoadFinished;
@property (nonatomic) _Bool shouldAutoloadAccessibilityCodeItems;
@property (copy, nonatomic) CDUnknownBlockType shouldLoadAccessibilityCodeItemBlock;
@property (copy, nonatomic) CDUnknownBlockType didLoadAccessibilityCodeItemBlock;
@property (copy, nonatomic) CDUnknownBlockType loadEventWillOccurBlock;
@property (copy, nonatomic) CDUnknownBlockType loadEventDidOccurBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultLoader;

- (id)init;
- (id)codeItemForBundle:(id)arg1;
- (id)initWithImageMonitor:(id)arg1;
- (id)_platformKeyForPlatform:(unsigned int)arg1;
- (void)_loadAccessibilityCodeItems;
- (void)_updateAccessibilityCodeItemDefinitionsIfNeeded;
- (void)_associateAccessibilityCodeItemWithLoadedCodeItem:(id)arg1;
- (id)_queue_loadedCodeItemsUsingTrackedItemsIfAvailable:(_Bool)arg1;
- (void)_consumeBeginTrackingCompletionHandlerIfNeeded;
- (id)_accessibilityBundleMapURLs;
- (id)_createAccessibilityCodeItemsFromBundleMapURLs:(id)arg1;
- (void)_reconcileTrackedCodeItemsWithAccessibilityCodeItemDefinitions;
- (void)_associateAccessibilityCodeItemsWithAllTrackedCodeItems;
- (id)_accessibilityCodeItemMatchingName:(id)arg1 type:(long long)arg2 path:(id)arg3;
- (CDUnknownBlockType)_validLoadEventWillOccurBlock;
- (CDUnknownBlockType)_validShouldLoadAccessibilityCodeItemBlock;
- (CDUnknownBlockType)_validDidLoadAccessibilityCodeItemBlock;
- (CDUnknownBlockType)_validLoadEventDidOccurBlock;
- (void)_addTrackedCodeItem:(id)arg1;
- (void)_scheduleDyldImageActivityTimerWithDelay:(double)arg1;
- (id)loadedCodeItemsUsingTrackedItemsIfAvailable:(_Bool)arg1;
- (void)imageMonitor:(id)arg1 didAddImage:(id)arg2;
- (void)iterateInitialImageListForImageMonitor:(id)arg1;
- (void)beginTrackingLoadedCodeItemsWithMode:(long long)arg1 completion:(CDUnknownBlockType)arg2 targetQueue:(id)arg3;
- (void)endTrackingLoadedCodeItemsWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
- (id)loadedCodeItemPathsUsingTrackedItemsIfAvailable:(_Bool)arg1;
- (void)setAccessibilityCodeItemsNeedLoaded;
- (void)_cancelDyldImageActivityTimer;
- (void)prewarmAccessibilityCodeItemDefinitionsWithCompletion:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
- (void)queryAccessibilityBundleIsLoadedWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_stateDescForItem:(id)arg1;
- (id)recomputedCodeItemsForAllFrameworks;
- (id)recomputedCodeItemsForLoadedAccessibilityBundles;
- (id)accessibilityCodeItemDefinitions;
- (void)logLoaderState;
- (id)trackedCodeItems;
- (id)rogueAccessibilityCodeItems;

@end
