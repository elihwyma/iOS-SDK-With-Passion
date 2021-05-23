/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class MFContactsSearchManager, NSMutableArray, NSNumber, NSString;

@protocol AAUIContactsSearchDelegate;

@interface FAContactsSearchController : NSObject

{
    MFContactsSearchManager *_searchManager;
    long long _countOfPendingResultBatches;
    _Bool _didFindResults;
    NSNumber *_searchTaskID;
    id <AAUIContactsSearchDelegate> _delegate;
    NSMutableArray *_resultsArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1;
- (void)cancelSearch;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedTaskWithID:(id)arg1;
- (void)beganNetworkActivity;
- (void)endedNetworkActivity;
- (void)_cancelSearchAndNotify:(_Bool)arg1;
- (void)_endSearch;
- (void)beginSearchWithString:(id)arg1;

@end
