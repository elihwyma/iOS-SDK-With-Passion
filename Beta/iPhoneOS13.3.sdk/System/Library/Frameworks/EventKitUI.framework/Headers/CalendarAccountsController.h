/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface CalendarAccountsController : NSObject

{
    NSMutableDictionary *_lastStoreListingRefreshDates;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    ACAccountStore *_accountStore;
}

+ (void)initialize;
+ (void)invalidate;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)accountStore;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (_Bool)sourceIsManaged:(id)arg1;
- (int)sortOrderForSourceType:(long long)arg1;
- (int)sortOrderForSource:(id)arg1;
- (id)_accountForAccountIdentifier:(id)arg1;
- (id)_displayAccountForAccountWithIdentifier:(id)arg1;
- (id)accountTypeTitleForSourceWithExternalId:(id)arg1;
- (id)titleForSource:(id)arg1 forBeginningOfSentence:(_Bool)arg2;
- (id)accountTypeTitleForSource:(id)arg1;
- (int)sortOrderForStoreType:(long long)arg1;
- (_Bool)sourceListingNeedsRefresh:(id)arg1;
- (void)refreshListingForSource:(id)arg1 isUserRequested:(_Bool)arg2;

@end
