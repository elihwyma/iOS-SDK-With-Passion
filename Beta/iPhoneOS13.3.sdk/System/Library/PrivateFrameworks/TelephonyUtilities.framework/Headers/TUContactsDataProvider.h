/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class TUContactsDataProviderIgnoredHandles;

@protocol TUContactsDataSource;

@interface TUContactsDataProvider : NSObject

{
    _Bool _useAsianNameFormat;
    CDUnknownBlockType _localeSupportsPrefixHintForFetchRequest;
    id <TUContactsDataSource> _contactsDataSource;
    TUContactsDataProviderIgnoredHandles *_ignoredHandles;
}

@property (nonatomic) _Bool useAsianNameFormat;
@property (copy, nonatomic) CDUnknownBlockType localeSupportsPrefixHintForFetchRequest;
@property (nonatomic, readonly) id <TUContactsDataSource> contactsDataSource;
@property (copy, nonatomic) TUContactsDataProviderIgnoredHandles *ignoredHandles;

+ (id)numberFormatter;
+ (id)asianLocaleCountryCodes;
+ (id)unsupportedLocalesForPrefixHint;
+ (id)defaultContactKeyDescriptors;
+ (id)keysByCombiningDefaultKeysWithKeysToFetch:(id)arg1;

- (id)init;
- (id)executeFetchRequest:(id)arg1;
- (id)initWithContactsDataSource:(id)arg1;
- (id)contactsForHandle:(id)arg1 countryCode:(id)arg2 keysToFetch:(id)arg3 prefixHint:(id)arg4;
- (id)compositeNameForContacts:(id)arg1;
- (id)contactWithIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)unifiedContactsForFetchRequest:(id)arg1 countryCode:(id)arg2;
- (int)personIDForContact:(id)arg1;
- (id)contactLabelForContacts:(id)arg1 matchingHandle:(id)arg2 countryCode:(id)arg3;
- (id)compositeNameForHandles:(id)arg1 countryCode:(id)arg2;
- (id)labeledHandlesForContacts:(id)arg1;
- (id)prefixHintForFetchRequest:(id)arg1;
- (id)localizedCompositeNameForContact:(id)arg1 secondContact:(id)arg2;
- (id)formattedNameForHandle:(id)arg1 countryCode:(id)arg2;
- (id)labeledHandlesForContactWithIdentifier:(id)arg1;

@end
