/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteDelegateWrapper, CNAutocompleteFetchRequest, CNAutocompleteUserSession, CNCancelationToken, NSString;

@protocol CNAutocompleteProbeProvider, CNAutocompleteSearchProvider, CNAutocompleteSourceInclusionPolicy, CNCancelable, CNScheduler;

@interface CNAutocompleteQuery : NSObject

{
    CNAutocompleteFetchRequest *_request;
    CNAutocompleteDelegateWrapper *_delegate;
    id <CNScheduler> _scheduler;
    CNCancelationToken *_cancelationToken;
    id <CNAutocompleteSearchProvider> _searchProvider;
    id <CNAutocompleteProbeProvider> _probeProvider;
    CNAutocompleteUserSession *_userSession;
    id <CNCancelable> _delegateToken;
    id <CNAutocompleteSourceInclusionPolicy> _sourceInclusionPolicy;
}

@property (copy) CNAutocompleteFetchRequest *request;
@property (retain) id <CNAutocompleteSearchProvider> searchProvider;
@property (retain) CNAutocompleteDelegateWrapper *delegate;
@property (retain) id <CNScheduler> scheduler;
@property (retain) id <CNAutocompleteProbeProvider> probeProvider;
@property (retain) CNAutocompleteUserSession *userSession;
@property (retain) CNCancelationToken *cancelationToken;
@property (weak) id <CNCancelable> delegateToken;
@property (retain) id <CNAutocompleteSourceInclusionPolicy> sourceInclusionPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldSortResultsForPolicy:(id)arg1;
+ (_Bool)shouldSuppressAddressesAlreadyChosenForRequest:(id)arg1;
+ (_Bool)searchTypeSupportsSuppressionOfAlreadyChosenAddresses:(unsigned long long)arg1;
+ (id)observableForQuery:(id)arg1 context:(id)arg2;
+ (_Bool)shouldPerformQueryForRequest:(id)arg1;
+ (void)configureNetworkForBuilder:(id)arg1 query:(id)arg2;
+ (id)observableWithSupplementalResultsForQuery:(id)arg1;
+ (void)configureNetworkPolicyForBuilder:(id)arg1 query:(id)arg2;
+ (void)configureNetworkActivityHandlersForBuilder:(id)arg1 query:(id)arg2;
+ (id)queryWithRequest:(id)arg1 searchProvider:(id)arg2 delegate:(id)arg3 probeProvider:(id)arg4 scheduler:(id)arg5 userSession:(id)arg6 delegateToken:(id)arg7;

- (void)cancel;
- (id)execute;
- (id)initWithRequest:(id)arg1 searchProvider:(id)arg2 delegate:(id)arg3 probeProvider:(id)arg4 scheduler:(id)arg5 userSession:(id)arg6 delegateToken:(id)arg7;
- (id)makeDelegateWrapperWithDelegate:(id)arg1 forRequest:(id)arg2 sourceInclusionPolicy:(id)arg3 userSession:(id)arg4;
- (id)executeWithContext:(id)arg1;
- (void)searchOperationReportedResults:(id)arg1;
- (void)searchOperationsHaveFinished;
- (void)searchOperationEncounteredError:(id)arg1;
- (void)searchOperationsHaveBegunNetworkActivity;
- (void)searchOperationsHaveEndedNetworkActivity;

@end
