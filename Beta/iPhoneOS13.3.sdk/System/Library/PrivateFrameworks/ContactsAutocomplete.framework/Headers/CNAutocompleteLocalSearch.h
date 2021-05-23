/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSString;

@interface CNAutocompleteLocalSearch : NSObject

{
    CNContactStore *_contactStore;
    CNContactStore *_contactFetcherStore;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContactStore *contactFetcherStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContactStore:(id)arg1 contactFetcherStore:(id)arg2;
- (id)groupsForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3;
- (id)peopleForRequest:(id)arg1 contactStore:(id)arg2 contactFetcherStore:(id)arg3;

@end
