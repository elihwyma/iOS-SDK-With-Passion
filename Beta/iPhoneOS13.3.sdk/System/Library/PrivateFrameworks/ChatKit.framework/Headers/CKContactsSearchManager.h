/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteSearchManager, NSArray, NSCharacterSet, NSMutableArray, NSNumber, NSString;

@protocol CKContactsSearchManagerDelegate;

@interface CKContactsSearchManager : NSObject

{
    _Bool _suppressGroupSuggestions;
    _Bool _biasForOutgoingInteraction;
    id <CKContactsSearchManagerDelegate> _delegate;
    NSArray *_enteredRecipients;
    CNAutocompleteSearchManager *_searchManager;
    NSCharacterSet *_emojiCharacterSet;
    NSMutableArray *_searchResults;
    NSNumber *_currentSearchTaskID;
    NSString *_searchText;
}

@property (retain, nonatomic) CNAutocompleteSearchManager *searchManager;
@property (retain, nonatomic) NSCharacterSet *emojiCharacterSet;
@property (retain, nonatomic) NSMutableArray *searchResults;
@property (retain, nonatomic) NSNumber *currentSearchTaskID;
@property (retain, nonatomic) NSString *searchText;
@property (weak, nonatomic) id <CKContactsSearchManagerDelegate> delegate;
@property (retain, nonatomic) NSArray *enteredRecipients;
@property (nonatomic) _Bool suppressGroupSuggestions;
@property (nonatomic) _Bool biasForOutgoingInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)removeRecipient:(id)arg1;
- (void)cancelSearch;
- (void)searchWithText:(id)arg1;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedTaskWithID:(id)arg1;
- (void)beganNetworkActivity;
- (void)endedNetworkActivity;
- (id)_cullOldResults:(id)arg1;
- (id)_sortResultsByDate:(id)arg1;
- (struct _NSRange)_rangeForSearchTerm:(id)arg1 inTarget:(id)arg2 tokenizedByCharacterSet:(id)arg3;
- (id)matchingConversationWithGuid:(id)arg1;
- (_Bool)shouldIncludeGroupInResults:(id)arg1;
- (id)createAutocompelteGroupMembersFromParticipants:(id)arg1;
- (id)participantMatchResultsForSearchTerm:(id)arg1;
- (id)nameGroupSearchResults;
- (id)participantMatchGroupResults;
- (_Bool)getSupplementalGroupsForSearchQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_sortSearchResultsWithCoreRecentsResults:(id)arg1 displayNameMatches:(id)arg2 participantNameMatches:(id)arg3;
- (id)_filterGroupResults:(id)arg1;

@end
