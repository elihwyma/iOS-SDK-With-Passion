/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSString;

@interface CNAutocompleteDuetSearch : NSObject

{
    CDUnknownBlockType _peopleSuggesterFactory;
    CNContactStore *_contactStore;
}

@property (nonatomic, readonly) CDUnknownBlockType peopleSuggesterFactory;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)configureContext:(id)arg1 withFetchRequest:(id)arg2;
+ (void)configureSettings:(id)arg1 withFetchRequest:(id)arg2;
+ (id)constrainMechanismsForSearchType:(unsigned long long)arg1;
+ (unsigned long long)predictedResultLimit;

- (id)init;
- (id)peopleSuggester;
- (id)initWithPeopleSuggesterFactory:(CDUnknownBlockType)arg1;
- (id)initWithPeopleSuggesterFactory:(CDUnknownBlockType)arg1 contactStore:(id)arg2;
- (id)suggesterContextForFetchRequest:(id)arg1;
- (id)suggesterSettingsForFetchRequest:(id)arg1;
- (id)querySuggester:(id)arg1 withContext:(id)arg2 settings:(id)arg3;
- (id)autocompleteResultsFromSuggesterResults:(id)arg1 factory:(id)arg2;
- (id)resultValueForCDContact:(id)arg1;
- (long long)addressTypeForCDContact:(id)arg1;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
