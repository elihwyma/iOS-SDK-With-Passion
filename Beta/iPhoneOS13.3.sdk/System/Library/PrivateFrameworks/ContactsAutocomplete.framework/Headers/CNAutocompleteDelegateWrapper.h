/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteFetchRequest, CNAutocompleteQueryResponsePreparer, CNAutocompleteUserSession, CNCancelationToken, NSString;

@protocol CNAutocompleteFetchDelegate, CNScheduler;

@interface CNAutocompleteDelegateWrapper : NSObject

{
    id <CNAutocompleteFetchDelegate> _delegate;
    id <CNScheduler> _scheduler;
    CNAutocompleteQueryResponsePreparer *_responsePreparer;
    unsigned long long _openNetworkActivityCalls;
    CNCancelationToken *_cancelationToken;
    CNAutocompleteUserSession *_userSession;
    CNAutocompleteFetchRequest *_fetchRequest;
}

@property (nonatomic, readonly) id <CNAutocompleteFetchDelegate> delegate;
@property (nonatomic, readonly) id <CNScheduler> scheduler;
@property (nonatomic, readonly) CNAutocompleteQueryResponsePreparer *responsePreparer;
@property (nonatomic) unsigned long long openNetworkActivityCalls;
@property (nonatomic, readonly) CNCancelationToken *cancelationToken;
@property (nonatomic, readonly) CNAutocompleteUserSession *userSession;
@property (nonatomic, readonly) CNAutocompleteFetchRequest *fetchRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)responseScheduler;

- (void)cancel;
- (id)sortResults;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
- (_Bool)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDuetResultsFuture:(id)arg1;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3 scheduler:(id)arg4;
- (id)addDiagnosticLog:(CDUnknownBlockType)arg1;
- (id)askDelegateToAdjustResults;
- (id)suppressResultsWithAddresses:(id)arg1;
- (void)queueMessageToDelegate:(CDUnknownBlockType)arg1;
- (void)queueUncancelableMessageToDelegate:(CDUnknownBlockType)arg1;
- (void)queueDidEndNetworkActivityMessageForFetch:(id)arg1;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3;

@end
