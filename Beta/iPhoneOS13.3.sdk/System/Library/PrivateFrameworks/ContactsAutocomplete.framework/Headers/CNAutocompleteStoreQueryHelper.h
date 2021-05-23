/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteStoreQueryContext, CNAutocompleteUserSession;

@protocol CNAutocompleteFetchDelegate, CNAutocompleteProbeProvider, CNAutocompleteSearchProvider, CNScheduler;

@interface CNAutocompleteStoreQueryHelper : NSObject

{
    id <CNAutocompleteSearchProvider> _searchProvider;
    id <CNAutocompleteFetchDelegate> _delegate;
    id <CNScheduler> _scheduler;
    CNAutocompleteStoreQueryContext *_queryContext;
    id <CNAutocompleteProbeProvider> _probeProvider;
    CNAutocompleteUserSession *_userSession;
}

@property (weak, nonatomic, readonly) id <CNAutocompleteFetchDelegate> delegate;
@property (nonatomic, readonly) id <CNScheduler> scheduler;
@property (nonatomic, readonly) CNAutocompleteStoreQueryContext *queryContext;
@property (nonatomic, readonly) id <CNAutocompleteProbeProvider> probeProvider;
@property (nonatomic, readonly) CNAutocompleteUserSession *userSession;
@property (nonatomic, readonly) id <CNAutocompleteSearchProvider> searchProvider;

- (id)initWithSearchProvider:(id)arg1 delegate:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4 userSession:(id)arg5;
- (id)executeFetchRequest:(id)arg1 delegate:(id)arg2 delegateToken:(id)arg3;

@end
