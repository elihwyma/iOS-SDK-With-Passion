/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteFetchRequest, NSString;

@protocol CNAutocompleteSearchProvider, CNScheduler;

@interface CNAutocompleteSearchObservableProvider : NSObject

{
    id <CNAutocompleteSearchProvider> _searchProvider;
    CNAutocompleteFetchRequest *_fetchRequest;
    id <CNScheduler> _scheduler;
}

@property (nonatomic, readonly) id <CNAutocompleteSearchProvider> searchProvider;
@property (nonatomic, readonly) CNAutocompleteFetchRequest *fetchRequest;
@property (nonatomic, readonly) id <CNScheduler> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)providerWithSearchProvider:(id)arg1 fetchRequest:(id)arg2 scheduler:(id)arg3;

- (id)initWithSearchProvider:(id)arg1 fetchRequest:(id)arg2 scheduler:(id)arg3;
- (id)observableWithWrappedSearchProviderGetter:(CDUnknownBlockType)arg1 name:(id)arg2;
- (id)localSearchObservable;
- (id)recentsSearchObservable;
- (id)suggestionsSearchObservable;
- (id)predictionsSearchObservableWithUnfilteredResultPromise:(id)arg1;
- (id)localExtensionSearchObservables;
- (id)directoryServersSearchObservable;
- (id)calendarServersSearchObservable;

@end
