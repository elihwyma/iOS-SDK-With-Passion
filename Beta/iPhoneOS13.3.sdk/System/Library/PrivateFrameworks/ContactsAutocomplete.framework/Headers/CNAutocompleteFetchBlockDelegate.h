/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNAutocompleteFetchBlockDelegate : NSObject

{
    CDUnknownBlockType _resultHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _finishHandler;
    CDUnknownBlockType _beganNetworkActivityHandler;
    CDUnknownBlockType _endedNetworkActivityHandler;
    CDUnknownBlockType _supplementalResultHandler;
    CDUnknownBlockType _adjustmentHandler;
    CDUnknownBlockType _willSortHandler;
    CDUnknownBlockType _comparatorHandler;
}

@property (copy) CDUnknownBlockType resultHandler;
@property (copy) CDUnknownBlockType errorHandler;
@property (copy) CDUnknownBlockType finishHandler;
@property (copy) CDUnknownBlockType beganNetworkActivityHandler;
@property (copy) CDUnknownBlockType endedNetworkActivityHandler;
@property (copy) CDUnknownBlockType supplementalResultHandler;
@property (copy) CDUnknownBlockType adjustmentHandler;
@property (copy) CDUnknownBlockType willSortHandler;
@property (copy) CDUnknownBlockType comparatorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)respondsToSelector:(SEL)arg1;
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
