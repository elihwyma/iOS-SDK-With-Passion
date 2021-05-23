/*
 Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, TCSSuggestions;

@protocol TCSSuggestionsDataSourceDelegate;

@interface TCSSuggestionsDataSource : NSObject

{
    id <TCSSuggestionsDataSourceDelegate> _delegate;
    TCSSuggestions *_suggestions;
    NSArray *_suggestedContacts;
}

@property (retain, nonatomic) TCSSuggestions *suggestions;
@property (retain, nonatomic) NSArray *suggestedContacts;
@property (weak, nonatomic) id <TCSSuggestionsDataSourceDelegate> delegate;
@property (nonatomic, readonly) _Bool hasSuggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (void)dealloc;
- (void)_invalidate;
- (id)initWithSuggestions:(id)arg1;
- (void)suggestionsDidChange:(id)arg1;
- (void)_handleDeviceFirstUnlock;
- (void)_handlePersonNamePreferencesChangeNotification;
- (void)_handleContactStoreDidChange:(id)arg1;
- (id)_sortedContactsArrayFromArray:(id)arg1;
- (void)_notifyDelegateSuggestionsChanged;

@end
