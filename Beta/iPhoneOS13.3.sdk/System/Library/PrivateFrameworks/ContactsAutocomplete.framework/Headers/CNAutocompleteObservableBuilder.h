/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNAutocompleteObservableBuilderBatchingHelper, CNAutocompleteProbeProvider, CNScheduler;

@interface CNAutocompleteObservableBuilder : NSObject

{
    _Bool _supplementalResultsUseNetwork;
    id <CNAutocompleteObservableBuilderBatchingHelper> _batchingHelper;
    id <CNAutocompleteProbeProvider> _probeProvider;
    double _networkActivityStartDelay;
    CDUnknownBlockType _networkActivityDidStartHandler;
    CDUnknownBlockType _networkActivityDidStopHandler;
    id <CNScheduler> _scheduler;
}

@property (nonatomic, readonly) id <CNAutocompleteObservableBuilderBatchingHelper> batchingHelper;
@property (nonatomic, readonly) id <CNAutocompleteProbeProvider> probeProvider;
@property (nonatomic) double networkActivityStartDelay;
@property (nonatomic) _Bool supplementalResultsUseNetwork;
@property (copy, nonatomic) CDUnknownBlockType networkActivityDidStartHandler;
@property (copy, nonatomic) CDUnknownBlockType networkActivityDidStopHandler;
@property (nonatomic, readonly) id <CNScheduler> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supplementalResultsUseNetwork:(unsigned long long)arg1;
+ (id)builderWithSearchType:(unsigned long long)arg1 scheduler:(id)arg2 probeProvider:(id)arg3;

- (void)addContactsObservable:(id)arg1;
- (void)addCoreRecentsObservable:(id)arg1;
- (void)addSuggestionsObservable:(id)arg1;
- (void)addLocalExtensionObservable:(id)arg1;
- (void)addSupplementalObservable:(id)arg1;
- (void)addCachedDirectoryServerObservable:(id)arg1;
- (void)addDirectoryServerObservable:(id)arg1;
- (void)addCachedCalendarServerObservable:(id)arg1;
- (void)addCalendarServerObservable:(id)arg1;
- (id)initWithBatchingHelper:(id)arg1 probeProvider:(id)arg2 scheduler:(id)arg3;
- (id)probeObservable:(id)arg1 forPerformanceWithBlock:(CDUnknownBlockType)arg2;
- (id)combineObservablesInBatch:(id)arg1 scheduler:(id)arg2;
- (void)addDuetObservable:(id)arg1 doOnTimeout:(CDUnknownBlockType)arg2;
- (id)makeObservable;

@end
