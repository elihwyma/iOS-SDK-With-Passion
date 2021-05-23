/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNAutocompleteFetchDelegate;

@interface _CNAutocompleteFetchDelegateSafeWrapper : NSObject

{
    id <CNAutocompleteFetchDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
- (_Bool)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)autocompleteFetch:(id)arg1 willAdjustResults:(id)arg2;
- (void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2;
- (CDUnknownBlockType)resultComparatorForAutocompleteFetch:(id)arg1;

@end
