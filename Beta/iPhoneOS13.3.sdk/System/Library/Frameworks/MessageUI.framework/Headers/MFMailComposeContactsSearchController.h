/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteSearchManager, NSMutableArray, NSNumber, NSString;

@protocol MFMailComposeContactsSearchControllerDelegate;

@interface MFMailComposeContactsSearchController : NSObject

{
    CNAutocompleteSearchManager *_manager;
    NSMutableArray *_autocompleteSearchResults;
    NSMutableArray *_corecipientSearchResults;
    NSNumber *_corecipientSearchTaskID;
    _Bool _foundAnySearchResults;
    unsigned long long _waitingOnSearchResultsCount;
    id <MFMailComposeContactsSearchControllerDelegate> _delegate;
    NSNumber *_taskID;
}

@property (retain, nonatomic) NSNumber *taskID;
@property (weak, nonatomic) id <MFMailComposeContactsSearchControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_reset;
- (void)removeRecipient:(id)arg1;
- (void)cancelSearch;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedSearchingForCorecipients;
- (void)finishedTaskWithID:(id)arg1;
- (void)beganNetworkActivity;
- (void)endedNetworkActivity;
- (void)searchWithString:(id)arg1;
- (void)searchWithString:(id)arg1 enteredRecipients:(id)arg2 title:(id)arg3;
- (void)_cancelSearchAndNotify:(_Bool)arg1;
- (void)_finishSearch;
- (void)findCorecipientsWithRecipients:(id)arg1;

@end
