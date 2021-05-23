/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface MFContactsSearchResultsModel : NSObject

{
    NSOperationQueue *_queue;
    NSArray *_recentSearchResults;
    NSArray *_infrequentRecentSearchResults;
    NSMutableDictionary *_localSearchResultsByAddress;
    NSMutableDictionary *_serverSearchResultsByAddress;
    NSMutableDictionary *_recentRecipientsByAddress;
    struct __CFArray *_resultTypesSortOrder;
    struct __CFArray *_resultTypesPriorityOrder;
    struct __CFSet *_finishedResultTypes;
    unsigned long long _preferredType;
    _Bool _favorMobileNumbers;
    int _resetCount;
    NSArray *_enteredRecipients;
}

@property (retain, nonatomic) NSArray *enteredRecipients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reset;
- (_Bool)_isResetting;
- (id)initWithFavorMobileNumbers:(_Bool)arg1;
- (id)initWithResultTypeSortOrderComparator:(CDUnknownFunctionPointerType)arg1 resultTypePriorityComparator:(CDUnknownFunctionPointerType)arg2 favorMobileNumbers:(_Bool)arg3;
- (id)_dictionaryForResultType:(unsigned long long)arg1;
- (id)_bestRecipientForAddress:(id)arg1 fallback:(id)arg2;
- (void)_addBestRecipientsForRecipients:(id)arg1 excluding:(id)arg2 toArray:(id)arg3;
- (void)_addResults:(id)arg1 ofType:(unsigned long long)arg2;
- (_Bool)_shouldProcessResultsAfterFinishingType:(unsigned long long)arg1;
- (_Bool)_didFinishSearchForType:(unsigned long long)arg1;
- (void)_enumerateSearchResultTypesInSortOrderUsingBlock:(CDUnknownBlockType)arg1;
- (void)_appendSortedResultsOfType:(unsigned long long)arg1 excluding:(id)arg2 toResults:(id)arg3;
- (void)addResults:(id)arg1 ofType:(unsigned long long)arg2;
- (void)_finishSearchOfType:(unsigned long long)arg1;
- (void)processAddedResultsOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
