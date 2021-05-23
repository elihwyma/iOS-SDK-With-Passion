/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <ESDaemonSupport/ESDClientDelegate.h>

@class NSSet, NSString;

@interface ESDClientCalendarDirectorySearchResponseDelegate : ESDClientDelegate

{
    NSSet *_terms;
    NSSet *_recordTypes;
    unsigned long long _resultLimit;
    id _searchID;
    _Bool _exceededResultLimit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)calendarDirectorySearchFinishedWithError:(id)arg1 exceededResultLimit:(_Bool)arg2;
- (void)performRequest;
- (id)_convertSearchQueryResults:(id)arg1;
- (void)calendarDirectorySearchReturnedResults:(id)arg1;
- (id)initWithAccountID:(id)arg1 client:(id)arg2 terms:(id)arg3 recordTypes:(id)arg4 resultLimit:(unsigned long long)arg5;

@end
