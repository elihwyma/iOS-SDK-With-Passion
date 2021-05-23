/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContactStore.h>

@protocol CNSiriIntelligenceSettingsProtocol, SGSuggestionsServiceContactsProtocol;

@interface CNSuggestedContactStore : CNContactStore

{
    id <SGSuggestionsServiceContactsProtocol> _suggestionService;
    id <CNSiriIntelligenceSettingsProtocol> _siriIntelligenceSettings;
}

@property (retain, nonatomic) id <SGSuggestionsServiceContactsProtocol> suggestionService;
@property (retain, nonatomic) id <CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;

+ (id)storeIdentifier;
+ (id)storeInfoClasses;
+ (_Bool)isSuggestionsSupported;

- (id)init;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)requestAccessForEntityType:(long long)arg1;
- (_Bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (id)initWithSuggestionsService:(id)arg1 siriIntelligenceSettings:(id)arg2;
- (_Bool)_processSuggestions:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;

@end
