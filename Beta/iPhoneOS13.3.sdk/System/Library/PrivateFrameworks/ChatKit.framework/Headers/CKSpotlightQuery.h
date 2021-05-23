/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class IMChatRegistry, MDSearchQuery, NSArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKSpotlightQuery : NSObject

{
    MDSearchQuery *_currentQuery;
    unsigned long long _resultIndex;
    NSArray *_searchResults;
    NSMutableDictionary *_chatGUIDToLatestSearchResult;
    NSObject<OS_dispatch_group> *_searchResultLoadingGroup;
    CDUnknownBlockType _completion;
    _Bool _cancelled;
    IMChatRegistry *_chatRegisteryOverride;
}

@property (retain, nonatomic) IMChatRegistry *chatRegisteryOverride;
@property (nonatomic, readonly) MDSearchQuery *currentQuery;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)_cleanup;
- (id)initWithSearchText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)chatRegistry;
- (void)_callCompletion;
- (void)_processSearchResults;
- (id)initWithSearchText:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 startQuery:(_Bool)arg3;
- (id)initWithSearchText:(id)arg1 chatRegistryOverride:(id)arg2 startQuery:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
