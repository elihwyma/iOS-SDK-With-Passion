/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSMutableArray;

@protocol OS_dispatch_queue;

@interface TUSearchController : NSObject

{
    CNContactStore *_contactStore;
    NSMutableArray *_recentsModules;
    NSMutableArray *_searchModules;
    NSObject<OS_dispatch_queue> *_searchQueue;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSMutableArray *recentsModules;
@property (retain, nonatomic) NSMutableArray *searchModules;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;

+ (id)sharedInstance;

- (id)init;
- (void)searchForString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_searchIsRunning;
- (void)_cancelSearches;
- (CDUnknownBlockType)recentsModuleCompletionWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)searchModuleCompletionWithSearchTerm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_searchModuleCompletionWithModules:(id)arg1 searchTerm:(id)arg2 resultsClass:(Class)arg3 completion:(CDUnknownBlockType)arg4;
- (void)recentsWithCompletion:(CDUnknownBlockType)arg1;

@end
