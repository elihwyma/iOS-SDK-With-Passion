/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <Foundation/NSObject.h>

@interface SPDomainManager : NSObject

- (void)_removeAllDomainsForDisplayIdentifier:(id)arg1;
- (void)notifyIndexer;
- (id)getBundleIdForDomainNumber:(id)arg1;
- (void)registerApplication:(id)arg1 withCategories:(id)arg2;
- (void)applicationWasUninstalled:(id)arg1;
- (_Bool)siriSuggestionsEnabled;

@end
