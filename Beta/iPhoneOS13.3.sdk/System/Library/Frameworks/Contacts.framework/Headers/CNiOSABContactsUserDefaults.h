/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContactsUserDefaults.h>

@class CNiOSABContactsUserDefaultsABWrapper, NSCache, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults

{
    NSMutableDictionary *_observerCountPerKey;
    NSCache *_valueCache;
    CNiOSABContactsUserDefaultsABWrapper *_abWrapper;
}

@property (retain, nonatomic) NSMutableDictionary *observerCountPerKey;
@property (retain, nonatomic) NSCache *valueCache;
@property (nonatomic, readonly) CNiOSABContactsUserDefaultsABWrapper *abWrapper;

- (id)init;
- (void)dealloc;
- (id)countryCode;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (long long)shortNameFormat;
- (void)setShortNameFormat:(long long)arg1;
- (long long)sortOrder;
- (_Bool)shortNameFormatPrefersNicknames;
- (_Bool)isShortNameFormatEnabled;
- (void)flushCache;
- (long long)displayNameOrder;
- (long long)newContactDisplayNameOrder;
- (void)setDisplayNameOrder:(long long)arg1;
- (void)setShortNameFormatEnabled:(_Bool)arg1;
- (void)setShortNameFormatPrefersNicknames:(_Bool)arg1;
- (id)filteredGroupAndContainerIDs;
- (void)setFilteredGroupAndContainerIDs:(id)arg1;
- (id)initWithABWrapper:(id)arg1;
- (void)_registerObserverForKey:(id)arg1;
- (void)_unregisterObserverForKey:(id)arg1;

@end
