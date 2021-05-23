/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol CNScheduler, SGSuggestionsServiceContactsProtocol;

@interface CNAutocompleteSuggestionsProbe : NSObject

{
    id <SGSuggestionsServiceContactsProtocol> _sgService;
    id <CNScheduler> _workScheduler;
    NSString *_bundleID;
    NSMutableArray *_pendingBlocks;
}

@property (nonatomic, readonly) id <SGSuggestionsServiceContactsProtocol> sgService;
@property (nonatomic, readonly) id <CNScheduler> workScheduler;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSMutableArray *pendingBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (int)suggestionSourcesForAutocompleteResult:(id)arg1;
+ (id)suggestionIdentifierForAutocompleteResult:(id)arg1;
+ (id)contactIdentifierForAutocompleteResult:(id)arg1;

- (id)init;
- (void)sendData;
- (void)recordUserSelectedAutocompleteResult:(id)arg1;
- (id)initWithSuggestionsService:(id)arg1 schedulerProvider:(id)arg2 bundleIdentifier:(id)arg3;
- (void)recordSGServiceMessage:(CDUnknownBlockType)arg1;
- (void)recordUserSawResultsConsideredSuggestion;

@end
