/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSString, _CNAutocompleteObservableBuilderBatchingHelper;

@interface _CNAutocompleteCalendarObservableBuilderBatchingHelper : NSObject

{
    _CNAutocompleteObservableBuilderBatchingHelper *_helper;
}

@property (retain, nonatomic) _CNAutocompleteObservableBuilderBatchingHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)batchAtIndexIncludesServer:(unsigned long long)arg1;
- (id)batchedObservables;
- (void)addContactsObservable:(id)arg1;
- (void)addCoreRecentsObservable:(id)arg1;
- (void)addSuggestionsObservable:(id)arg1;
- (void)addLocalExtensionObservable:(id)arg1;
- (void)addDuetObservable:(id)arg1;
- (void)addSupplementalObservable:(id)arg1;
- (void)addCachedDirectoryServerObservable:(id)arg1;
- (void)addDirectoryServerObservable:(id)arg1;
- (void)addCachedCalendarServerObservable:(id)arg1;
- (void)addCalendarServerObservable:(id)arg1;

@end
